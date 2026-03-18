/*
 * XREFs of ?ProcessSetFilterList@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_SETFILTERLIST@@@Z @ 0x180107D80
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessSetFilterList(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_METABITMAPRENDERTARGET_SETFILTERLIST *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // edx
  struct CResource *Resource; // rsi
  int v8; // eax

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( v5 )
    Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x55u);
  if ( Resource != this[47] )
  {
    v8 = CResource::RegisterNotifier((CResource *)this, Resource);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x310u);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[47]);
      this[47] = Resource;
    }
  }
  return v4;
}

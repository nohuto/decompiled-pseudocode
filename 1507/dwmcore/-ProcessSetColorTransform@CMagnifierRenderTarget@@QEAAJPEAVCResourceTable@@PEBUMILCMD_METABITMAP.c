/*
 * XREFs of ?ProcessSetColorTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_SETCOLORTRANSFORM@@@Z @ 0x1800ECC98
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180048368 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessSetColorTransform(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_METABITMAPRENDERTARGET_SETCOLORTRANSFORM *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  struct CResource *Resource; // rsi
  int v8; // eax

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 48LL)) != 0LL )
  {
    if ( Resource != this[11] )
    {
      v8 = CResource::RegisterNotifier((CResource *)this, Resource);
      v4 = v8;
      if ( v8 >= 0 )
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, this[11]);
        this[11] = Resource;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x35Cu);
      }
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x353u);
  }
  return v4;
}

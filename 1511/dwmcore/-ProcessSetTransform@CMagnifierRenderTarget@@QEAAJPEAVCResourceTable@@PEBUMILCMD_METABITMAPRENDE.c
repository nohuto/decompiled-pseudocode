/*
 * XREFs of ?ProcessSetTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_SETTRANSFORM@@@Z @ 0x1800F3E5C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180085898 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessSetTransform(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_METABITMAPRENDERTARGET_SETTRANSFORM *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  struct CResource *Resource; // rsi
  int v8; // eax

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x39u)) != 0LL )
  {
    if ( Resource != this[12] )
    {
      v8 = CResource::RegisterNotifier((CResource *)this, Resource);
      v4 = v8;
      if ( v8 >= 0 )
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, this[12]);
        this[12] = Resource;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x294u);
      }
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x28Bu);
  }
  return v4;
}

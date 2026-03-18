/*
 * XREFs of ?ProcessSetColorTransform@CVisual@@UEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z @ 0x180109A00
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800ACB14 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     ?GetColorTransform@CVisual@@QEBAPEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DF@@@XZ @ 0x18010A158 (-GetColorTransform@CVisual@@QEBAPEAV-$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMR.c)
 */

__int64 __fastcall CVisual::ProcessSetColorTransform(
        char **this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETCOLORTRANSFORM *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  struct CResource *Resource; // rsi
  struct CResource *ColorTransform; // rbp
  int v9; // eax
  struct CResource *v11; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  Resource = 0LL;
  if ( !(_DWORD)v5 || (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x35u)) != 0LL )
  {
    ColorTransform = (struct CResource *)CVisual::GetColorTransform(this, v5);
    if ( Resource != ColorTransform )
    {
      v9 = CResource::RegisterNotifier((CResource *)this, Resource);
      v4 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xA1Au);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, ColorTransform);
        v11 = Resource;
        if ( Resource == (struct CResource *)`CVisual::SetColorTransform'::`2'::sc_defaultValue )
          *((_DWORD *)this[34] + 1) &= ~0x20000000u;
        else
          CSparseStorage::SetData(this + 34, 3, 8u, &v11);
        CVisual::PropagateFlags((struct CVisual *)this, 0, 1, 0, 0, 0, 0);
      }
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xA12u);
  }
  return v4;
}

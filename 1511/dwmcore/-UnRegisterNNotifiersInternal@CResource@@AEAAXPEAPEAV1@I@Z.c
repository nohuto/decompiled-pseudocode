/*
 * XREFs of ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x18008557C
 * Callers:
 *     ?UnRegisterNotifiers@CAtlasedRectsGroup@@UEAAXXZ @ 0x1800267C0 (-UnRegisterNotifiers@CAtlasedRectsGroup@@UEAAXXZ.c)
 *     ?UnRegisterNotifiers@CTransformGroup@@UEAAXXZ @ 0x1800669C0 (-UnRegisterNotifiers@CTransformGroup@@UEAAXXZ.c)
 *     ?ProcessAppend@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x180066B30 (-ProcessAppend@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z.c)
 *     ?UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ @ 0x1800687A0 (-UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ.c)
 *     ?ProcessAppend@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x1800688CC (-ProcessAppend@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x18008562C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?UnRegisterNotifiers@CDcompRenderTargetGroup@@UEAAXXZ @ 0x1800B2B00 (-UnRegisterNotifiers@CDcompRenderTargetGroup@@UEAAXXZ.c)
 *     ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x18012FC2C (-ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?UnRegisterNotifiers@CGeometry2DGroup@@UEAAXXZ @ 0x18012FFF0 (-UnRegisterNotifiers@CGeometry2DGroup@@UEAAXXZ.c)
 *     ?UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ @ 0x180130060 (-UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CAtlasedRects@@UEAAKXZ @ 0x180025300 (-Release@CAtlasedRects@@UEAAKXZ.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x180067E18 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x1800856B0 (-Release@CResource@@UEAAKXZ.c)
 */

void __fastcall CResource::UnRegisterNNotifiersInternal(CResource *this, struct CResource **a2, unsigned int a3)
{
  __int64 v4; // rbp
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(CAtlasedRects *); // rsi

  if ( a3 )
  {
    v4 = a3;
    do
    {
      v6 = (__int64)*a2;
      if ( *a2 && CPtrArrayBase::Remove((CPtrArrayBase *)(v6 + 24), (__int64)this) )
      {
        v7 = *(__int64 (__fastcall **)(CAtlasedRects *))(*(_QWORD *)v6 + 16LL);
        if ( v7 == CAtlasedRects::Release )
        {
          CAtlasedRects::Release((CAtlasedRects *)v6);
        }
        else if ( (char *)v7 == (char *)CResource::Release )
        {
          CResource::Release((CResource *)v6);
        }
        else
        {
          v7((CAtlasedRects *)v6);
        }
      }
      *a2++ = 0LL;
      --v4;
    }
    while ( v4 );
  }
}

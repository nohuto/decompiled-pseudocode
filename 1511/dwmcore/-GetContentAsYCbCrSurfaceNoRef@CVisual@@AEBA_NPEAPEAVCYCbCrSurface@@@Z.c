/*
 * XREFs of ?GetContentAsYCbCrSurfaceNoRef@CVisual@@AEBA_NPEAPEAVCYCbCrSurface@@@Z @ 0x1800488B8
 * Callers:
 *     ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@AEAA_NXZ @ 0x180048EA0 (-HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@AEAA_NXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EAE0 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CVisual::GetContentAsYCbCrSurfaceNoRef(CVisual *this, struct CYCbCrSurface **a2)
{
  __int64 v2; // rdi
  char v3; // bl
  __int64 (__fastcall *v6)(__int64, __int64); // rbp
  char v7; // al

  v2 = *((_QWORD *)this + 45);
  v3 = 0;
  if ( v2 )
  {
    v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 48LL);
    if ( v6 == CRenderData::IsOfType )
      v7 = CRenderData::IsOfType(v2, 94LL);
    else
      v7 = v6(v2, 94LL);
    if ( v7 )
    {
      v3 = 1;
      *a2 = (struct CYCbCrSurface *)*((_QWORD *)this + 45);
    }
  }
  return v3;
}

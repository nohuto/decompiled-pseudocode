/*
 * XREFs of ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x18002E2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllCommandListRepresentations@CCommandListBitmapRepresentation@@IEAAXXZ @ 0x18002C430 (-ReleaseAllCommandListRepresentations@CCommandListBitmapRepresentation@@IEAAXXZ.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x18002E6E4 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 */

void __fastcall CCompositionSurfaceBitmap::NotifyUpdate(
        CCompositionSurfaceBitmap *this,
        char a2,
        char a3,
        char a4,
        const struct CRegion *a5,
        const struct ScrollOptimization *a6)
{
  unsigned int v6; // ebx
  unsigned int i; // edx
  __int64 v12; // rcx

  v6 = 0;
  if ( !a2 || a3 || a4 )
  {
    CCommandListBitmapRepresentation::ReleaseAllCommandListRepresentations((CCompositionSurfaceBitmap *)((char *)this + 16));
  }
  else
  {
    for ( i = 0; i < *((_DWORD *)this + 86); *(_BYTE *)(*((_QWORD *)this + 40) + 16 * v12 + 8) = 1 )
      v12 = i++;
  }
  if ( a2 )
    CCompositionSurfaceBitmap::EnsureBitmapRealization((CCompositionSurfaceBitmap *)((char *)this - 56), 1);
  if ( a3 )
  {
    v6 = 6;
    goto LABEL_16;
  }
  if ( a4 )
  {
LABEL_16:
    CResource::NotifyOnChanged((char *)this - 56, v6, 0LL);
    return;
  }
  *((_QWORD *)this + 51) = a5;
  if ( a6 )
  {
    *((_OWORD *)this + 26) = *(_OWORD *)a6;
    *((_QWORD *)this + 54) = *((_QWORD *)a6 + 2);
    *((_DWORD *)this + 110) = *((_DWORD *)a6 + 6);
  }
  CResource::NotifyOnChanged((char *)this - 56, 1LL, (char *)this - 56);
}

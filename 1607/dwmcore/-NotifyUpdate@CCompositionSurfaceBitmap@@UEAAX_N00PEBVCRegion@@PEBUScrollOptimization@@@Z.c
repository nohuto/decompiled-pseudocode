/*
 * XREFs of ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_N00PEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x180093850
 * Callers:
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x180098B90 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 * Callees:
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180093158 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?ReleaseAllCommandListRepresentations@CCommandListBitmapRepresentation@@IEAAXXZ @ 0x1800B0DC0 (-ReleaseAllCommandListRepresentations@CCommandListBitmapRepresentation@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
  __int64 i; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx

  v6 = 0;
  if ( !a2 || a3 || a4 )
  {
    CCommandListBitmapRepresentation::ReleaseAllCommandListRepresentations((CCompositionSurfaceBitmap *)((char *)this + 16));
  }
  else
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 88); *(_BYTE *)(*((_QWORD *)this + 41) + 16 * v12 + 8) = 1 )
    {
      v12 = (unsigned int)i;
      i = (unsigned int)(i + 1);
    }
  }
  v13 = *((_QWORD *)this + 40);
  if ( v13 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 8LL))(v13, i);
    *((_QWORD *)this + 40) = 0LL;
  }
  if ( a2 )
    CCompositionSurfaceBitmap::EnsureBitmapRealization((CCompositionSurfaceBitmap *)((char *)this - 128), 1);
  if ( a3 )
  {
    v6 = 6;
    goto LABEL_17;
  }
  if ( a4 )
  {
LABEL_17:
    CResource::NotifyOnChanged((_DWORD *)this - 32, v6, 0LL);
    return;
  }
  *((_QWORD *)this + 51) = a5;
  if ( a6 )
  {
    *((_OWORD *)this + 26) = *(_OWORD *)a6;
    *((_QWORD *)this + 54) = *((_QWORD *)a6 + 2);
    *((_DWORD *)this + 110) = *((_DWORD *)a6 + 6);
  }
  CResource::NotifyOnChanged((_DWORD *)this - 32, 1u, (void (__fastcall ***)(void *, GUID *, __int64 *))this - 16);
}

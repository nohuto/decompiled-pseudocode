/*
 * XREFs of ?GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0048838
 * Callers:
 *     ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0048418 (-GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C004C380 (NtDCompositionGetFrameSurfaceUpdates.c)
 * Callees:
 *     ?GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C0048D80 (-GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?GetRegionHandleAndReset@CRegion@@QEAAJPEAPEAUHRGN__@@@Z @ 0x1C004A55C (-GetRegionHandleAndReset@CRegion@@QEAAJPEAPEAUHRGN__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::GetSurfaceUpdate(
        CCompositionSurface *this,
        __int64 a2,
        struct CSM_SURFACE_UPDATE *a3)
{
  int v6; // edi
  struct CCompositionBuffer *RenderingBuffer; // rax
  struct CCompositionBuffer *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rax
  int v12; // eax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v6 = -1073741823;
  if ( *((_QWORD *)this + 7) != a2 || !a2 )
  {
    RenderingBuffer = CCompositionSurface::GetRenderingBuffer(this);
    v8 = RenderingBuffer;
    if ( RenderingBuffer )
    {
      v6 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, __int64 *))(*(_QWORD *)RenderingBuffer + 176LL))(
             RenderingBuffer,
             &v14);
      if ( v6 >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v8 + 184LL))(v8);
        v10 = v9;
        if ( *((int *)this + 9) <= 0 )
        {
          if ( v9 )
            (*(void (__fastcall **)(struct CCompositionBuffer *, __int64))(*(_QWORD *)v8 + 72LL))(v8, v9);
          return (unsigned int)-1073741823;
        }
        else
        {
          *((_QWORD *)this + 7) = a2;
          *(_QWORD *)a3 = *((_QWORD *)this - 1);
          *((_QWORD *)a3 + 1) = *((_QWORD *)v8 + 1);
          *((_OWORD *)a3 + 1) = *(_OWORD *)((char *)v8 + 40);
          *((_OWORD *)a3 + 2) = *(_OWORD *)((char *)v8 + 56);
          *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)v8 + 72);
          *((_OWORD *)a3 + 4) = *(_OWORD *)((char *)v8 + 88);
          *((_OWORD *)a3 + 5) = *(_OWORD *)((char *)v8 + 104);
          *((_OWORD *)a3 + 6) = *(_OWORD *)((char *)v8 + 120);
          *((_OWORD *)a3 + 7) = *(_OWORD *)((char *)v8 + 136);
          *((_OWORD *)a3 + 8) = *(_OWORD *)((char *)v8 + 152);
          *((_OWORD *)a3 + 9) = *(_OWORD *)((char *)v8 + 168);
          *((_OWORD *)a3 + 10) = *(_OWORD *)((char *)v8 + 184);
          *((_QWORD *)a3 + 22) = *((_QWORD *)v8 + 25);
          v11 = v14;
          *(_OWORD *)((char *)a3 + 184) = *(_OWORD *)(v14 + 24);
          *(_OWORD *)((char *)a3 + 200) = *(_OWORD *)(v11 + 40);
          CRegion::GetRegionHandleAndReset(*((CRegion **)v8 + 36), (HRGN *)a3 + 27);
          *((_OWORD *)a3 + 14) = *(_OWORD *)((char *)v8 + 296);
          *((_QWORD *)a3 + 30) = *((_QWORD *)v8 + 39);
          *((_DWORD *)a3 + 62) = *((_DWORD *)v8 + 80);
          *((_DWORD *)v8 + 74) = 0;
          v12 = *((_DWORD *)v8 + 71);
          *((_BYTE *)v8 + 324) = 0;
          *((_DWORD *)a3 + 63) = v12;
          *((_QWORD *)a3 + 32) = v10;
        }
      }
    }
  }
  return (unsigned int)v6;
}

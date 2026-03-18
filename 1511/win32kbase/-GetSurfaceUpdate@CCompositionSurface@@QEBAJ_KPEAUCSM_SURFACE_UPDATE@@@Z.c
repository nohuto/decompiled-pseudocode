/*
 * XREFs of ?GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0039E70
 * Callers:
 *     ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0039C4C (-GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     ?GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C003A324 (-GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?GetRegionHandleAndReset@CRegion@@QEAAJPEAPEAUHRGN__@@@Z @ 0x1C003EC38 (-GetRegionHandleAndReset@CRegion@@QEAAJPEAPEAUHRGN__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::GetSurfaceUpdate(
        CCompositionSurface *this,
        __int64 a2,
        struct CSM_SURFACE_UPDATE *a3)
{
  int v6; // esi
  struct CCompositionBuffer *RenderingBuffer; // rax
  struct CCompositionBuffer *v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v6 = -1073741823;
  if ( *((_QWORD *)this + 7) != a2 || !a2 )
  {
    RenderingBuffer = CCompositionSurface::GetRenderingBuffer(this);
    v8 = RenderingBuffer;
    if ( RenderingBuffer )
    {
      if ( *((int *)this + 9) > 0 )
      {
        v6 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, __int64 *))(*(_QWORD *)RenderingBuffer + 176LL))(
               RenderingBuffer,
               &v12);
        if ( v6 >= 0 )
        {
          *((_QWORD *)this + 7) = a2;
          *(_QWORD *)a3 = *((_QWORD *)this - 1);
          *((_QWORD *)a3 + 1) = *((_QWORD *)v8 + 2);
          *((_OWORD *)a3 + 1) = *((_OWORD *)v8 + 3);
          *((_OWORD *)a3 + 2) = *((_OWORD *)v8 + 4);
          *((_OWORD *)a3 + 3) = *((_OWORD *)v8 + 5);
          *((_OWORD *)a3 + 4) = *((_OWORD *)v8 + 6);
          *((_OWORD *)a3 + 5) = *((_OWORD *)v8 + 7);
          *((_OWORD *)a3 + 6) = *((_OWORD *)v8 + 8);
          *((_OWORD *)a3 + 7) = *((_OWORD *)v8 + 9);
          *((_OWORD *)a3 + 8) = *((_OWORD *)v8 + 10);
          *((_OWORD *)a3 + 9) = *((_OWORD *)v8 + 11);
          *((_OWORD *)a3 + 10) = *((_OWORD *)v8 + 12);
          *((_QWORD *)a3 + 22) = *((_QWORD *)v8 + 26);
          v9 = v12;
          *(_OWORD *)((char *)a3 + 184) = *(_OWORD *)(v12 + 24);
          *(_OWORD *)((char *)a3 + 200) = *(_OWORD *)(v9 + 40);
          CRegion::GetRegionHandleAndReset(*((CRegion **)v8 + 37), (HRGN *)a3 + 27);
          *((_OWORD *)a3 + 14) = *((_OWORD *)v8 + 19);
          *((_QWORD *)a3 + 30) = *((_QWORD *)v8 + 40);
          *((_DWORD *)a3 + 62) = *((_DWORD *)v8 + 82);
          v10 = *((_DWORD *)v8 + 73);
          *((_DWORD *)v8 + 76) = 0;
          *((_BYTE *)v8 + 332) = 0;
          *((_DWORD *)a3 + 63) = v10;
          *((_DWORD *)a3 + 64) = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v8 + 136LL))(v8);
        }
      }
    }
  }
  return (unsigned int)v6;
}

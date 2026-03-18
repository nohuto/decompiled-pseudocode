/*
 * XREFs of ?EnsureDrawListCacheNoRef@CDrawListCacheSet@@QEAAJPEBVIRenderTarget@@W4DrawListRenderType@@PEAPEAVCDrawListCache@@@Z @ 0x18011134C
 * Callers:
 *     ?EnsureDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@W4DrawListRenderType@@PEAPEAVCDrawListCache@@@Z @ 0x180109FE4 (-EnsureDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@W4DrawListRenderType.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawListCache@@SAJW4DrawListRenderType@@PEAPEAV1@@Z @ 0x1800B0CD0 (-Create@CDrawListCache@@SAJW4DrawListRenderType@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureCacheRenderTargetEntry@CDrawListCacheSet@@AEAAJPEBVIRenderTarget@@PEAPEAUDrawListCacheRenderTargetEntry@1@@Z @ 0x1801113FC (-EnsureCacheRenderTargetEntry@CDrawListCacheSet@@AEAAJPEBVIRenderTarget@@PEAPEAUDrawListCacheRen.c)
 */

__int64 __fastcall CDrawListCacheSet::EnsureDrawListCacheNoRef(
        CDrawListCacheSet *a1,
        const struct IRenderTarget *a2,
        int a3,
        _QWORD *a4)
{
  int v6; // eax
  unsigned int v7; // edi
  struct CDrawListCacheSet::DrawListCacheRenderTargetEntry *v8; // rbx
  _DWORD *v9; // rcx
  int v10; // eax
  struct CDrawListCacheSet::DrawListCacheRenderTargetEntry *v12; // [rsp+30h] [rbp-18h] BYREF

  v6 = CDrawListCacheSet::EnsureCacheRenderTargetEntry(a1, a2, &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x14Cu);
  }
  else
  {
    v8 = v12;
    v9 = (_DWORD *)*((_QWORD *)v12 + 1);
    if ( v9 && v9[4] != a3 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
      *((_QWORD *)v8 + 1) = 0LL;
    }
    if ( *((_QWORD *)v8 + 1) || (v10 = CDrawListCache::Create(a3, (_QWORD *)v8 + 1), v7 = v10, v10 >= 0) )
      *a4 = *((_QWORD *)v8 + 1);
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x156u);
  }
  return v7;
}

/*
 * XREFs of ?EnsureCacheRenderTargetEntry@CDrawListCacheSet@@AEAAJPEBVIRenderTarget@@PEAPEAUDrawListCacheRenderTargetEntry@1@@Z @ 0x1801113FC
 * Callers:
 *     ?EnsureDrawListCacheNoRef@CDrawListCacheSet@@QEAAJPEBVIRenderTarget@@W4DrawListRenderType@@PEAPEAVCDrawListCache@@@Z @ 0x18011134C (-EnsureDrawListCacheNoRef@CDrawListCacheSet@@QEAAJPEBVIRenderTarget@@W4DrawListRenderType@@PEAPE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListCacheSet::EnsureCacheRenderTargetEntry(
        CDrawListCacheSet *this,
        const struct IRenderTarget *a2,
        struct CDrawListCacheSet::DrawListCacheRenderTargetEntry **a3)
{
  _QWORD *v3; // r10
  unsigned int v4; // ebx
  unsigned int v8; // r9d
  __int64 v9; // rcx
  struct CDrawListCacheSet::DrawListCacheRenderTargetEntry *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // edx
  int v17; // eax
  __int128 v19; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_QWORD **)this;
  v4 = 0;
  if ( *(_QWORD *)this && (v8 = 0, *((_DWORD *)v3 + 6)) )
  {
    v9 = *v3;
    while ( *(const struct IRenderTarget **)(v9 + 16LL * v8) != a2 )
    {
      if ( ++v8 >= *((_DWORD *)v3 + 6) )
        goto LABEL_6;
    }
    v10 = (struct CDrawListCacheSet::DrawListCacheRenderTargetEntry *)(v9 + 16LL * v8);
  }
  else
  {
LABEL_6:
    v10 = 0LL;
  }
  if ( v10 )
    goto LABEL_24;
  if ( !v3 )
  {
    v11 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            64LL);
    v12 = v11;
    if ( v11 )
    {
      v13 = v11 + 32;
      *(_DWORD *)(v12 + 24) = 0;
      *(_QWORD *)v12 = v13;
      *(_QWORD *)(v12 + 8) = v13;
      *(_DWORD *)(v12 + 16) = 2;
      *(_DWORD *)(v12 + 20) = 2;
    }
    else
    {
      v12 = 0LL;
    }
    *(_QWORD *)this = v12;
    if ( !v12 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x12Du);
      return v4;
    }
  }
  v14 = *(_QWORD *)this;
  v19 = (unsigned __int64)a2;
  v15 = *(unsigned int *)(v14 + 24);
  v16 = v15 + 1;
  if ( (int)v15 + 1 < (unsigned int)v15 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_22;
  }
  if ( v16 > *(_DWORD *)(v14 + 20) )
  {
    v17 = DynArrayImpl<0>::AddMultipleAndSet(v14, 0x10u, 1, &v19);
    v4 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC0u);
LABEL_22:
    if ( (v4 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x134u);
      return v4;
    }
    goto LABEL_23;
  }
  *(_OWORD *)(*(_QWORD *)v14 + 16 * v15) = v19;
  *(_DWORD *)(v14 + 24) = v16;
LABEL_23:
  v10 = (struct CDrawListCacheSet::DrawListCacheRenderTargetEntry *)(**(_QWORD **)this
                                                                   + 16LL
                                                                   * (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 24LL)
                                                                                  - 1));
LABEL_24:
  *a3 = v10;
  return v4;
}

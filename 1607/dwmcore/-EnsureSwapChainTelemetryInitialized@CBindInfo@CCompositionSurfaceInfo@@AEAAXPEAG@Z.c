/*
 * XREFs of ?EnsureSwapChainTelemetryInitialized@CBindInfo@CCompositionSurfaceInfo@@AEAAXPEAG@Z @ 0x180099584
 * Callers:
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180099AE4 (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x18001E8B4 (-UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800A9608 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurfaceInfo::CBindInfo::EnsureSwapChainTelemetryInitialized(
        CCompositionSurfaceInfo::CBindInfo *this,
        unsigned __int16 *a2)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  unsigned int v6; // esi
  __int64 v7; // rax
  unsigned __int64 v8; // kr00_8
  unsigned __int16 *v9; // rax

  if ( *((_DWORD *)this + 14) > 1u && !*((_QWORD *)this + 32) )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a2[v4] );
    v5 = v4 + 1;
    if ( v5 > 1 )
    {
      v6 = v5;
      v8 = v5;
      v7 = 2LL * v5;
      if ( !is_mul_ok(v8, 2uLL) )
        v7 = -1LL;
      v9 = (unsigned __int16 *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 8LL))(
                                 WPF::g_pProcessHeap,
                                 v7);
      *((_QWORD *)this + 32) = v9;
      if ( v9 )
      {
        StringCchCopyW(v9, v6, a2);
        CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat(this, 0, 1);
      }
    }
  }
}

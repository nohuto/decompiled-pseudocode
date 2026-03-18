/*
 * XREFs of ?Create@CWARPDrawListCache@@SAJPEAPEAV1@@Z @ 0x180117A04
 * Callers:
 *     ?EnsureWARPCacheNoRef@CDrawListCacheSet@@QEAAJPEBVIRenderTarget@@PEAPEAVCWARPDrawListCache@@@Z @ 0x180117AB4 (-EnsureWARPCacheNoRef@CDrawListCacheSet@@QEAAJPEBVIRenderTarget@@PEAPEAVCWARPDrawListCache@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWARPDrawListCache::Create(struct CWARPDrawListCache **a1)
{
  unsigned int v2; // esi
  __int64 v3; // rax

  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         40LL);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 16) = 0LL;
    *(_QWORD *)v3 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v3 = &CWARPDrawListCache::`vftable';
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 24) = 0;
    *(_QWORD *)(v3 + 32) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    *a1 = (struct CWARPDrawListCache *)v3;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x117u);
  }
  return v2;
}

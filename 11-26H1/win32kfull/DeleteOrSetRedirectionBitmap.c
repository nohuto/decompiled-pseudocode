/*
 * XREFs of DeleteOrSetRedirectionBitmap @ 0x1401EDA58
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     RecreateRedirectionBitmap @ 0x140041830 (RecreateRedirectionBitmap.c)
 *     zzzUpdateLayeredWindow @ 0x1400421A8 (zzzUpdateLayeredWindow.c)
 *     UnsetRedirectedWindow @ 0x1400A3250 (UnsetRedirectedWindow.c)
 *     SetRedirectedWindow @ 0x14014DABC (SetRedirectedWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1401ED678 (zzzUpdateWindowsAfterModeChange.c)
 *     UserRecreateRedirectionBitmap @ 0x1402A4470 (UserRecreateRedirectionBitmap.c)
 *     ?zzzDwmStartRedirection@@YAJXZ @ 0x1402CF854 (-zzzDwmStartRedirection@@YAJXZ.c)
 *     xxxDwmStopRedirection @ 0x1402CFD60 (xxxDwmStopRedirection.c)
 * Callees:
 *     GreSetRedirection @ 0x140018AE4 (GreSetRedirection.c)
 */

__int64 __fastcall DeleteOrSetRedirectionBitmap(__int64 a1, HSURF a2, int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( !a3 && (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) == 0x29D )
  {
    result = *(_QWORD *)(v3 + 40);
    *(_QWORD *)(result + 88) = a2;
  }
  else
  {
    GreSetRedirection(a2, 0);
    GreMarkDeletableBitmap(a2);
    GreLockVisRgn(v6, v5, v7);
    LOBYTE(v8) = 5;
    GreDereferenceObject(a2, v8, 0LL);
    GreUnlockVisRgn(v9);
    result = *(_QWORD *)(v3 + 40);
    if ( a2 == *(HSURF *)(result + 88) )
      *(_QWORD *)(result + 88) = 0LL;
  }
  return result;
}

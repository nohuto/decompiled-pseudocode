/*
 * XREFs of DeleteOrSetRedirectionBitmap @ 0x1C00D7CB8
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C0053734 (zzzUpdateLayeredWindow.c)
 *     SetRedirectedWindow @ 0x1C00620F4 (SetRedirectedWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006CB00 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzDwmStartRedirection @ 0x1C0093AE4 (zzzDwmStartRedirection.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00D7A00 (zzzUpdateWindowsAfterModeChange.c)
 *     UnsetRedirectedWindow @ 0x1C00D7B74 (UnsetRedirectedWindow.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00D7C3C (DeleteOldRedirectionBitmap.c)
 *     RecreateRedirectionBitmap @ 0x1C00D7E4C (RecreateRedirectionBitmap.c)
 *     xxxDwmStopRedirection @ 0x1C00EFE10 (xxxDwmStopRedirection.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C00D7D48 (GreDereferenceObject.c)
 *     GreSetRedirection @ 0x1C00D7DE4 (GreSetRedirection.c)
 */

__int64 __fastcall DeleteOrSetRedirectionBitmap(__int64 a1, HSURF a2, int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( !a3 && (*(_WORD *)(a1 + 66) & 0x3FFF) == 0x29D )
  {
    result = *(_QWORD *)(v3 + 24);
    *(_QWORD *)(result + 88) = a2;
  }
  else
  {
    GreSetRedirection(a2);
    GreMarkDeletableBitmap(a2);
    GreLockVisRgn(*gpDispInfo);
    GreDereferenceObject(a2);
    GreUnlockVisRgn(*gpDispInfo);
    result = *(_QWORD *)(v3 + 24);
    if ( a2 == *(HSURF *)(result + 88) )
      *(_QWORD *)(result + 88) = 0LL;
  }
  return result;
}

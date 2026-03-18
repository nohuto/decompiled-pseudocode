/*
 * XREFs of DeleteOrSetRedirectionBitmap @ 0x1C007F730
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C006BA10 (zzzUpdateLayeredWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006C148 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     SetRedirectedWindow @ 0x1C0079E60 (SetRedirectedWindow.c)
 *     UnsetRedirectedWindow @ 0x1C007FEDC (UnsetRedirectedWindow.c)
 *     DeleteOldRedirectionBitmap @ 0x1C007FFA4 (DeleteOldRedirectionBitmap.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C009AA24 (zzzUpdateWindowsAfterModeChange.c)
 *     RecreateRedirectionBitmap @ 0x1C009AB98 (RecreateRedirectionBitmap.c)
 *     zzzDwmStartRedirection @ 0x1C00D24EC (zzzDwmStartRedirection.c)
 *     xxxDwmStopRedirection @ 0x1C00D3E60 (xxxDwmStopRedirection.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C007F7C0 (GreDereferenceObject.c)
 *     GreSetRedirection @ 0x1C007F85C (GreSetRedirection.c)
 */

__int64 __fastcall DeleteOrSetRedirectionBitmap(__int64 a1, __int64 a2, int a3)
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
    GreSetRedirection(a2, 0LL);
    GreMarkDeletableBitmap(a2);
    GreLockVisRgn(*gpDispInfo);
    GreDereferenceObject(a2, 0LL);
    GreUnlockVisRgn(*gpDispInfo);
    result = *(_QWORD *)(v3 + 24);
    if ( a2 == *(_QWORD *)(result + 88) )
      *(_QWORD *)(result + 88) = 0LL;
  }
  return result;
}

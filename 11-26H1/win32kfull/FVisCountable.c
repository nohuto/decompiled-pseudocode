/*
 * XREFs of FVisCountable @ 0x1400105A0
 * Callers:
 *     ?DecVisWindows@@YAXPEAUtagWND@@@Z @ 0x140010520 (-DecVisWindows@@YAXPEAUtagWND@@@Z.c)
 *     ?zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z @ 0x14017A5C0 (-zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z.c)
 *     ?IncVisWindows@@YAXPEAUtagWND@@@Z @ 0x140295F3C (-IncVisWindows@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall FVisCountable(__int64 a1)
{
  __int64 v1; // r9
  unsigned int v2; // eax
  __int64 v3; // r9

  v1 = *(_QWORD *)(a1 + 40);
  if ( *(char *)(v1 + 19) < 0 )
    return 0LL;
  if ( (*(_WORD *)(v1 + 42) & 0x2FFF) == 0x29D )
    return 1LL;
  v2 = IsTopLevelWindow();
  if ( !v2 )
    return 0LL;
  LOBYTE(v2) = ~*(_BYTE *)(v3 + 31);
  return (v2 >> 5) & 1;
}

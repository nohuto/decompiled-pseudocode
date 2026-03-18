/*
 * XREFs of RedirectDCEs @ 0x1C00129A0
 * Callers:
 *     UnsetLayeredWindow @ 0x1C000CA0C (UnsetLayeredWindow.c)
 *     SetRedirectedWindow @ 0x1C000E0B0 (SetRedirectedWindow.c)
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 * Callees:
 *     UpdateRedirectedDCE @ 0x1C000B310 (UpdateRedirectedDCE.c)
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C0012AD0 (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 */

__int64 __fastcall RedirectDCEs(struct tagWND *a1)
{
  _QWORD **v2; // rcx
  __int64 v3; // rbx
  int v4; // eax

  GreLockVisRgn(*gpDispInfo);
  v2 = (_QWORD **)gpDispInfo;
  v3 = *(_QWORD *)(gpDispInfo + 64LL);
  if ( v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v3 + 64);
      if ( (v4 & 0x4400800) == 0
        && *(_QWORD *)(v3 + 16)
        && (v4 & 0x1000) != 0
        && (unsigned int)WindowMatchesDCE(a1, (const struct tagDCE *)v3) )
      {
        UpdateRedirectedDCE(v3, 0);
      }
      v3 = *(_QWORD *)v3;
    }
    while ( v3 );
    v2 = (_QWORD **)gpDispInfo;
  }
  return GreUnlockVisRgn(**v2);
}

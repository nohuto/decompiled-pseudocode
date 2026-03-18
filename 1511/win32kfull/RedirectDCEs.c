/*
 * XREFs of RedirectDCEs @ 0x1C007A688
 * Callers:
 *     SetRedirectedWindow @ 0x1C0079E60 (SetRedirectedWindow.c)
 *     UnsetLayeredWindow @ 0x1C007FC9C (UnsetLayeredWindow.c)
 *     xxxSetParentWorker @ 0x1C0088E64 (xxxSetParentWorker.c)
 * Callees:
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C007A9E0 (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     UpdateRedirectedDCE @ 0x1C00FBE70 (UpdateRedirectedDCE.c)
 */

__int64 __fastcall RedirectDCEs(struct tagWND *a1)
{
  _QWORD **v2; // rcx
  __int64 *v3; // rbx
  int v4; // eax

  GreLockVisRgn(*gpDispInfo);
  v2 = (_QWORD **)gpDispInfo;
  v3 = *(__int64 **)(gpDispInfo + 64LL);
  if ( v3 )
  {
    do
    {
      v4 = *((_DWORD *)v3 + 16);
      if ( (v4 & 0x4400800) == 0
        && v3[2]
        && (v4 & 0x1000) != 0
        && (unsigned int)WindowMatchesDCE(a1, (const struct tagDCE *)v3) )
      {
        UpdateRedirectedDCE(v3, 0LL);
      }
      v3 = (__int64 *)*v3;
    }
    while ( v3 );
    v2 = (_QWORD **)gpDispInfo;
  }
  return GreUnlockVisRgn(**v2);
}

/*
 * XREFs of ChangeRedirectionParentInDCEs @ 0x1C0063B98
 * Callers:
 *     UnredirectDCEs @ 0x1C0063228 (UnredirectDCEs.c)
 *     RecreateRedirectionBitmap @ 0x1C00D7E4C (RecreateRedirectionBitmap.c)
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01DE224 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C00634F4 (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     UpdateRedirectedDCE @ 0x1C011D160 (UpdateRedirectedDCE.c)
 */

__int64 __fastcall ChangeRedirectionParentInDCEs(struct tagWND *a1, unsigned int a2)
{
  _QWORD **v4; // rcx
  __int64 *v5; // rbx
  int v6; // ecx

  GreLockVisRgn(*gpDispInfo);
  v4 = (_QWORD **)gpDispInfo;
  v5 = *(__int64 **)(gpDispInfo + 64LL);
  if ( v5 )
  {
    do
    {
      v6 = *((_DWORD *)v5 + 16);
      if ( (v6 & 0x4404800) == 0x4000
        && v5[2]
        && (v6 & 0x1000) != 0
        && (unsigned int)WindowMatchesDCE(a1, (const struct tagDCE *)v5) )
      {
        UpdateRedirectedDCE(v5, a2);
      }
      v5 = (__int64 *)*v5;
    }
    while ( v5 );
    v4 = (_QWORD **)gpDispInfo;
  }
  return GreUnlockVisRgn(**v4);
}

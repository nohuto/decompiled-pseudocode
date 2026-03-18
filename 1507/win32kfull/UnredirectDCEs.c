/*
 * XREFs of UnredirectDCEs @ 0x1C0010144
 * Callers:
 *     UnsetRedirectedWindow @ 0x1C000BB60 (UnsetRedirectedWindow.c)
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0089FB4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ChangeRedirectionParentInDCEs @ 0x1C000B264 (ChangeRedirectionParentInDCEs.c)
 *     UpdateRedirectedDCE @ 0x1C000B310 (UpdateRedirectedDCE.c)
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C0012AD0 (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     GetStyleWindow @ 0x1C0066940 (GetStyleWindow.c)
 */

__int64 __fastcall UnredirectDCEs(struct tagWND *a1)
{
  _QWORD **v2; // rcx
  __int64 v3; // rbx
  __int16 v4; // r11

  if ( GetStyleWindow(a1, 2848LL) )
    return ChangeRedirectionParentInDCEs(a1, 0);
  GreLockVisRgn(*gpDispInfo);
  v2 = (_QWORD **)gpDispInfo;
  v3 = *(_QWORD *)(gpDispInfo + 64LL);
  if ( v3 )
  {
    do
    {
      if ( (*(_DWORD *)(v3 + 64) & 0x4400800) == 0
        && *(_QWORD *)(v3 + 16)
        && (unsigned int)WindowMatchesDCE(a1, (const struct tagDCE *)v3)
        && (v4 & 0x1002) != 2 )
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

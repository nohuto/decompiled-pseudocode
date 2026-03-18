/*
 * XREFs of UnredirectDCEs @ 0x1C0063228
 * Callers:
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0055650 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     UnsetRedirectedWindow @ 0x1C00D7B74 (UnsetRedirectedWindow.c)
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 * Callees:
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C00634F4 (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C0063B98 (ChangeRedirectionParentInDCEs.c)
 *     GetStyleWindow @ 0x1C007A490 (GetStyleWindow.c)
 *     UpdateRedirectedDCE @ 0x1C011D160 (UpdateRedirectedDCE.c)
 */

__int64 __fastcall UnredirectDCEs(struct tagWND *a1)
{
  _QWORD **v2; // rcx
  const struct tagDCE *v3; // rbx
  __int16 v4; // r11

  if ( GetStyleWindow(a1, 2848LL) )
    return ChangeRedirectionParentInDCEs(a1);
  GreLockVisRgn(*gpDispInfo);
  v2 = (_QWORD **)gpDispInfo;
  v3 = *(const struct tagDCE **)(gpDispInfo + 64LL);
  if ( v3 )
  {
    do
    {
      if ( (*((_DWORD *)v3 + 16) & 0x4400800) == 0
        && *((_QWORD *)v3 + 2)
        && (unsigned int)WindowMatchesDCE(a1, v3)
        && (v4 & 0x1002) != 2 )
      {
        UpdateRedirectedDCE(v3, 0LL);
      }
      v3 = *(const struct tagDCE **)v3;
    }
    while ( v3 );
    v2 = (_QWORD **)gpDispInfo;
  }
  return GreUnlockVisRgn(**v2);
}

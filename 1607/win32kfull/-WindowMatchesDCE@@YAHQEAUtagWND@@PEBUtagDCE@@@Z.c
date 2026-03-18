/*
 * XREFs of ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C00634F4
 * Callers:
 *     UnredirectDCEs @ 0x1C0063228 (UnredirectDCEs.c)
 *     RedirectDCEs @ 0x1C0063468 (RedirectDCEs.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C0063B98 (ChangeRedirectionParentInDCEs.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C0063530 (IsDesktopWindow.c)
 *     _IsDescendant @ 0x1C0063558 (_IsDescendant.c)
 */

__int64 __fastcall WindowMatchesDCE(struct tagWND *const a1, const struct tagDCE *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // r9d
  __int64 v4; // r10

  if ( (unsigned int)IsDesktopWindow(a1) )
  {
    if ( v2 == *(_QWORD *)(v4 + 16) )
      return 1;
  }
  else if ( (unsigned int)IsDescendant(v2, *(_QWORD *)(v4 + 16)) )
  {
    ++v3;
  }
  return v3;
}

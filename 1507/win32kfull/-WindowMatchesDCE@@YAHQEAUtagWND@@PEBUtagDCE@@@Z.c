/*
 * XREFs of ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C0012AD0
 * Callers:
 *     ChangeRedirectionParentInDCEs @ 0x1C000B264 (ChangeRedirectionParentInDCEs.c)
 *     UnredirectDCEs @ 0x1C0010144 (UnredirectDCEs.c)
 *     RedirectDCEs @ 0x1C00129A0 (RedirectDCEs.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C0012B0C (IsDesktopWindow.c)
 *     _IsDescendant @ 0x1C0012B34 (_IsDescendant.c)
 */

__int64 __fastcall WindowMatchesDCE(struct tagWND *const a1, const struct tagDCE *a2, __int64 a3)
{
  __int64 v3; // rcx
  unsigned int v4; // r9d
  __int64 v5; // r10

  if ( (unsigned int)IsDesktopWindow(a1, a2, a3, 0LL) )
  {
    if ( v3 == *(_QWORD *)(v5 + 16) )
      return 1;
  }
  else if ( (unsigned int)IsDescendant(v3, *(_QWORD *)(v5 + 16)) )
  {
    ++v4;
  }
  return v4;
}

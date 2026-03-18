/*
 * XREFs of ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@@Z @ 0x1C00427A8
 * Callers:
 *     ?InForegroundQueue@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C00443C8 (-InForegroundQueue@@YAHPEAUtagTHREADINFO@@@Z.c)
 *     NtUserOpenClipboard @ 0x1C00D62E0 (NtUserOpenClipboard.c)
 *     NtUserSetClipboardData @ 0x1C021FC30 (NtUserSetClipboardData.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ForegroundInputOwnerMatch(const struct tagTHREADINFO *a1)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  _BOOL8 result; // rax

  v2 = *(_QWORD *)(gpqForeground + 56LL);
  result = 1;
  if ( !v2 || *(_QWORD *)(v2 + 384) != *((_QWORD *)a1 + 48) )
  {
    v3 = *(_QWORD *)(gpqForeground + 48LL);
    if ( !v3 || *(_QWORD *)(v3 + 384) != *((_QWORD *)a1 + 48) )
      return 0;
  }
  return result;
}

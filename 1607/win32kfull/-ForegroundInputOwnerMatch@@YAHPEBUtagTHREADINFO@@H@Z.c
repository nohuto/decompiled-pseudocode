/*
 * XREFs of ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C011E8E8
 * Callers:
 *     NtUserOpenClipboard @ 0x1C00F8EE0 (NtUserOpenClipboard.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C011E870 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     NtUserSetClipboardData @ 0x1C02196B0 (NtUserSetClipboardData.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ForegroundInputOwnerMatch(const struct tagTHREADINFO *a1, int a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  _BOOL8 result; // rax

  v3 = *(_QWORD *)(gpqForeground + 64LL);
  if ( v3 )
    v3 = *(_QWORD *)(v3 + 376);
  v4 = *(_QWORD *)(gpqForeground + 56LL);
  if ( v4 )
    v4 = *(_QWORD *)(v4 + 376);
  v5 = *((_QWORD *)a1 + 47);
  result = 1;
  if ( v3 != v5 && v4 != v5 )
  {
    v6 = *(_DWORD *)(v5 + 828);
    if ( !a2 || !v6 )
      return 0;
    if ( *(_DWORD *)(gpqForeground + 384LL) != v6
      && (!v3 || *(_DWORD *)(v3 + 828) != v6)
      && (!v4 || *(_DWORD *)(v4 + 828) != v6) )
    {
      return 0;
    }
  }
  return result;
}

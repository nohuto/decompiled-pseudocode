/*
 * XREFs of ?CheckAcquireIAMPrivilegesCommon@@YAHQEBUtagTHREADINFO@@@Z @ 0x1C008237C
 * Callers:
 *     NtUserEnableIAMAccess @ 0x1C0082300 (NtUserEnableIAMAccess.c)
 *     NtUserAcquireIAMKey @ 0x1C0156230 (NtUserAcquireIAMKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CheckAcquireIAMPrivilegesCommon(const struct tagTHREADINFO *const a1)
{
  __int64 v1; // rdx
  bool result; // al
  __int64 v3; // r8

  v1 = *(_QWORD *)(*((_QWORD *)a1 + 52) + 8LL);
  result = 0;
  v3 = *(_QWORD *)(v1 + 168);
  if ( v3 )
  {
    if ( *(_QWORD *)(v1 + 160) )
      return *((_QWORD *)a1 + 48) == v3;
  }
  return result;
}

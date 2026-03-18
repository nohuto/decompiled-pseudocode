/*
 * XREFs of NtUserGetWOWClass @ 0x1C0215430
 * Callers:
 *     <none>
 * Callees:
 *     _GetWOWClass @ 0x1C01DEF5C (_GetWOWClass.c)
 */

_QWORD *__fastcall NtUserGetWOWClass(__int64 a1, int *a2)
{
  int v4; // ecx
  char *v5; // rdx
  unsigned __int64 v6; // r9
  _QWORD *WOWClass; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx

  EnterSharedCrit(0LL, 1LL);
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (int *)W32UserProbeAddress;
  v4 = *a2;
  v5 = (char *)*((_QWORD *)a2 + 1);
  if ( ((unsigned __int8)v5 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v6 = (unsigned __int64)&v5[(unsigned __int16)v4 + 2];
  if ( v6 >= W32UserProbeAddress
    || (unsigned __int16)v4 > (unsigned __int16)HIWORD(*a2)
    || (v4 & 1) != 0
    || v6 <= (unsigned __int64)v5 )
  {
    *W32UserProbeAddress = 0;
  }
  WOWClass = GetWOWClass(a1, v5, W32UserProbeAddress, v6);
  UserSessionSwitchLeaveCrit(v9, v8);
  return WOWClass;
}

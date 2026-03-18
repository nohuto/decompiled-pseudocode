/*
 * XREFs of NtUserGetAtomName @ 0x1C010F5C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetAtomName(unsigned __int16 a1, int *a2)
{
  unsigned int AtomName; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v8; // [rsp+38h] [rbp-20h]
  volatile void *v9; // [rsp+40h] [rbp-18h]

  EnterSharedCrit(0LL, 1LL);
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (int *)W32UserProbeAddress;
  v8 = *a2;
  v9 = (volatile void *)*((_QWORD *)a2 + 1);
  ProbeForWrite(v9, HIWORD(*a2), 2u);
  AtomName = UserGetAtomName(a1, v9, HIWORD(v8) >> 1);
  UserSessionSwitchLeaveCrit(v6, v5);
  return AtomName;
}

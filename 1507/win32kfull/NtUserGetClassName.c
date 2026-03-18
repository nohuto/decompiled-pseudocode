/*
 * XREFs of NtUserGetClassName @ 0x1C00C71F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetClassName(__int64 a1, int a2, int *a3)
{
  unsigned int AtomName; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  volatile void *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int16 v15; // [rsp+20h] [rbp-38h]
  int v16; // [rsp+78h] [rbp+20h]

  AtomName = 0;
  EnterSharedCrit(1LL);
  v9 = ValidateHwnd(a1);
  if ( v9 )
  {
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      a3 = (int *)W32UserProbeAddress;
    v16 = *a3;
    v10 = (volatile void *)*((_QWORD *)a3 + 1);
    ProbeForWrite(v10, HIWORD(v16), 2u);
    v11 = *(_QWORD *)(v9 + 152);
    v12 = *(unsigned __int16 *)(v11 + 10);
    v15 = *(_WORD *)(v11 + 10);
    if ( a2 )
    {
      if ( (*(_WORD *)(v9 + 66) & 0x3FFF) != 0 )
      {
        v13 = (*(_WORD *)(v9 + 66) & 0x3FFFu) - 666;
        if ( (unsigned int)v13 < 0x1F )
        {
          _mm_lfence();
          if ( byte_1C02E2740[v13] == 25 )
            v12 = v15;
          else
            v12 = *(unsigned __int16 *)(gpsi + 2LL * byte_1C02E2740[v13] + 852);
        }
      }
    }
    AtomName = UserGetAtomName(v12, v10, HIWORD(v16) >> 1);
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return AtomName;
}

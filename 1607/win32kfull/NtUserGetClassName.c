/*
 * XREFs of NtUserGetClassName @ 0x1C00F88B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetClassName(__int64 a1, int a2, int *a3)
{
  unsigned int AtomName; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  volatile void *v10; // rsi
  __int64 v11; // rax
  unsigned __int16 v13; // [rsp+20h] [rbp-38h]
  int v14; // [rsp+78h] [rbp+20h]

  AtomName = 0;
  EnterSharedCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  if ( v9 )
  {
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      a3 = (int *)W32UserProbeAddress;
    v14 = *a3;
    v10 = (volatile void *)*((_QWORD *)a3 + 1);
    ProbeForWrite(v10, HIWORD(v14), 2u);
    v13 = *(_WORD *)(*(_QWORD *)(v9 + 152) + 10LL);
    if ( a2 )
    {
      if ( (*(_WORD *)(v9 + 66) & 0x3FFF) != 0 )
      {
        v11 = (*(_WORD *)(v9 + 66) & 0x3FFFu) - 666;
        if ( (unsigned int)v11 < 0x1F )
        {
          _mm_lfence();
          if ( byte_1C02E93D0[v11] != 25 )
            v13 = *(_WORD *)(gpsi + 2LL * byte_1C02E93D0[v11] + 852);
        }
      }
    }
    AtomName = UserGetAtomName(v13, v10, HIWORD(v14) >> 1);
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return AtomName;
}

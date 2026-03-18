/*
 * XREFs of NtUserSetThreadLayoutHandles @ 0x1C0220A80
 * Callers:
 *     <none>
 * Callees:
 *     HKLtoPKL @ 0x1C00DAB90 (HKLtoPKL.c)
 */

__int64 __fastcall NtUserSetThreadLayoutHandles(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11

  EnterCrit(1LL);
  v6 = 0;
  v7 = *(_QWORD *)(gptiCurrent + 400LL);
  if ( !v7 || *(_QWORD *)(v7 + 40) == a2 )
  {
    v9 = HKLtoPKL(gptiCurrent, a1);
    if ( v9 )
    {
      LOBYTE(v6) = (WORD1(a2) & 0xF000) == 0xE000;
      if ( ((WORD1(a1) & 0xF000) == 0xE000) != v6 )
        *(_QWORD *)(v8 + 720) = a2;
      HMAssignmentLock(v10, v9);
      v6 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v6;
}

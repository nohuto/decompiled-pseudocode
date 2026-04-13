/*
 * XREFs of sub_18001012C @ 0x18001012C
 * Callers:
 *     sub_180006810 @ 0x180006810 (sub_180006810.c)
 *     sub_180019550 @ 0x180019550 (sub_180019550.c)
 * Callees:
 *     sub_180008794 @ 0x180008794 (sub_180008794.c)
 *     sub_180008814 @ 0x180008814 (sub_180008814.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18001012C(RTL_SRWLOCK *a1)
{
  PVOID Ptr; // rsi
  int v3; // eax
  __int64 v4; // r8
  PVOID v5; // rsi
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  sub_180008814(a1 + 11, &SRWLock);
  Ptr = a1[12].Ptr;
  if ( Ptr )
  {
    if ( a1[13].Ptr )
    {
      v3 = (*(__int64 (__fastcall **)(PVOID, PVOID))(*(_QWORD *)Ptr + 120LL))(a1[12].Ptr, a1[13].Ptr);
      if ( v3 < 0 )
        sub_180008794(retaddr, 447, v4, v3);
      a1[13].Ptr = 0LL;
    }
    v5 = a1[12].Ptr;
    if ( v5 )
    {
      a1[12].Ptr = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}

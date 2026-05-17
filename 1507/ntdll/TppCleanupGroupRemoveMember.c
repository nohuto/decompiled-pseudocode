/*
 * XREFs of TppCleanupGroupRemoveMember @ 0x18006E2F0
 * Callers:
 *     TppCleanupGroupMemberDestroy @ 0x18003D810 (TppCleanupGroupMemberDestroy.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall TppCleanupGroupRemoveMember(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  _QWORD *v7; // rax

  v4 = *(_QWORD *)(a1 + 16);
  v5 = (_QWORD *)(a1 + 40);
  if ( (_QWORD *)*v5 != v5 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v4 + 8), a2, a3, a4);
    v6 = *v5;
    v7 = (_QWORD *)v5[1];
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v7 != v5 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v4 + 8));
  }
}

/*
 * XREFs of sub_180006440 @ 0x180006440
 * Callers:
 *     DllCanUnloadNow @ 0x1800069B0 (DllCanUnloadNow.c)
 *     sub_180007540 @ 0x180007540 (sub_180007540.c)
 *     sub_180028020 @ 0x180028020 (sub_180028020.c)
 * Callees:
 *     sub_1800063E0 @ 0x1800063E0 (sub_1800063E0.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

bool __fastcall sub_180006440(__int64 a1, RTL_SRWLOCK *a2, char a3)
{
  char *i; // rsi
  void **v5; // rcx
  void *v6; // rbx
  PVOID v7; // rdi
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+10h] BYREF

  SRWLock = a2;
  for ( i = (char *)&unk_180037938; i < byte_180037958; i += 8 )
  {
    if ( *(_QWORD *)i )
    {
      if ( dword_18003AC88 && !a3 )
        return 0;
      if ( **(_QWORD **)(*(_QWORD *)i + 24LL) )
      {
        sub_1800063E0(&SRWLock, &stru_18003AC78);
        v5 = *(void ***)(*(_QWORD *)i + 24LL);
        v6 = *v5;
        if ( *v5 )
        {
          *v5 = 0LL;
          if ( SRWLock )
          {
            ReleaseSRWLockExclusive(SRWLock);
            SRWLock = 0LL;
          }
          v7 = DecodePointer(v6);
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v7 + 16LL))(v7);
        }
        else if ( SRWLock )
        {
          ReleaseSRWLockExclusive(SRWLock);
          SRWLock = 0LL;
        }
      }
    }
  }
  return dword_18003AC88 == 0;
}

/*
 * XREFs of MiFreePrivateFixupEntryForSystemImage @ 0x140120244
 * Callers:
 *     MiCountSystemImageCommitment @ 0x14011FFB4 (MiCountSystemImageCommitment.c)
 *     MiGetSystemAddressForImage @ 0x1403CC454 (MiGetSystemAddressForImage.c)
 *     MiUnloadSystemImage @ 0x1403CF92C (MiUnloadSystemImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall MiFreePrivateFixupEntryForSystemImage(ULONG_PTR BugCheckParameter2, int a2)
{
  PVOID *v3; // rdi
  KIRQL v5; // al
  __int64 *v6; // rbx
  KIRQL v7; // dl
  __int64 v8; // rcx
  __int64 **v9; // rax

  v3 = 0LL;
  v5 = ExAcquireSpinLockExclusive(&dword_1402FE500);
  v6 = (__int64 *)qword_1402FE508;
  v7 = v5;
  while ( v6 != &qword_1402FE508 )
  {
    v3 = (PVOID *)v6;
    if ( BugCheckParameter2 == v6[2] )
    {
      if ( !a2 )
      {
        ExReleaseSpinLockExclusive(&dword_1402FE500, v5);
        return v6;
      }
      v8 = *v6;
      v9 = (__int64 **)v6[1];
      if ( *(__int64 **)(*v6 + 8) != v6 || *v9 != v6 )
        __fastfail(3u);
      *v9 = (__int64 *)v8;
      *(_QWORD *)(v8 + 8) = v9;
      break;
    }
    v6 = (__int64 *)*v6;
  }
  ExReleaseSpinLockExclusive(&dword_1402FE500, v7);
  if ( a2 )
  {
    if ( v6 == &qword_1402FE508 )
      KeBugCheckEx(0x1Au, 0x1011uLL, BugCheckParameter2, 0LL, 0LL);
    ExFreePoolWithTag(v3[5], 0);
    ExFreePoolWithTag(v3, 0);
  }
  return 0LL;
}

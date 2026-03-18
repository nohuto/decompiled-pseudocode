/*
 * XREFs of MiAcquireProperVm @ 0x1400A4200
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140018E50 (MiTrimSharedPageFromViews.c)
 *     MiDbgCopyMemory @ 0x1400836B8 (MiDbgCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x1401E4C54 (MiTranslatePageForCopy.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001D05C (MiGetAnyMultiplexedVm.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14001DD60 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiRecheckVaWorkingSet @ 0x14001F3F8 (MiRecheckVaWorkingSet.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E930 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002EA30 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiFaultPteIntact @ 0x1400A44BC (MiFaultPteIntact.c)
 *     ExReleaseSpinLockShared @ 0x1400EA240 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400EA3E0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400EB1D0 (ExAcquireSpinLockShared.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiAcquireProperVm(unsigned __int64 a1, _BYTE *a2)
{
  _QWORD *v3; // rsi
  __int64 v4; // r8
  int v5; // ebx
  unsigned __int64 *v6; // rdx
  unsigned __int64 v7; // rcx
  KIRQL *v8; // r12
  __int64 v9; // rdi
  int v10; // r15d
  char v11; // al
  KIRQL v12; // r9
  int v13; // ecx
  char *AnyMultiplexedVm; // rsi
  LONG *SharedVm; // rbx
  KIRQL v16; // al
  char v17; // al
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  _KPROCESS *Process; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // [rsp+60h] [rbp+0h] BYREF

  *(_QWORD *)((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL) = a2;
  *a2 = 17;
  v3 = (_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v4 = 3LL;
  v5 = 3;
  v6 = (unsigned __int64 *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  v7 = (unsigned __int64)v3;
  do
  {
    *v6 = v7;
    v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    ++v6;
    --v4;
  }
  while ( v4 );
  ExAcquireSpinLockShared(&dword_140326D38);
  v8 = *(KIRQL **)((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL);
  v9 = 0LL;
  v10 = 3;
  do
  {
    v11 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL)
                                          + 8
                                          + 8LL * (unsigned int)--v5));
    if ( (v11 & 1) == 0 )
      goto LABEL_37;
    if ( v11 < 0 )
    {
      v9 = 1LL;
      goto LABEL_37;
    }
  }
  while ( v5 );
  if ( a1 >= qword_140326910 && a1 < qword_140326910 + 0x8000000000LL )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[1].ActiveProcessors.Bitmap[2] && Process != PsInitialSystemProcess )
    {
      AnyMultiplexedVm = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
      goto LABEL_13;
    }
LABEL_37:
    ExReleaseSpinLockShared(&dword_140326D38, v12);
    return v9;
  }
  if ( qword_140326C80 && a1 >= qword_140326C80 && a1 < qword_140326C80 + (qword_140326C60 << 21) )
  {
    v13 = 0;
  }
  else if ( a1 >= qword_140327F30 && a1 < qword_140327F30 + 0xF8000000000LL
         || qword_140326C30
         && a1 >= qword_140326C30
         && a1 < qword_140326C30 + (qword_140326C10 << 21)
         && (*(_BYTE *)(48 * ((*v3 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFDALL) & 0xF0) == 0x70 )
  {
    v13 = 2;
  }
  else
  {
    v13 = 1;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(v13);
LABEL_13:
  ExReleaseSpinLockShared(&dword_140326D38, v12);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v16 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  *v8 = v16;
  ExAcquireSpinLockSharedAtDpcLevel(&dword_140326D38);
  while ( 1 )
  {
    v17 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL)
                                          + 8
                                          + 8LL * (unsigned int)--v10));
    if ( (v17 & 1) == 0 )
      break;
    if ( v17 < 0 )
    {
      ExReleaseSpinLockSharedFromDpcLevel(&dword_140326D38);
      LOBYTE(v23) = *v8;
      MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v23);
      return 1LL;
    }
    if ( !v10 )
    {
      v18 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      if ( (v18 & 1) != 0 || (unsigned int)MiFaultPteIntact(v18) )
      {
        v19 = MiRecheckVaWorkingSet((__int64)AnyMultiplexedVm, a1);
        v20 = v19;
        if ( v19 )
        {
          if ( (((unsigned __int8)AnyMultiplexedVm[184] ^ *(_BYTE *)(v19 + 184)) & 7) == 0 )
          {
            ExReleaseSpinLockSharedFromDpcLevel(&dword_140326D38);
            return v20;
          }
        }
      }
      break;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140326D38);
  LOBYTE(v24) = *v8;
  MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v24);
  return 0LL;
}

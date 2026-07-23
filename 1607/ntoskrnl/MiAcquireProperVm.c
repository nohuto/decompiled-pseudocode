/*
 * XREFs of MiAcquireProperVm @ 0x1400A2B28
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1400189D0 (MiTrimSharedPageFromViews.c)
 *     MiDbgCopyMemory @ 0x140084338 (MiDbgCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x1401E4A80 (MiTranslatePageForCopy.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14001D8E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiRecheckVaWorkingSet @ 0x14001EF78 (MiRecheckVaWorkingSet.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiFaultPteIntact @ 0x1400A2DE4 (MiFaultPteIntact.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400E8250 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
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
  ExAcquireSpinLockShared(&dword_140326D78);
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
  if ( a1 >= qword_140326950 && a1 < qword_140326950 + 0x8000000000LL )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[1].ActiveProcessors.Bitmap[2] && Process != PsInitialSystemProcess )
    {
      AnyMultiplexedVm = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
      goto LABEL_13;
    }
LABEL_37:
    ExReleaseSpinLockShared(&dword_140326D78, v12);
    return v9;
  }
  if ( qword_140326CC0 && a1 >= qword_140326CC0 && a1 < qword_140326CC0 + (qword_140326CA0 << 21) )
  {
    v13 = 0;
  }
  else if ( a1 >= qword_140327F70 && a1 < qword_140327F70 + 0xF8000000000LL
         || qword_140326C70
         && a1 >= qword_140326C70
         && a1 < qword_140326C70 + (qword_140326C50 << 21)
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
  ExReleaseSpinLockShared(&dword_140326D78, v12);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v16 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  *v8 = v16;
  ExAcquireSpinLockSharedAtDpcLevel(&dword_140326D78);
  while ( 1 )
  {
    v17 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL)
                                          + 8
                                          + 8LL * (unsigned int)--v10));
    if ( (v17 & 1) == 0 )
      break;
    if ( v17 < 0 )
    {
      ExReleaseSpinLockSharedFromDpcLevel(&dword_140326D78);
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
            ExReleaseSpinLockSharedFromDpcLevel(&dword_140326D78);
            return v20;
          }
        }
      }
      break;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140326D78);
  LOBYTE(v24) = *v8;
  MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v24);
  return 0LL;
}

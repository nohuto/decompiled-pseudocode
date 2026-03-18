/*
 * XREFs of MiAcquireProperVm @ 0x140007D88
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140008834 (MiTrimSharedPageFromViews.c)
 *     MiTranslatePageForCopy @ 0x1401D4068 (MiTranslatePageForCopy.c)
 *     MiDbgCopyMemory @ 0x1401DD808 (MiDbgCopyMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140035AF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     MiFaultPteIntact @ 0x1400EAB10 (MiFaultPteIntact.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiAcquireProperVm(unsigned __int64 a1, KIRQL *a2)
{
  int v2; // r15d
  _QWORD *v3; // r14
  unsigned __int64 v6; // rax
  unsigned __int64 *v7; // rcx
  __int64 v8; // rdx
  int v9; // ebx
  KIRQL v10; // r12
  __int64 v11; // rdi
  char v12; // al
  char v13; // bl
  volatile LONG *v14; // r14
  char v15; // al
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  bool v18; // zf
  _KPROCESS *Process; // rcx
  unsigned __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // [rsp+60h] [rbp+0h] BYREF

  *a2 = 17;
  v2 = 3;
  v3 = (_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  *(_QWORD *)((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) = v3;
  v6 = (unsigned __int64)v3;
  v7 = (unsigned __int64 *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  v8 = 3LL;
  v9 = 3;
  do
  {
    *v7++ = v6;
    v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v8;
  }
  while ( v8 );
  v10 = ExAcquireSpinLockShared(&dword_1402FE9C8);
  v11 = 0LL;
  do
  {
    v12 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                          + 8
                                          + 8LL * (unsigned int)--v9));
    if ( (v12 & 1) == 0 )
      goto LABEL_50;
  }
  while ( v9 );
  if ( v12 < 0 )
  {
    v11 = 1LL;
    goto LABEL_50;
  }
  if ( a1 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
  {
    v13 = 1;
    Process = KeGetCurrentThread()->ApcState.Process;
    v21 = Process[1].ActiveProcessors.Bitmap[2];
    if ( v21 && Process != PsInitialSystemProcess )
    {
      v14 = (volatile LONG *)(v21 + 2968);
      goto LABEL_12;
    }
LABEL_50:
    ExReleaseSpinLockShared(&dword_1402FE9C8, v10);
    return v11;
  }
  if ( qword_1402FE940 && a1 >= qword_1402FE940 && a1 < qword_1402FE940 + (qword_1402FE920 << 21) )
  {
    v13 = 4;
    v14 = &dword_1402FF880;
  }
  else if ( a1 + 0x400000000000LL <= 0xF7FFFFFFFFFLL
         || qword_1402FE8F0
         && a1 >= qword_1402FE8F0
         && a1 < qword_1402FE8F0 + (qword_1402FE8D0 << 21)
         && (*(_BYTE *)(48 * ((*v3 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFDALL) & 0xF0) == 0x70 )
  {
    v13 = 2;
    v14 = &dword_1402FF980;
  }
  else
  {
    v13 = 8;
    v14 = &dword_1402FFA80;
  }
LABEL_12:
  ExReleaseSpinLockShared(&dword_1402FE9C8, v10);
  *a2 = ExAcquireSpinLockExclusive(v14);
  ExAcquireSpinLockSharedAtDpcLevel(&dword_1402FE9C8);
  do
  {
    v15 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                          + 8
                                          + 8LL * (unsigned int)--v2));
    if ( (v15 & 1) == 0 )
      goto LABEL_42;
  }
  while ( v2 );
  if ( v15 >= 0 )
  {
    v16 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (v16 & 1) == 0 && !(unsigned int)MiFaultPteIntact(v16) )
      goto LABEL_42;
    v17 = a1 + 0x70000000000LL;
    if ( (v13 & 1) != 0 )
    {
      if ( v17 <= 0x7FFFFFFFFFLL )
        goto LABEL_24;
    }
    else
    {
      if ( v17 <= 0x7FFFFFFFFFLL )
        goto LABEL_42;
      if ( qword_1402FE940 && a1 >= qword_1402FE940 && a1 < qword_1402FE940 + (qword_1402FE920 << 21) )
      {
        v18 = (v13 & 4) == 0;
      }
      else
      {
        if ( a1 + 0x400000000000LL > 0xF7FFFFFFFFFLL
          && (!qword_1402FE8F0
           || a1 < qword_1402FE8F0
           || a1 >= qword_1402FE8F0 + (qword_1402FE8D0 << 21)
           || (*(_BYTE *)(48 * ((**(_QWORD **)((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) >> 12) & 0xFFFFFFFFFLL)
                        - 0x57FFFFFFFDALL) & 0xF0) != 0x70) )
        {
          if ( (v13 & 8) != 0 )
            goto LABEL_24;
          goto LABEL_42;
        }
        v18 = (v13 & 2) == 0;
      }
      if ( !v18 )
      {
LABEL_24:
        ExReleaseSpinLockSharedFromDpcLevel(&dword_1402FE9C8);
        return (__int64)v14;
      }
    }
LABEL_42:
    ExReleaseSpinLockSharedFromDpcLevel(&dword_1402FE9C8);
    LOBYTE(v22) = *a2;
    MiUnlockWorkingSetExclusive(v14, v22);
    return 0LL;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_1402FE9C8);
  LOBYTE(v23) = *a2;
  MiUnlockWorkingSetExclusive(v14, v23);
  return 1LL;
}

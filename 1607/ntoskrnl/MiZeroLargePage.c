/*
 * XREFs of MiZeroLargePage @ 0x14008A8C0
 * Callers:
 *     MiZeroPageThread @ 0x14013A1B0 (MiZeroPageThread.c)
 *     MiZeroLargePages @ 0x14013F840 (MiZeroLargePages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiReleaseLargeZeroingVa @ 0x14008AB74 (MiReleaseLargeZeroingVa.c)
 *     MiLargePageFreeToZero @ 0x14008AC60 (MiLargePageFreeToZero.c)
 *     KeZeroPages @ 0x1401623C0 (KeZeroPages.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall MiZeroLargePage(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // r15
  __int64 v4; // rdx
  __int64 v5; // r14
  unsigned __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // r12d
  int v9; // r13d
  void *v10; // r15
  int v11; // r14d
  int v12; // ecx
  __int64 v13; // r8
  _QWORD *v14; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  int v16; // [rsp+90h] [rbp+8h]
  unsigned int v17; // [rsp+98h] [rbp+10h]
  unsigned __int8 CurrentIrql; // [rsp+A0h] [rbp+18h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = *(_QWORD *)(a1 + 72);
  v3 = *(unsigned int *)(a1 + 64);
  v17 = *(_DWORD *)(a1 + 64);
  v4 = MiLargePageSizes[v3];
  v5 = a1;
  v6 = *(_QWORD *)(a1 + 40);
  v7 = 0LL;
  if ( *(_BYTE *)(a1 + 106) == 1 )
  {
    v4 = 512LL;
    if ( !(_DWORD)v3 )
    {
      v7 = *(_QWORD *)(a1 + 112);
      v6 = *(_QWORD *)(v7 + 176) + ((unsigned __int64)*(unsigned __int16 *)(a1 + 104) << 21);
      v5 = v7;
    }
  }
  KeZeroPages(v6, v4 << 12);
  if ( v7 )
  {
    v2 = *(_QWORD *)(v7 + 168);
    KeAcquireInStackQueuedSpinLock(
      (PKSPIN_LOCK)(qword_1403235B0 + 2152 + 2184LL * *(unsigned int *)(v7 + 184)),
      &LockHandle);
  }
  v16 = 1;
  v8 = 1;
  v9 = 1;
  v10 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  MiLockPageAtDpcInline(v2);
  if ( v7 )
  {
    v8 = 0;
    v9 = 0;
    if ( *(_BYTE *)(v5 + 68) != 1 )
    {
      if ( ++*(_DWORD *)(v7 + 192) != 512 )
      {
        v16 = 0;
        goto LABEL_5;
      }
      v8 = 1;
      v9 = 1;
    }
    v12 = *(_DWORD *)(v7 + 188);
    if ( v12 == 1 )
    {
      v13 = *(_QWORD *)(v7 + 72);
      v14 = *(_QWORD **)(v7 + 80);
      if ( *(_QWORD *)(v13 + 8) != v7 + 72 || *v14 != v7 + 72 )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      v9 = 1;
      v10 = (void *)v7;
    }
    else
    {
      *(_DWORD *)(v7 + 188) = v12 - 1;
    }
  }
LABEL_5:
  v11 = *(unsigned __int8 *)(v5 + 68);
  if ( v9 == 1 )
    MiReleaseLargeZeroingVa(a1);
  if ( v7 && v16 == 1 )
    *(_QWORD *)(a1 + 112) = 0LL;
  if ( v8 == 1 && v11 != 1 )
    MiLargePageFreeToZero((v2 + 0x58000000000LL) / 48, v17);
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  if ( v7 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
}

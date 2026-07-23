/*
 * XREFs of MiZeroLargePages @ 0x14013F840
 * Callers:
 *     MiZeroLargePageThread @ 0x14013F700 (MiZeroLargePageThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     MiGetLargePageToZero @ 0x140089D80 (MiGetLargePageToZero.c)
 *     MiZeroLargePage @ 0x14008A8C0 (MiZeroLargePage.c)
 *     MiOkToZeroNextLargePage @ 0x14013F988 (MiOkToZeroNextLargePage.c)
 *     MiReassessZeroThreads @ 0x14013FA44 (MiReassessZeroThreads.c)
 */

__int64 __fastcall MiZeroLargePages(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rdi
  int v4; // r14d
  int v5; // ebp
  unsigned int v7; // r15d
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rcx
  int v12; // ecx
  signed __int32 v14[8]; // [rsp+0h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+88h] [rbp+10h]

  v16 = a1;
  v2 = *(_QWORD *)(a2 + 144);
  v3 = 0LL;
  v4 = 0;
  v5 = 0;
  v7 = 0;
  v8 = *(_QWORD *)(v2 + 128);
  v17 = *(_DWORD *)(v2 + 80);
  v9 = __rdtsc();
  _InterlockedOr(v14, 0);
LABEL_2:
  v10 = v9;
  while ( 1 )
  {
    LODWORD(v16) = 0;
    if ( !(unsigned int)MiOkToZeroNextLargePage(a2, &v16) )
      break;
    if ( (_DWORD)v16 == 1 )
    {
      v5 = 0;
      v10 = __rdtsc();
      _InterlockedOr(v14, 0);
    }
    if ( MiGetLargePageToZero((__int64)MiSystemPartition, a2, v3, v17) )
    {
      MiZeroLargePage(a2);
      v11 = (unsigned __int64)MiLargePageSizes[v3] >> 9;
      v7 += v11;
      v5 += v11;
      if ( (v5 & 7) == 0 )
      {
        _InterlockedOr(v14, 0);
        MiReassessZeroThreads(a2, __rdtsc() - v10);
        v5 = 0;
        v9 = __rdtsc();
        _InterlockedOr(v14, 0);
        goto LABEL_2;
      }
    }
    else
    {
      if ( (_DWORD)v3 == 1 )
      {
        v4 = 1;
        break;
      }
      v3 = (unsigned int)(v3 + 1);
    }
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 64), &LockHandle);
  ++*(_DWORD *)(v8 + 64);
  v12 = *(_DWORD *)(v8 + 60);
  if ( v12 + *(_DWORD *)(v8 + 64) == *(_DWORD *)(v8 + 56) && v12 )
  {
    if ( v4 == 1 )
      *(_DWORD *)(v8 + 24) = 4;
    KeSetEvent((PRKEVENT)v8, 0, 0);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v7;
}

/*
 * XREFs of MmEnumerateBadPages @ 0x1401E608C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmEnumerateBadPages(_QWORD *a1)
{
  unsigned __int64 v2; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v4; // rdi
  _QWORD *v5; // r14
  __int64 i; // rax
  _BYTE v8[32]; // [rsp+80h] [rbp+80h] BYREF

  *a1 = 0LL;
  while ( 1 )
  {
    if ( !qword_140300B00 )
      return 0LL;
    v2 = qword_140300B00 + 16;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * (qword_140300B00 + 16), 0x61426D4Du);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    v5 = PoolWithTag;
    KeAcquireInStackQueuedSpinLock(
      &qword_140300B20,
      (PKLOCK_QUEUE_HANDLE)((unsigned __int64)v8 & 0xFFFFFFFFFFFFFFC0uLL));
    if ( qword_140300B00 < v2 && qword_140300B00 )
    {
      *v4 = qword_140300B00;
      for ( i = qword_140300B10; i != 0xFFFFFFFFFLL; i = *(_QWORD *)(48 * i - 0x58000000000LL) & 0xFFFFFFFFFLL )
        *++v5 = i;
      KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)((unsigned __int64)v8 & 0xFFFFFFFFFFFFFFC0uLL));
      *a1 = v4;
      return 0LL;
    }
    KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)((unsigned __int64)v8 & 0xFFFFFFFFFFFFFFC0uLL));
    ExFreePoolWithTag(v4, 0);
  }
  return 3221225626LL;
}

/*
 * XREFs of MmEnumerateBadPages @ 0x140232E1C
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
    if ( !qword_140354A40 )
      return 0LL;
    v2 = qword_140354A40 + 16;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * (qword_140354A40 + 16), 0x61426D4Du);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    v5 = PoolWithTag;
    KeAcquireInStackQueuedSpinLock(
      &qword_140354A60,
      (PKLOCK_QUEUE_HANDLE)((unsigned __int64)v8 & 0xFFFFFFFFFFFFFFC0uLL));
    if ( qword_140354A40 < v2 && qword_140354A40 )
    {
      *v4 = qword_140354A40;
      for ( i = qword_140354A50; i != 0xFFFFFFFFFLL; i = *(_QWORD *)(48 * i - 0x58000000000LL) & 0xFFFFFFFFFLL )
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

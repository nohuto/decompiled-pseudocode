/*
 * XREFs of MiReturnPhysicalPoolPages @ 0x140097B80
 * Callers:
 *     ExFreeLargePool @ 0x140010760 (ExFreeLargePool.c)
 *     MiFreePoolPages @ 0x1400180D8 (MiFreePoolPages.c)
 *     MiFindNonPagedPoolPages @ 0x1400E4F00 (MiFindNonPagedPoolPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReturnNonPagedPoolCharges @ 0x140097D70 (MiReturnNonPagedPoolCharges.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall MiReturnPhysicalPoolPages(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // r12
  _QWORD *v3; // r13
  __int64 v4; // r14
  unsigned int v5; // r15d
  __int64 v6; // rbp
  unsigned __int8 CurrentIrql; // di
  __int64 v8; // rdx
  unsigned __int8 v10; // al
  char v11; // cl
  _SLIST_HEADER *v12; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v14[3]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v15; // [rsp+58h] [rbp-40h]

  v1 = a1;
  v2 = 0LL;
  v15 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v5 = (unsigned __int8)HIBYTE(*(_QWORD *)(a1 + 40)) >> 2;
  memset(v14, 0, sizeof(v14));
  do
  {
    v6 = *(_QWORD *)v1;
    if ( (*(_BYTE *)(v1 + 35) & 0x10) != 0 )
    {
      v10 = MiLockPageInline(v1);
      v11 = *(_BYTE *)(v1 + 34);
      *(_QWORD *)(v1 + 8) = -8LL;
      *(_BYTE *)(v1 + 34) = v11 & 0xF8 | 6;
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v10);
      if ( !v3 )
        v3 = (_QWORD *)v1;
      *(_QWORD *)v1 = v2;
      ++v4;
      v2 = v1;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      MiLockPageAtDpcInline(v1);
      *(_QWORD *)(v1 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v1 + 32) = 0;
      MiInsertPageInFreeOrZeroedList((v1 + 0x58000000000LL) / 48, 2);
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      ++v14[0];
      ++v15;
    }
    v1 = v6;
    v8 = 0x2AAAAAAAAAAAAAABLL;
  }
  while ( v6 );
  if ( v4 )
  {
    v12 = &qword_1403269F0[26 * v5];
    KeAcquireInStackQueuedSpinLock(&v12[19].Region, &LockHandle);
    *v3 = v12[20].Alignment;
    v12[19].Alignment += v4;
    v12[20].Alignment = v2;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return MiReturnNonPagedPoolCharges(v14, v8);
}

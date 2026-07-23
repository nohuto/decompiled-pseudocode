/*
 * XREFs of MiReturnPhysicalPoolPages @ 0x1400D6950
 * Callers:
 *     MiFindNonPagedPoolPages @ 0x1400198C0 (MiFindNonPagedPoolPages.c)
 *     MiFreePoolPages @ 0x14003B78C (MiFreePoolPages.c)
 *     ExFreeLargePool @ 0x1400892D0 (ExFreeLargePool.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReturnNonPagedPoolCharges @ 0x1400D6B5C (MiReturnNonPagedPoolCharges.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall MiReturnPhysicalPoolPages(__int64 a1)
{
  unsigned __int64 v1; // r13
  _QWORD *v2; // r12
  __int64 v3; // r15
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rsi
  __int64 v7; // rdx
  unsigned __int8 CurrentIrql; // bp
  unsigned __int8 v10; // al
  char v11; // cl
  _SLIST_HEADER *v12; // rbx
  int v13; // [rsp+20h] [rbp-88h] BYREF
  _QWORD *v14; // [rsp+28h] [rbp-80h]
  __int64 v15; // [rsp+30h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v17[3]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v18; // [rsp+68h] [rbp-40h]

  v1 = 0LL;
  v2 = 0LL;
  v15 = (unsigned __int8)HIBYTE(*(_QWORD *)(a1 + 40)) >> 2;
  v3 = 0LL;
  v4 = a1;
  v18 = 0LL;
  memset(v17, 0, sizeof(v17));
  v14 = 0LL;
  v5 = 2LL;
  do
  {
    v6 = *(_QWORD *)v4;
    v7 = (unsigned __int128)((v4 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    if ( (*(_BYTE *)(v4 + 35) & 0x10) != 0 )
    {
      v10 = MiLockPageInline(v4);
      v11 = *(_BYTE *)(v4 + 34);
      *(_QWORD *)(v4 + 8) = -8LL;
      *(_BYTE *)(v4 + 34) = v11 & 0xF8 | 6;
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v10);
      *(_QWORD *)v4 = v1;
      v1 = v4;
      if ( !v2 )
        v2 = (_QWORD *)v4;
      ++v3;
      v14 = v2;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v13 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v13, v7, v5);
          while ( (*(_QWORD *)(v4 + 24) & 0x8000000000000000uLL) != 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) );
        v2 = v14;
      }
      *(_WORD *)(v4 + 32) = 0;
      *(_QWORD *)(v4 + 24) &= 0xC000000000000000uLL;
      MiInsertPageInFreeOrZeroedList((v4 + 0x58000000000LL) / 48, 2uLL);
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      ++v17[0];
      ++v18;
    }
    v4 = v6;
    v5 = 2LL;
  }
  while ( v6 );
  if ( v3 )
  {
    v12 = &qword_1402FE6C0[26 * (unsigned int)v15];
    KeAcquireInStackQueuedSpinLock(&v12[19].Region, &LockHandle);
    *v2 = v12[20].Alignment;
    v12[19].Alignment += v3;
    v12[20].Alignment = v1;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return MiReturnNonPagedPoolCharges(v17);
}

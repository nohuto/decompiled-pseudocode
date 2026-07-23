/*
 * XREFs of MiFindNonPagedPoolPages @ 0x1400E4F00
 * Callers:
 *     ExpAllocateBigPool @ 0x140011650 (ExpAllocateBigPool.c)
 *     MiAllocatePoolPages @ 0x14009D3EC (MiAllocatePoolPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiChangePageAttribute @ 0x14001CC08 (MiChangePageAttribute.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiReturnPhysicalPoolPages @ 0x140097B80 (MiReturnPhysicalPoolPages.c)
 *     MiReturnNonPagedPoolCharges @ 0x140097D70 (MiReturnNonPagedPoolCharges.c)
 *     MiInitializePageColorBase @ 0x1400E3F40 (MiInitializePageColorBase.c)
 *     MiSetPfnTbFlushStamp @ 0x1400E5330 (MiSetPfnTbFlushStamp.c)
 *     MiRetryNonPagedAllocation @ 0x1400E5D38 (MiRetryNonPagedAllocation.c)
 *     MiObtainNonPagedPoolCharges @ 0x1400FFE04 (MiObtainNonPagedPoolCharges.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall MiFindNonPagedPoolPages(unsigned int a1, unsigned __int64 a2)
{
  _SLIST_HEADER *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // r14
  _WORD *v7; // rsi
  __int16 v8; // ax
  __int64 Page; // rax
  __int64 v10; // rbx
  unsigned __int64 Alignment; // rdx
  unsigned __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rbx
  unsigned __int8 v17; // al
  unsigned __int64 v18; // rcx
  _WORD *v19; // [rsp+20h] [rbp-88h] BYREF
  __int16 v20; // [rsp+28h] [rbp-80h]
  unsigned __int16 v21; // [rsp+2Ah] [rbp-7Eh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v23[3]; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v24; // [rsp+60h] [rbp-48h]

  memset(v23, 0, sizeof(v23));
  v4 = &qword_1403269F0[26 * a1];
  v5 = 0LL;
  v6 = 0LL;
  v24 = 0LL;
  if ( v4[19].Alignment )
  {
    KeAcquireInStackQueuedSpinLock(&v4[19].Region, &LockHandle);
    Alignment = v4[19].Alignment;
    v13 = Alignment;
    if ( Alignment > a2 )
      v13 = a2;
    if ( v13 )
    {
      v14 = (_QWORD *)v4[20].Alignment;
      a2 -= v13;
      v5 = (__int64)v14;
      v4[19].Alignment = Alignment - v13;
      do
      {
        v15 = v14;
        v14 = (_QWORD *)*v14;
        --v13;
      }
      while ( v13 );
      *v15 = 0LL;
      v4[20].Alignment = (unsigned __int64)v14;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !a2 )
      return v5;
    v6 = v5;
  }
  v24 = a2;
  if ( !(unsigned int)MiObtainNonPagedPoolCharges(a2) )
  {
    if ( v5 )
      MiReturnPhysicalPoolPages(v5);
    return 0LL;
  }
  MiInitializePageColorBase(0LL, a1 + 1, (__int64)&v19);
  if ( !a2 )
    return v5;
  v7 = v19;
  while ( 1 )
  {
    if ( a2 > 1 )
    {
      if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 && a2 + 160 >= qword_140324EC0 )
        goto LABEL_29;
      v7 = v19;
    }
    MiRetryNonPagedAllocation();
    v8 = v20;
    Page = MiGetPage((__int64)MiSystemPartition, v21 | (unsigned int)(unsigned __int16)(v8 & ++*v7), 0xCu);
    if ( Page != -1 )
    {
      v10 = 48 * Page - 0x58000000000LL;
      if ( (*(_BYTE *)(v10 + 34) & 0xC0) != 0x40 )
        MiChangePageAttribute(v10, 1u, 0);
      MiSetPfnTbFlushStamp(v10, 0LL, 0LL);
      --v24;
      *(_QWORD *)v10 = v5;
      --a2;
      v5 = v10;
      goto LABEL_12;
    }
    if ( !(unsigned int)MiRetryNonPagedAllocation() )
      break;
LABEL_12:
    if ( !a2 )
      return v5;
  }
  ++dword_1403264DC;
LABEL_29:
  if ( v5 )
  {
    v16 = v5;
    do
    {
      if ( v16 == v6 )
        break;
      v17 = MiLockPageInline(v16);
      v18 = *(_QWORD *)(v16 + 24) & 0xC000000000000001uLL;
      *(_WORD *)(v16 + 32) = 1;
      *(_QWORD *)(v16 + 24) = v18 | 1;
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v17);
      v16 = *(_QWORD *)v16;
    }
    while ( v16 );
    MiReturnPhysicalPoolPages(v5);
  }
  v23[0] = v24;
  MiReturnNonPagedPoolCharges(v23);
  return 0LL;
}

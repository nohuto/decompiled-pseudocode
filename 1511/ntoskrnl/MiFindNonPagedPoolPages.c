/*
 * XREFs of MiFindNonPagedPoolPages @ 0x1400198C0
 * Callers:
 *     MiAllocatePoolPages @ 0x140040F90 (MiAllocatePoolPages.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiRetryNonPagedAllocation @ 0x140019AF0 (MiRetryNonPagedAllocation.c)
 *     MiObtainNonPagedPoolCharges @ 0x140019B68 (MiObtainNonPagedPoolCharges.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiChangePageAttribute @ 0x1400AA634 (MiChangePageAttribute.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReturnPhysicalPoolPages @ 0x1400D6950 (MiReturnPhysicalPoolPages.c)
 *     MiReturnNonPagedPoolCharges @ 0x1400D6B5C (MiReturnNonPagedPoolCharges.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

_QWORD *__fastcall MiFindNonPagedPoolPages(unsigned int a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  _SLIST_HEADER *v4; // rbx
  _QWORD *v5; // rsi
  _QWORD *v6; // r14
  _WORD *v7; // rbx
  __int16 v8; // ax
  __int64 Page; // rax
  __int64 v10; // rbx
  signed __int64 v11; // rdx
  signed __int64 v12; // r8
  unsigned __int64 Alignment; // rdx
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  signed __int64 v18; // rcx
  __int64 v19; // rbx
  unsigned __int8 v20; // al
  unsigned __int64 v21; // rcx
  _WORD *v22; // [rsp+20h] [rbp-88h] BYREF
  __int16 v23; // [rsp+28h] [rbp-80h]
  unsigned __int16 v24; // [rsp+2Ah] [rbp-7Eh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v26[3]; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v27; // [rsp+60h] [rbp-48h]

  memset(v26, 0, sizeof(v26));
  v3 = a2;
  v4 = &qword_1402FE6C0[26 * a1];
  v5 = 0LL;
  v6 = 0LL;
  v27 = 0LL;
  if ( v4[19].Alignment )
  {
    KeAcquireInStackQueuedSpinLock(&v4[19].Region, &LockHandle);
    Alignment = v4[19].Alignment;
    v15 = Alignment;
    if ( Alignment > v3 )
      v15 = v3;
    if ( v15 )
    {
      v16 = (_QWORD *)v4[20].Alignment;
      v3 -= v15;
      v5 = v16;
      v4[19].Alignment = Alignment - v15;
      do
      {
        v17 = v16;
        v16 = (_QWORD *)*v16;
        --v15;
      }
      while ( v15 );
      *v17 = 0LL;
      v4[20].Alignment = (unsigned __int64)v16;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !v3 )
      return v5;
    v6 = v5;
  }
  v27 = v3;
  if ( !(unsigned int)MiObtainNonPagedPoolCharges(v3, a2) )
  {
    if ( v5 )
      MiReturnPhysicalPoolPages(v5);
    return 0LL;
  }
  MI_INITIALIZE_COLOR_BASE(0LL, a1 + 1, &v22);
  if ( !v3 )
    return v5;
  v7 = v22;
  while ( 1 )
  {
    if ( v3 > 1 )
    {
      if ( ((__int64)KeGetCurrentThread()[1].Queue & 2) != 0 && v3 + 160 >= qword_140301440 )
      {
        ++dword_1402E1820;
        goto LABEL_34;
      }
      v7 = v22;
    }
    MiRetryNonPagedAllocation();
    v8 = v23;
    Page = MiGetPage(&MiSystemPartition, v24 | (unsigned int)(unsigned __int16)(v8 & ++*v7), 12LL);
    if ( Page != -1 )
    {
      v10 = 48 * Page - 0x58000000000LL;
      if ( (*(_BYTE *)(v10 + 34) & 0xC0) != 0x40 )
        MiChangePageAttribute(v10, 1LL, 0LL);
      v11 = *(_QWORD *)(v10 + 24);
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 24), v11 & 0xF0FFFFFFFFFFFFFFuLL, v11);
      if ( v11 != v12 )
      {
        do
        {
          v18 = v12;
          v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 24), v12 & 0xF0FFFFFFFFFFFFFFuLL, v12);
        }
        while ( v18 != v12 );
      }
      *(_QWORD *)v10 = v5;
      v5 = (_QWORD *)v10;
      --v27;
      v7 = v22;
      --v3;
      goto LABEL_13;
    }
    if ( !(unsigned int)MiRetryNonPagedAllocation() )
      break;
    ++dword_1402E17D4;
LABEL_13:
    if ( !v3 )
      return v5;
  }
  ++dword_1402FE1DC;
  if ( (MiAllocationDebug & 1) != 0 )
    __debugbreak();
LABEL_34:
  if ( v5 )
  {
    v19 = (__int64)v5;
    do
    {
      if ( (_QWORD *)v19 == v6 )
        break;
      v20 = MiLockPageInline(v19);
      v21 = *(_QWORD *)(v19 + 24) & 0xC000000000000001uLL;
      *(_WORD *)(v19 + 32) = 1;
      *(_QWORD *)(v19 + 24) = v21 | 1;
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v20);
      v19 = *(_QWORD *)v19;
    }
    while ( v19 );
    MiReturnPhysicalPoolPages(v5);
  }
  v26[0] = v27;
  MiReturnNonPagedPoolCharges(v26);
  return 0LL;
}

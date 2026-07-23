/*
 * XREFs of MiFindNonPagedPoolPages @ 0x140059840
 * Callers:
 *     MiAllocatePoolPages @ 0x140046C90 (MiAllocatePoolPages.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiSetPfnTbFlushStamp @ 0x140059A30 (MiSetPfnTbFlushStamp.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiChangePageAttribute @ 0x1400E5678 (MiChangePageAttribute.c)
 *     MiReturnPhysicalPoolPages @ 0x14010E300 (MiReturnPhysicalPoolPages.c)
 *     MiReturnNonPagedPoolCharges @ 0x14010E528 (MiReturnNonPagedPoolCharges.c)
 *     MiObtainNonPagedPoolCharges @ 0x140125C58 (MiObtainNonPagedPoolCharges.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiFindNonPagedPoolPages(unsigned int a1, unsigned __int64 a2)
{
  _SLIST_HEADER *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // r12
  __int16 v7; // r14
  int v8; // r15d
  _WORD *v9; // rsi
  __int64 Page; // rax
  __int64 v11; // rbx
  unsigned __int64 Alignment; // rdx
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v19; // edi
  unsigned __int64 v20; // rax
  _QWORD *v21; // [rsp+20h] [rbp-98h]
  _WORD *v22; // [rsp+28h] [rbp-90h] BYREF
  __int16 v23; // [rsp+30h] [rbp-88h]
  unsigned __int16 v24; // [rsp+32h] [rbp-86h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v26[3]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp-50h]

  memset(v26, 0, sizeof(v26));
  v4 = &qword_14034EB70[26 * a1];
  v5 = 0LL;
  v6 = 0LL;
  v27 = 0LL;
  v21 = 0LL;
  if ( v4[19].Alignment )
  {
    KeAcquireInStackQueuedSpinLock(&v4[19].Region, &LockHandle);
    Alignment = v4[19].Alignment;
    v14 = Alignment;
    if ( Alignment > a2 )
      v14 = a2;
    if ( v14 )
    {
      a2 -= v14;
      v21 = (_QWORD *)v4[20].Alignment;
      v15 = v21;
      v4[19].Alignment = Alignment - v14;
      v5 = (__int64)v21;
      do
      {
        v16 = v15;
        v15 = (_QWORD *)*v15;
        --v14;
      }
      while ( v14 );
      *v16 = 0LL;
      v4[20].Alignment = (unsigned __int64)v15;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !a2 )
      return v5;
    v6 = v5;
  }
  v27 = a2;
  if ( (unsigned int)MiObtainNonPagedPoolCharges(a2) )
  {
    MI_INITIALIZE_COLOR_BASE(0LL, a1 + 1, (__int64)&v22);
    if ( a2 )
    {
      v7 = v23;
      v8 = v24;
      v9 = v22;
      while ( 1 )
      {
        Page = MiGetPage(MiSystemPartition, v8 | (unsigned int)(unsigned __int16)(v7 & ++*v9), 12LL);
        if ( Page == -1 )
          break;
        v11 = 48 * Page - 0x58000000000LL;
        if ( (*(_BYTE *)(v11 + 34) & 0xC0) != 0x40 )
          MiChangePageAttribute(v11, 1LL, 0LL);
        MiSetPfnTbFlushStamp(v11, 0LL, 0LL);
        *(_QWORD *)v11 = v5;
        v5 = v11;
        --v27;
        v21 = (_QWORD *)v11;
        if ( !--a2 )
          return v5;
      }
      ++dword_14034E694;
      if ( v5 )
      {
        v17 = v5;
        do
        {
          if ( v17 == v6 )
            break;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v19 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v19 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v19);
            }
            while ( (*(_QWORD *)(v17 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) );
          }
          v20 = *(_QWORD *)(v17 + 24) & 0xC000000000000001uLL;
          *(_WORD *)(v17 + 32) = 1;
          *(_QWORD *)(v17 + 24) = v20 | 1;
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(CurrentIrql);
          v17 = *(_QWORD *)v17;
        }
        while ( v17 );
        MiReturnPhysicalPoolPages(v21);
      }
      v26[0] = v27;
      MiReturnNonPagedPoolCharges(v26);
      return 0LL;
    }
    else
    {
      return v5;
    }
  }
  else
  {
    if ( v5 )
      MiReturnPhysicalPoolPages(v5);
    return 0LL;
  }
}

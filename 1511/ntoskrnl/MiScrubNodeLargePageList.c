/*
 * XREFs of MiScrubNodeLargePageList @ 0x1401E197C
 * Callers:
 *     MiScrubNodeLargePages @ 0x14062B008 (MiScrubNodeLargePages.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400196EC (MiUnlinkNodeLargePageHelper.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140019D90 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiInsertLargePageInNodeList @ 0x1400C02B4 (MiInsertLargePageInNodeList.c)
 *     MiMakePageBad @ 0x1401E5A10 (MiMakePageBad.c)
 *     MiScrubPage @ 0x1401E5FC4 (MiScrubPage.c)
 */

__int64 __fastcall MiScrubNodeLargePageList(__int64 a1, int a2, int a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  unsigned int v7; // r15d
  __int64 v8; // rbx
  __int64 **v9; // r14
  unsigned __int8 CurrentIrql; // si
  KSPIN_LOCK *v11; // rdi
  __int64 v12; // r13
  __int64 *v13; // rdi
  __int64 v14; // rax
  __int64 *v15; // r12
  int v16; // ebp
  __int64 v17; // rsi
  ULONG_PTR i; // rbx
  unsigned __int8 v19; // bp
  unsigned __int64 v20; // rbx
  unsigned __int8 v21; // bl
  __int64 v22; // rdi
  unsigned __int64 v23; // rbx
  __int64 **v25; // [rsp+20h] [rbp-78h]
  KSPIN_LOCK *SpinLock; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v29; // [rsp+A8h] [rbp+10h]

  v6 = a1;
  v7 = 1;
  v8 = a4 + 4 * (a3 + 2LL * a2);
  v9 = (__int64 **)(a1 + 16 * (v8 + 1));
  v25 = v9;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v11 = (KSPIN_LOCK *)(a1 + 1328);
  SpinLock = (KSPIN_LOCK *)(a1 + 1328);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 1328), &LockHandle);
  v12 = *(_QWORD *)(v6 + 8 * v8 + 272);
  if ( v12 )
  {
    while ( *v9 != (__int64 *)v9 )
    {
      if ( *(_DWORD *)(a6 + 4) )
      {
        v7 = 0;
        break;
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)*v9 + 6, 0x3FuLL) )
      {
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        __writecr8(CurrentIrql);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        KeAcquireInStackQueuedSpinLockAtDpcLevel(v11, &LockHandle);
      }
      else
      {
        v13 = *v9;
        v14 = **v9;
        if ( (__int64 **)(*v9)[1] != v9 || *(__int64 **)(v14 + 8) != v13 )
          __fastfail(3u);
        *v9 = (__int64 *)v14;
        *(_QWORD *)(v14 + 8) = v9;
        v29 = MiUnlinkNodeLargePageHelper(v6, (__int64)v13);
        v7 = v29;
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        _InterlockedAnd64(v13 + 3, 0x7FFFFFFFFFFFFFFFuLL);
        if ( !v29 )
        {
          MiInsertLargePageInFreeOrZeroList((unsigned __int64)v13);
          goto LABEL_33;
        }
        __writecr8(CurrentIrql);
        --v12;
        v15 = v13 + 3072;
        v16 = 0;
        v17 = (__int64)v13;
        if ( v13 >= v13 + 3072 )
          goto LABEL_25;
        do
        {
          if ( (int)MiScrubPage(a5, 0LL, v13) >= 0 )
          {
            if ( v16 == 1 )
            {
              v21 = MiLockPageInline((__int64)v13);
              if ( (*((_BYTE *)v13 + 35) & 0x40) != 0 )
              {
                MiMakePageBad(v13, 1LL);
              }
              else
              {
                v13[5] &= 0xFFFFFFF000000000uLL;
                MiInsertPageInFreeOrZeroedList((__int64)(v13 + 0xB000000000LL) / 48, 2uLL);
              }
              _InterlockedAnd64(v13 + 3, 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(v21);
            }
          }
          else
          {
            if ( !v16 )
            {
              for ( i = (v17 + 0x58000000000LL) / 48; (__int64 *)v17 != v13; ++i )
              {
                v19 = MiLockPageInline(v17);
                if ( (*(_BYTE *)(v17 + 35) & 0x40) != 0 )
                {
                  *(_BYTE *)(v17 + 34) = *(_BYTE *)(v17 + 34) & 0xF8 | 5;
                  MiMakePageBad(v17, 1LL);
                }
                else
                {
                  *(_QWORD *)(v17 + 40) &= 0xFFFFFFF000000000uLL;
                  MiInsertPageInFreeOrZeroedList(i, 2uLL);
                }
                _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                __writecr8(v19);
                v17 += 48LL;
              }
            }
            v16 = 1;
            v20 = (unsigned __int8)MiLockPageInline((__int64)v13);
            *((_BYTE *)v13 + 34) = *((_BYTE *)v13 + 34) & 0xF8 | 5;
            MiMakePageBad(v13, 1LL);
            _InterlockedAnd64(v13 + 3, 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v20);
          }
          v13 += 6;
        }
        while ( v13 < v15 );
        v9 = v25;
        v7 = v29;
        if ( !v16 )
        {
LABEL_25:
          v22 = (__int64)(v13 - 3072);
          v23 = (unsigned __int8)MiLockPageInline(v22);
          MiInsertLargePageInNodeList((v22 + 0x58000000000LL) / 48, 0x200uLL, 1);
          _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v23);
        }
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v11 = SpinLock;
        KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &LockHandle);
        v6 = a1;
      }
      if ( !v12 )
        break;
    }
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
LABEL_33:
  __writecr8(CurrentIrql);
  return v7;
}

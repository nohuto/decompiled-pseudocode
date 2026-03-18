/*
 * XREFs of MiAdjustModifiedPageLoad @ 0x14001373C
 * Callers:
 *     MiWorkingSetManager @ 0x1400131F4 (MiWorkingSetManager.c)
 * Callees:
 *     MiStoreUpdateMemoryConditions @ 0x140014BC8 (MiStoreUpdateMemoryConditions.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUpdateReserveClusterInfo @ 0x1400B84AC (MiUpdateReserveClusterInfo.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x14011529C (MiUseLowIoPriorityForModifiedPages.c)
 *     MiWakeModifiedPageWriter @ 0x140118C84 (MiWakeModifiedPageWriter.c)
 */

void __fastcall MiAdjustModifiedPageLoad(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r10
  __int64 v6; // rcx
  unsigned __int64 v7; // r11
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  int v13; // ebp
  unsigned int v14; // eax
  __int64 *v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  signed __int64 v19; // rax
  unsigned __int64 v20; // r11
  __int64 v21; // rax
  char v22; // al
  signed __int32 v23[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 5888);
  v4 = *(_QWORD *)(a1 + 6128);
  v6 = *(_QWORD *)(a1 + 1728);
  v7 = 0x4000LL;
  if ( v3 >> 5 > 0x4000 )
    v7 = v3 >> 5;
  v10 = v3 >> 4;
  if ( v10 < v7 )
    v7 = v10;
  v11 = *(_QWORD *)(a1 + 1664) + v6;
  v12 = 0LL;
  if ( v11 > 0x4E20 && v4 < v11 / 0xA )
    goto LABEL_7;
  if ( v4 >= v7 )
  {
    v12 = v7 >> 1;
LABEL_34:
    if ( !(unsigned int)MiUseLowIoPriorityForModifiedPages(a1) )
      v12 = -1LL;
    MiWakeModifiedPageWriter(a1, v12);
    *(_QWORD *)(a1 + 736) = 0LL;
    *(_QWORD *)(a1 + 744) = 0LL;
    goto LABEL_7;
  }
  v11 = 15LL * (*(_QWORD *)(a1 + 744) >> 4);
  v18 = v11 + (v4 >> 4);
  *(_QWORD *)(a1 + 744) = v18;
  if ( v11 > v18 )
    goto LABEL_34;
  if ( v4 < 0x320 )
  {
    *(_QWORD *)(a1 + 736) = 0LL;
    goto LABEL_7;
  }
  *(_QWORD *)(a1 + 736) += v18 <= v4 ? v18 - v4 : v4 - v18;
  v19 = *(_QWORD *)(a1 + 736);
  v11 = v19 + v4;
  *(_QWORD *)(a1 + 736) = v19 + v4;
  if ( v19 > (__int64)(v19 + v4) )
    goto LABEL_34;
  v20 = v7 >> 1;
  v21 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v20 < 0x369D0369D0369DLL )
    v21 = 600 * v20;
  if ( (__int64)v11 >= v21 )
    goto LABEL_34;
LABEL_7:
  *(_QWORD *)(a1 + 752) = a2;
  if ( (a3 & 7) == 0 )
  {
    v13 = 0;
    if ( (*(_BYTE *)(a1 + 796) & 1) != 0 )
    {
      _InterlockedOr(v23, 0);
      if ( a2 > 0x4000
        || (LOBYTE(v11) = 1, (unsigned __int64)(KiQueryUnbiasedInterruptTime(v11) - *(_QWORD *)(a1 + 784)) >= 0x47868C00) )
      {
        v13 = 1;
        *(_WORD *)(a1 + 796) &= ~1u;
      }
    }
    v14 = *(_DWORD *)(a1 + 5720);
    if ( v14 )
    {
      v15 = (__int64 *)(a1 + 5728);
      v16 = v14;
      do
      {
        v17 = *v15;
        if ( (*(_BYTE *)(*v15 + 204) & 0x40) == 0 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v17 + 232), &LockHandle);
          if ( *(_DWORD *)(v17 + 132) != *(_DWORD *)(v17 + 128) )
            *(_DWORD *)(v17 + 124) = dword_140381108;
          *(_DWORD *)(v17 + 136) = 4 * dword_140381108;
          if ( v13 )
          {
            v22 = *(_BYTE *)(v17 + 207);
            if ( (v22 & 1) != 0 )
              *(_BYTE *)(v17 + 207) = v22 & 0xFE;
          }
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
        ++v15;
        --v16;
      }
      while ( v16 );
    }
    if ( v13 )
      MiUpdateReserveClusterInfo(a1, 0LL, 0LL);
  }
  if ( *(_DWORD *)(a1 + 1080) )
    MiStoreUpdateMemoryConditions(a1);
}

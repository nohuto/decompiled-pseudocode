/*
 * XREFs of MiAdjustModifiedPageLoad @ 0x140012840
 * Callers:
 *     MiWorkingSetManager @ 0x1400124C4 (MiWorkingSetManager.c)
 * Callees:
 *     MiStoreUpdateMemoryConditions @ 0x1400117B0 (MiStoreUpdateMemoryConditions.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiUpdateReserveClusterInfo @ 0x1400DDB10 (MiUpdateReserveClusterInfo.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x14014B610 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiWakeModifiedPageWriter @ 0x14014D788 (MiWakeModifiedPageWriter.c)
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
  unsigned int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  signed __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // r11
  __int64 v22; // rax
  signed __int32 v23[8]; // [rsp+0h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 5504);
  v4 = *(_QWORD *)(a1 + 5744);
  v6 = *(_QWORD *)(a1 + 1600);
  v7 = 0x4000LL;
  if ( v3 >> 5 > 0x4000 )
    v7 = v3 >> 5;
  v10 = v3 >> 4;
  if ( v10 < v7 )
    v7 = v10;
  v11 = *(_QWORD *)(a1 + 1536) + v6;
  v12 = 0LL;
  if ( v11 > 0x4E20 && v4 < v11 / 0xA )
    goto LABEL_7;
  if ( v4 >= v7 )
  {
    v12 = v7 >> 1;
LABEL_32:
    if ( !(unsigned int)MiUseLowIoPriorityForModifiedPages(a1) )
      v12 = -1LL;
    MiWakeModifiedPageWriter(a1, v12);
    *(_QWORD *)(a1 + 728) = 0LL;
    *(_QWORD *)(a1 + 736) = 0LL;
    goto LABEL_7;
  }
  v17 = *(_QWORD *)(a1 + 736) >> 4;
  v18 = 15 * v17 + (v4 >> 4);
  *(_QWORD *)(a1 + 736) = v18;
  if ( 15 * v17 > v18 )
    goto LABEL_32;
  if ( v4 < 0x320 )
  {
    *(_QWORD *)(a1 + 728) = 0LL;
    goto LABEL_7;
  }
  *(_QWORD *)(a1 + 728) += v18 <= v4 ? v18 - v4 : v4 - v18;
  v19 = *(_QWORD *)(a1 + 728);
  v20 = v19 + v4;
  *(_QWORD *)(a1 + 728) = v19 + v4;
  if ( v19 > (__int64)(v19 + v4) )
    goto LABEL_32;
  v21 = v7 >> 1;
  v22 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v21 < 0x369D0369D0369DLL )
    v22 = 600 * v21;
  if ( v20 >= v22 )
    goto LABEL_32;
LABEL_7:
  *(_QWORD *)(a1 + 744) = a2;
  if ( (a3 & 7) == 0 )
  {
    v13 = *(_DWORD *)(a1 + 5336);
    if ( v13 )
    {
      v14 = a1 + 5344;
      v15 = v13;
      do
      {
        v16 = *(_QWORD *)v14;
        if ( (*(_BYTE *)(*(_QWORD *)v14 + 164LL) & 0x40) == 0 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v16 + 192), &LockHandle);
          if ( *(_DWORD *)(v16 + 152) != *(_DWORD *)(v16 + 148) )
            *(_DWORD *)(v16 + 144) = dword_1403D00F8;
          *(_DWORD *)(v16 + 156) = 4 * dword_1403D00F8;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
        v14 += 8LL;
        --v15;
      }
      while ( v15 );
    }
    if ( (*(_BYTE *)(a1 + 788) & 1) != 0 )
    {
      _InterlockedOr(v23, 0);
      if ( a2 > 0x4000
        || MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 776) - MEMORY[0xFFFFF780000003B0] >= 0x47868C00uLL )
      {
        *(_WORD *)(a1 + 788) &= ~1u;
        MiUpdateReserveClusterInfo(a1, 0LL, 0LL);
      }
    }
  }
  if ( *(_DWORD *)(a1 + 1048) )
    MiStoreUpdateMemoryConditions(a1);
}

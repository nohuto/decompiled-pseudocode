/*
 * XREFs of CcCanIWriteStream @ 0x14002F5F0
 * Callers:
 *     CcScheduleReadAheadEx @ 0x14002E96C (CcScheduleReadAheadEx.c)
 *     CcNotifyOfMappedWrite @ 0x14002F2E8 (CcNotifyOfMappedWrite.c)
 *     CcCanIWrite @ 0x14002F540 (CcCanIWrite.c)
 *     CcMapAndCopyInToCache @ 0x140068870 (CcMapAndCopyInToCache.c)
 *     CcCopyWriteWontFlush @ 0x140070FC0 (CcCopyWriteWontFlush.c)
 *     CcPrepareMdlWrite @ 0x1400F04A8 (CcPrepareMdlWrite.c)
 *     CcShouldLazyWriteCacheMap @ 0x140100F0C (CcShouldLazyWriteCacheMap.c)
 *     CcPostDeferredWrites @ 0x1401A8F40 (CcPostDeferredWrites.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 */

bool __fastcall CcCanIWriteStream(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  int v4; // eax
  bool v5; // r15
  unsigned int v7; // ebx
  KIRQL v9; // r9
  unsigned int v10; // r8d
  unsigned int v11; // ebx
  bool v12; // si
  unsigned int v13; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // edx
  int v18; // eax

  v4 = 0;
  v5 = 0;
  v7 = a2;
  v9 = 0;
  v10 = ((a3 & 0xFFF) != 0) + (a3 >> 12);
  if ( a2 > 0x1000000 )
    v7 = 0x1000000;
  LOBYTE(v4) = (v7 & 0xFFF) != 0;
  v11 = v4 + (v7 >> 12);
  v12 = CcGlobalDirtyPageStatistics + v11 + (unsigned __int64)v10 >= CcGlobalDirtyPageThresholds;
  if ( !a1 )
    goto LABEL_20;
  if ( (a4 & 3) != 0
    || (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 4) != 0
    || CcGlobalDirtyPageStatistics + v11 + (unsigned __int64)v10 >= CcGlobalDirtyPageThresholds )
  {
    if ( (a4 & 1) == 0 )
      v9 = KeAcquireQueuedSpinLock(5uLL);
    v15 = *(_QWORD *)(a1 + 40);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 8);
      if ( v16 )
      {
        v17 = *(_DWORD *)(v16 + 264);
        if ( v17 )
        {
          v18 = *(_DWORD *)(v16 + 112);
          if ( v18 )
            v5 = v11 + v18 > v17;
        }
        if ( *(_QWORD *)(*(_QWORD *)(v16 + 504) + 32LL) <= (unsigned __int64)(unsigned int)CcMaxLazyWritePages
          && (a4 & 4) == 0 )
        {
          v12 = 0;
        }
      }
    }
    if ( (a4 & 1) == 0 )
      KeReleaseQueuedSpinLock(5uLL, v9);
    if ( v5 )
      return 0;
LABEL_20:
    if ( v12 )
      return 0;
  }
  v13 = 450;
  if ( (_BYTE)dword_140381118 )
    v13 = 0x4000;
  return qword_140301440 > (unsigned __int64)v13
      || qword_1403014C0 < (unsigned __int64)(qword_140301530 + 800) && (unsigned __int64)qword_140301440 > 0x50;
}

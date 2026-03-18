/*
 * XREFs of CcScheduleReadAheadEx @ 0x14002E96C
 * Callers:
 *     CcCopyReadEx @ 0x1400A32F0 (CcCopyReadEx.c)
 *     CcAsyncReadPrefetch @ 0x1400FC10C (CcAsyncReadPrefetch.c)
 *     CcAsyncCopyRead @ 0x1400FF7AC (CcAsyncCopyRead.c)
 *     CcScheduleReadAhead @ 0x1401A9138 (CcScheduleReadAhead.c)
 *     CcMdlRead @ 0x1404D83FC (CcMdlRead.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     CcDetermineReadPattern @ 0x14002ED18 (CcDetermineReadPattern.c)
 *     CcCanIWriteStream @ 0x14002F5F0 (CcCanIWriteStream.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     PsGetPagePriorityThread @ 0x140070140 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x140070170 (PsGetIoPriorityThread.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcChargeThreadForReadAhead @ 0x1400E9B28 (CcChargeThreadForReadAhead.c)
 *     CcPostWorkQueue @ 0x140100FF0 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x140101324 (CcAllocateWorkQueueEntry.c)
 *     CcPerfLogScheduleReadAhead @ 0x1401236E4 (CcPerfLogScheduleReadAhead.c)
 */

void __fastcall CcScheduleReadAheadEx(_QWORD *Object, _QWORD *a2, unsigned int a3, __int64 a4)
{
  int *v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // rbx
  int v11; // r15d
  int Pattern; // eax
  __int64 v13; // r8
  int v14; // ebp
  signed __int64 v15; // rdx
  int v16; // r8d
  unsigned int v17; // ecx
  int v18; // edx
  __int64 v19; // rdx
  int PagePriorityThread; // eax
  int v21; // edx
  int v22; // edx
  int v23; // r8d
  __int64 v24; // rbx
  KIRQL v25; // al
  int v26; // edx
  KIRQL v27; // dl
  __int64 v28; // rax
  int v29; // eax
  unsigned __int64 v30; // rcx
  KIRQL v31; // al
  int v32; // [rsp+40h] [rbp-58h]
  __int64 v33; // [rsp+48h] [rbp-50h]
  __int64 v34; // [rsp+48h] [rbp-50h]
  _QWORD v35[9]; // [rsp+50h] [rbp-48h] BYREF
  KIRQL NewIrql; // [rsp+A0h] [rbp+8h]

  v32 = 0;
  v6 = (int *)Object[6];
  v7 = a3;
  v8 = *(_QWORD *)(Object[5] + 8LL);
  if ( !v6 )
    return;
  if ( !v8 )
    return;
  v9 = *(_DWORD *)(v8 + 152);
  if ( (v9 & 1) != 0
    || (v9 & 0x2000) != 0
    || (Object[10] & 0x100000) != 0
    || (int)PsGetIoPriorityThread(KeGetCurrentThread()) < 2
    || !(unsigned __int8)CcCanIWriteStream(Object, 0x1000000LL, 0LL, 4LL)
    || CcQueueThrottle )
  {
    return;
  }
  v10 = *a2 + (unsigned int)v7;
  v11 = ~v6[1] & (v6[1] + v7);
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 10);
  if ( (*v6 & 0x20000) == 0 )
    *v6 |= 0x20000u;
  Pattern = CcDetermineReadPattern(v6, a2);
  v14 = Pattern;
  if ( !Pattern )
  {
    v6[12] = 0;
    *((_QWORD *)v6 + 8) = 0LL;
    *((_QWORD *)v6 + 9) = 0LL;
    goto LABEL_30;
  }
  if ( Pattern <= 0 )
  {
LABEL_30:
    v26 = (int)a2;
LABEL_31:
    if ( (xmmword_140382290 & 0x20000) != 0 )
      CcPerfLogScheduleReadAhead(0, (_DWORD)Object, v26, v7, v11, v14, v32);
    v27 = NewIrql;
    goto LABEL_34;
  }
  if ( Pattern <= 2 )
  {
    v15 = *((_QWORD *)v6 + 8);
    if ( v10 + v7 + (unsigned int)(2 * v11) >= v15 )
    {
      v33 = *((_QWORD *)v6 + 8);
      *((_QWORD *)v6 + 7) = v10 & 0xFFFFFFFFFFFFF000uLL;
      if ( (__int64)(v10 & 0xFFFFFFFFFFFFF000uLL) >= v15 )
        LODWORD(v33) = ~(v11 - 1) & (v11 + v10 - 1);
      ++v6[12];
      v16 = v11;
      v17 = v6[12];
      if ( Pattern == 1 || v17 >= 3 )
        v16 = 2 * v11;
      v13 = (unsigned int)(v33 - v6[14] + v16);
      if ( v17 >= 3 )
      {
        v28 = (unsigned int)v6[23];
        if ( (_DWORD)v28 )
        {
          v30 = v28 * (unsigned __int64)((unsigned int)v7 * v17) / 0x64;
          if ( v30 > 0xFFFFFFFF )
            v30 = 0xFFFFFFFFLL;
          if ( v30 > (unsigned int)v13 )
            v13 = (unsigned int)v30;
        }
      }
      v6[13] = v13;
      goto LABEL_21;
    }
    goto LABEL_30;
  }
  v26 = (int)a2;
  if ( Pattern != 3 )
    goto LABEL_31;
  v34 = 2LL * *a2 - *((_QWORD *)v6 + 4);
  if ( v34 < 0 )
    goto LABEL_31;
  v29 = v34 & 0xFFF;
  LODWORD(v34) = v34 & 0xFFFFF000;
  LODWORD(v7) = v29 + v7;
  *((_QWORD *)v6 + 7) = v34;
  v6[13] = (v7 + 4095) & 0xFFFFF000;
LABEL_21:
  v18 = *v6;
  v32 = 1;
  if ( (*v6 & 0x10000) != 0 )
  {
    if ( (*(_DWORD *)(v8 + 152) & 0x10000000) != 0 )
      CcChargeThreadForReadAhead((_DWORD)Object, v18, v13, v14, a4);
    goto LABEL_30;
  }
  v19 = v18 | 0x10000u;
  *v6 = v19;
  PagePriorityThread = PsGetPagePriorityThread(KeGetCurrentThread(), v19, v13, 0LL);
  *v6 = v21 ^ (v21 ^ (PagePriorityThread << 18)) & 0x1C0000;
  KeReleaseSpinLock((PKSPIN_LOCK)v6 + 10, NewIrql);
  if ( (int)CcAllocateWorkQueueEntry(v35) < 0 )
  {
    v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 10);
    *v6 &= ~0x10000u;
    v27 = v31;
LABEL_34:
    KeReleaseSpinLock((PKSPIN_LOCK)v6 + 10, v27);
    return;
  }
  v24 = v35[0];
  if ( (xmmword_140382290 & 0x20000) != 0 )
    CcPerfLogScheduleReadAhead(v35[0], (_DWORD)Object, (_DWORD)a2, v7, v11, v14, 1);
  if ( (*(_DWORD *)(v8 + 152) & 0x10000000) != 0 )
    CcChargeThreadForReadAhead((_DWORD)Object, v22, v23, v14, a4);
  ObfReferenceObjectWithTag(Object, 0x746C6644u);
  v25 = KeAcquireQueuedSpinLock(5uLL);
  ++*(_DWORD *)(v8 + 4);
  *(_DWORD *)(v8 + 152) |= 0x4000u;
  KeReleaseQueuedSpinLock(5uLL, v25);
  *((_QWORD *)v6 + 14) = v24;
  *(_BYTE *)(v24 + 104) = 1;
  *(_QWORD *)(v24 + 16) = Object;
  CcPostWorkQueue(v24, &CcExpressWorkQueue);
}

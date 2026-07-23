/*
 * XREFs of CcNotifyOfMappedWrite @ 0x14002030C
 * Callers:
 *     MiGatherMappedPages @ 0x14001FD70 (MiGatherMappedPages.c)
 * Callees:
 *     CcCanIWriteStream @ 0x140020620 (CcCanIWriteStream.c)
 *     CcScheduleLazyWriteScan @ 0x14007049C (CcScheduleLazyWriteScan.c)
 *     CcPostWorkQueue @ 0x140071028 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x140071C00 (CcAllocateWorkQueueEntry.c)
 *     CcAcquireByteRangeForWrite @ 0x1400C9C60 (CcAcquireByteRangeForWrite.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall CcNotifyOfMappedWrite(__int64 a1, signed __int64 a2, unsigned int a3)
{
  KIRQL v5; // al
  __int64 v6; // rbx
  KIRQL v7; // si
  int v8; // ecx
  __int64 v9; // rcx
  int v10; // edi
  KIRQL v11; // dl
  int v13; // eax
  ULONG_PTR v14; // rdi
  KIRQL v15; // al
  __int64 *v16; // rdx
  signed __int64 v17; // rax
  ULONG_PTR v18; // rax
  unsigned int v19; // ecx
  bool v20; // zf
  KIRQL v21; // al
  KIRQL v22; // al
  int v23; // [rsp+38h] [rbp-18h]
  __int64 v24; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR v25; // [rsp+90h] [rbp+40h] BYREF
  signed __int64 v26; // [rsp+98h] [rbp+48h]
  unsigned int v27; // [rsp+A0h] [rbp+50h] BYREF
  ULONG_PTR v28; // [rsp+A8h] [rbp+58h] BYREF

  v26 = a2;
  v25 = 0LL;
  v24 = 0LL;
  v5 = KeAcquireQueuedSpinLock(5uLL);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = v5;
  if ( !v6 || (v8 = *(_DWORD *)(v6 + 152), (v8 & 0x100) != 0) )
  {
    v10 = 1;
    goto LABEL_10;
  }
  if ( (v8 & 0x20) != 0 || *(_DWORD *)(v6 + 516) )
    goto LABEL_22;
  if ( !*(_DWORD *)(v6 + 112) )
    goto LABEL_25;
  if ( (*(_DWORD *)((*(_QWORD *)(v6 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x50) & 0x8000) != 0
    || !(unsigned __int8)CcCanIWriteStream(*(_QWORD *)(v6 + 96) & 0xFFFFFFFFFFFFFFF0uLL, 0x1000000LL, 0LL, 1LL) )
  {
    v17 = *(_QWORD *)(v6 + 40);
    if ( v26 > v17 && *(_QWORD *)(v6 + 48) > v17 )
    {
      v13 = *(_DWORD *)(v6 + 112);
      CcPagesYetToWrite += v13;
      *(_DWORD *)(v6 + 192) = v13;
      LODWORD(qword_140322F90) = v13 + qword_140322F90;
      *(_DWORD *)(v6 + 152) |= 0x20u;
      ++*(_DWORD *)(v6 + 112);
      KeReleaseQueuedSpinLock(5uLL, v7);
      if ( (int)CcAllocateWorkQueueEntry(&v25) >= 0 )
      {
        v14 = v25;
        *(_BYTE *)(v25 + 120) = 2;
        *(_QWORD *)(v14 + 16) = v6;
        v15 = KeAcquireQueuedSpinLock(5uLL);
        --*(_DWORD *)(v6 + 112);
        v7 = v15;
        if ( (*(_DWORD *)(v6 + 152) & 0x10000) != 0 )
        {
          v16 = &CcFastTeardownWorkQueue;
          *(_QWORD *)(v6 + 496) = v14 | 1;
        }
        else
        {
          *(_QWORD *)(v6 + 496) = v14;
          v16 = &CcRegularWorkQueue;
        }
        CcPostWorkQueue(v14, v16);
LABEL_22:
        v10 = 0;
        goto LABEL_10;
      }
      v22 = KeAcquireQueuedSpinLock(5uLL);
      *(_DWORD *)(v6 + 152) &= ~0x20u;
      v7 = v22;
      --*(_DWORD *)(v6 + 112);
    }
LABEL_25:
    v10 = 2;
    goto LABEL_10;
  }
  v10 = 0;
  if ( CcCoalescingState )
  {
    ++CcDbgCoalescingFlushDueToMPW;
    LOBYTE(v9) = 1;
    CcScheduleLazyWriteScan(v9, 0LL);
  }
LABEL_10:
  if ( !a3 && v10 == 2 )
    v10 = 1;
  if ( v10 > 1 )
  {
    *(_DWORD *)(v6 + 152) |= 0x400400u;
    ++*(_DWORD *)(v6 + 4);
    ++*(_DWORD *)(v6 + 516);
    KeReleaseQueuedSpinLock(5uLL, v7);
    v18 = v26;
    v19 = a3;
    v20 = a3 == 0;
    while ( 1 )
    {
      v27 = v19;
      v28 = v18;
      if ( v20 || !*(_QWORD *)(v6 + 8) && (*(_DWORD *)(v6 + 152) & 4) == 0 )
        break;
      LOBYTE(v23) = 0;
      if ( !(unsigned __int8)CcAcquireByteRangeForWrite(
                               v6,
                               (unsigned int)&v28,
                               v19,
                               0,
                               (__int64)&v25,
                               (__int64)&v27,
                               (__int64)&v24,
                               v23) )
        break;
      v25 += v27;
      v18 = v25;
      v20 = a3 + (_DWORD)v26 - (_DWORD)v25 == 0;
      v19 = a3 + v26 - v25;
    }
    v21 = KeAcquireQueuedSpinLock(5uLL);
    if ( !*(_DWORD *)(v6 + 4) )
      KeBugCheckEx(0x34u, 0x1098uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(v6 + 152) &= ~0x400000u;
    v11 = v21;
  }
  else
  {
    v11 = v7;
  }
  KeReleaseQueuedSpinLock(5uLL, v11);
  return (unsigned int)v10;
}

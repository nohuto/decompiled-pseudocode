/*
 * XREFs of CcNotifyOfMappedWrite @ 0x1400E3EC4
 * Callers:
 *     MiGatherMappedPages @ 0x1400E37E8 (MiGatherMappedPages.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x140030E38 (CcScheduleLazyWriteScan.c)
 *     CcPostWorkQueue @ 0x14003F5E0 (CcPostWorkQueue.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     CcAcquireByteRangeForWrite @ 0x140075D20 (CcAcquireByteRangeForWrite.c)
 *     CcCanIWriteStream @ 0x1400E4930 (CcCanIWriteStream.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 */

__int64 __fastcall CcNotifyOfMappedWrite(__int64 a1, __int64 a2, unsigned int a3)
{
  KIRQL v5; // al
  __int64 v6; // rdi
  KIRQL v7; // si
  int v8; // edx
  int v9; // r8d
  int v10; // ebx
  unsigned __int64 v11; // rcx
  __int64 v12; // rbx
  bool v13; // bl
  KIRQL v14; // al
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  struct _KPRCB *CurrentPrcb; // r15
  _GENERAL_LOOKASIDE *P; // rsi
  __int64 v20; // rbx
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  KIRQL v25; // al
  KIRQL v26; // al
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 *v29; // rdx
  __int64 v30; // rax
  unsigned int v31; // ecx
  bool v32; // zf
  KIRQL v33; // al
  KIRQL v34; // dl
  unsigned int v36; // [rsp+38h] [rbp-20h]
  __int64 v37[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v38; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v39; // [rsp+A8h] [rbp+50h]
  unsigned int v40; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v41; // [rsp+B8h] [rbp+60h] BYREF

  v39 = a2;
  v37[0] = 0LL;
  v5 = KeAcquireQueuedSpinLock(5uLL);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = v5;
  if ( !v6 || (v8 = *(_DWORD *)(v6 + 152), (v8 & 0x100) != 0) )
  {
    v10 = 1;
    goto LABEL_24;
  }
  if ( (v8 & 0x20) != 0 || *(_DWORD *)(v6 + 516) )
    goto LABEL_22;
  v9 = *(_DWORD *)(v6 + 112);
  if ( !v9 )
  {
LABEL_6:
    v10 = 2;
    goto LABEL_24;
  }
  v11 = *(_QWORD *)(v6 + 96) & 0xFFFFFFFFFFFFFFF0uLL;
  v12 = *(_QWORD *)(v11 + 0x18);
  if ( (*(_DWORD *)(v11 + 0x50) & 0x8000) != 0 )
  {
    *(_DWORD *)(v6 + 152) = v8 | 0x20;
    *(_DWORD *)(v6 + 112) = v9 + 1;
    KeReleaseQueuedSpinLock(5uLL, v5);
    v13 = (*(_BYTE *)(v12 + 4) & 0x20) != 0;
    v14 = KeAcquireQueuedSpinLock(5uLL);
    v15 = *(_QWORD *)(v6 + 96);
    v7 = v14;
    *(_DWORD *)(v6 + 152) &= ~0x20u;
    v11 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
    --*(_DWORD *)(v6 + 112);
    if ( v13 )
      goto LABEL_12;
  }
  if ( !(unsigned __int8)CcCanIWriteStream(v11, 0x1000000LL, 0LL, 1LL) )
  {
LABEL_12:
    v16 = *(_QWORD *)(v6 + 40);
    if ( v39 <= v16 || *(_QWORD *)(v6 + 48) <= v16 )
      goto LABEL_6;
    v17 = *(_DWORD *)(v6 + 112);
    CcPagesYetToWrite += v17;
    *(_DWORD *)(v6 + 192) = v17;
    LODWORD(qword_14034DDF0) = v17 + qword_14034DDF0;
    *(_DWORD *)(v6 + 152) |= 0x20u;
    ++*(_DWORD *)(v6 + 112);
    KeReleaseQueuedSpinLock(5uLL, v7);
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[6].P;
    ++P->TotalAllocates;
    v20 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( !v20 )
    {
      ++P->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[6].L;
      ++L->TotalAllocates;
      v20 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( !v20 )
      {
        Size = L->Size;
        Tag = L->Tag;
        Type = (unsigned int)L->Type;
        ++L->AllocateMisses;
        v20 = ((__int64 (__fastcall *)(__int64, __int64, __int64))L->AllocateEx)(Type, Size, Tag);
        if ( !v20 )
        {
          v25 = KeAcquireQueuedSpinLock(5uLL);
          *(_DWORD *)(v6 + 152) &= ~0x20u;
          v7 = v25;
          --*(_DWORD *)(v6 + 112);
          goto LABEL_6;
        }
      }
    }
    *(_DWORD *)v20 = CurrentPrcb->Number;
    *(_BYTE *)(v20 + 104) = 2;
    *(_QWORD *)(v20 + 16) = v6;
    v26 = KeAcquireQueuedSpinLock(5uLL);
    --*(_DWORD *)(v6 + 112);
    v7 = v26;
    if ( (*(_DWORD *)(v6 + 152) & 0x10000) != 0 )
    {
      v29 = &CcFastTeardownWorkQueue;
      *(_QWORD *)(v6 + 496) = v20 | 1;
    }
    else
    {
      *(_QWORD *)(v6 + 496) = v20;
      v29 = &CcRegularWorkQueue;
    }
    CcPostWorkQueue(v20, (__int64)v29, v27, v28);
LABEL_22:
    v10 = 0;
    goto LABEL_24;
  }
  v10 = 0;
  if ( CcCoalescingState )
  {
    ++CcDbgCoalescingFlushDueToMPW;
    CcScheduleLazyWriteScan(1, 0);
  }
LABEL_24:
  if ( !a3 && v10 == 2 )
    v10 = 1;
  if ( v10 <= 1 )
  {
    v34 = v7;
  }
  else
  {
    *(_DWORD *)(v6 + 152) |= 0x400400u;
    ++*(_DWORD *)(v6 + 4);
    ++*(_DWORD *)(v6 + 516);
    KeReleaseQueuedSpinLock(5uLL, v7);
    v30 = v39;
    v31 = a3;
    v32 = a3 == 0;
    while ( 1 )
    {
      v40 = v31;
      v41 = v30;
      if ( v32 || !*(_QWORD *)(v6 + 8) && (*(_DWORD *)(v6 + 152) & 4) == 0 )
        break;
      LOBYTE(v36) = 0;
      if ( !CcAcquireByteRangeForWrite(v6, &v41, v31, 0LL, &v38, &v40, v37, v36) )
        break;
      v38 += v40;
      v30 = v38;
      v32 = a3 + (_DWORD)v39 - (_DWORD)v38 == 0;
      v31 = a3 + v39 - v38;
    }
    v33 = KeAcquireQueuedSpinLock(5uLL);
    if ( !*(_DWORD *)(v6 + 4) )
      KeBugCheckEx(0x34u, 0x108EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(v6 + 152) &= ~0x400000u;
    v34 = v33;
  }
  KeReleaseQueuedSpinLock(5uLL, v34);
  return (unsigned int)v10;
}

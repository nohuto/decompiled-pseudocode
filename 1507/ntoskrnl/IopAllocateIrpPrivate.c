/*
 * XREFs of IopAllocateIrpPrivate @ 0x1400480F0
 * Callers:
 *     IopAllocateIrpWithExtension @ 0x140006730 (IopAllocateIrpWithExtension.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140195A80 (memset.c)
 *     IopInitActivityIdIrp @ 0x1401F2680 (IopInitActivityIdIrp.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

_SLIST_ENTRY *__fastcall IopAllocateIrpPrivate(__int64 a1, char a2, char a3)
{
  char v4; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int *v6; // rcx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  PSLIST_ENTRY v9; // rbx
  unsigned __int16 v10; // bp
  __int16 v11; // bp
  __int64 v12; // r13
  _GENERAL_LOOKASIDE *P; // rdi
  char v14; // di
  _SLIST_ENTRY *result; // rax
  char v16; // di
  _SLIST_ENTRY **v17; // rcx
  char v18; // [rsp+80h] [rbp+8h]
  char v19; // [rsp+88h] [rbp+10h]

  v18 = 0;
  v4 = a2;
  if ( a1 && (*(_DWORD *)(a1 + 48) & 0x8000000) != 0 )
  {
    v4 = a2 + 1;
    v18 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (IopIrpStackProfilerFlags & 3) != 0 && (IopIrpStackProfilerFlags & 4) != 0 && v4 < 20 )
  {
    v6 = &CurrentPrcb->MxCsr + v4;
    ++v6[6432];
    ++CurrentPrcb->IoIrpStackProfilerCurrent.TotalIrps;
    if ( v6[6432] - v6[6453] > IopIrpStackProfilerMinSizeThreshold
      && CurrentPrcb->IoIrpStackProfilerCurrent.TotalIrps - CurrentPrcb->IoIrpStackProfilerPrevious.TotalIrps > IopIrpStackProfilerSampleSize )
    {
      _m_prefetchw(&IopIrpStackProfilerFlags);
      v7 = IopIrpStackProfilerFlags;
      do
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange(&IopIrpStackProfilerFlags, v7 & 0xFFFFFFFB, v7);
      }
      while ( v8 != v7 );
      if ( (v7 & 4) != 0 )
        KiInsertQueueDpc((unsigned int)&IopIrpStackProfilerDpc, 0, 0, 0, 0);
    }
  }
  v9 = 0LL;
  v19 = 0;
  v10 = 72 * v4 + 208;
  if ( v4 <= (char)IopLargeIrpStackLocations && (!a3 || CurrentPrcb->LookasideIrpFloat > 0) )
  {
    v19 = 4;
    if ( v4 != 1 )
    {
      if ( v4 > (char)IopMediumIrpStackLocations )
      {
        LODWORD(v9) = 2;
        v11 = 9 * (char)IopLargeIrpStackLocations;
      }
      else
      {
        LODWORD(v9) = 1;
        v11 = 9 * (char)IopMediumIrpStackLocations;
      }
      v10 = 8 * v11 + 208;
    }
    v12 = (int)v9;
    P = CurrentPrcb->PPLookasideList[(int)v9].P;
    ++P->TotalAllocates;
    v9 = RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( !v9 )
    {
      ++P->AllocateMisses;
      P = CurrentPrcb->PPLookasideList[v12].L;
      ++P->TotalAllocates;
      v9 = RtlpInterlockedPopEntrySList(&P->ListHead);
      if ( !v9 )
        ++P->AllocateMisses;
    }
    if ( (IopIrpStackProfilerFlags & 3) != 0 && v9 )
    {
      if ( *((_QWORD *)&v9[3].Next + 1) < (unsigned __int64)(unsigned __int16)(72 * v4 + 208) )
      {
        ++P->TotalFrees;
        ExFreePoolWithTag(v9, 0);
        v14 = 0;
        goto LABEL_29;
      }
      v10 = *((_WORD *)&v9[3].Next + 4);
    }
  }
  v14 = 0;
  if ( !v9 )
  {
LABEL_29:
    if ( a3 )
      result = (_SLIST_ENTRY *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v10, 0x20707249u);
    else
      result = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x20707249u);
    v9 = result;
    if ( !result )
      return result;
    goto LABEL_38;
  }
  if ( a3 && IopIrpCreditsEnabled > 1 )
  {
    _InterlockedDecrement(&CurrentPrcb->LookasideIrpFloat);
    v14 = 8;
  }
  a3 = 0;
LABEL_38:
  memset(v9, 0, v10);
  v16 = v19 | v14;
  LOWORD(v9->Next) = 6;
  BYTE2(v9[4].Next) = v4;
  BYTE3(v9[4].Next) = v4 + 1;
  WORD1(v9->Next) = v10;
  BYTE6(v9[4].Next) = KeGetCurrentThread()->ApcStateIndex;
  *((_QWORD *)&v9[2].Next + 1) = v9 + 2;
  v9[2].Next = v9 + 2;
  v17 = &v9[4 * v4 + 13].Next + v4;
  *((_QWORD *)&v9[11].Next + 1) = v17;
  WORD2(v9->Next) = CurrentPrcb->Number;
  HIBYTE(v9[4].Next) = v16;
  if ( a3 )
    HIBYTE(v9[4].Next) = v16 | 1;
  if ( v18 )
  {
    --BYTE3(v9[4].Next);
    --BYTE2(v9[4].Next);
    *((_QWORD *)&v9[11].Next + 1) = v17 - 9;
    *((_QWORD *)&v9[12].Next + 1) = v17 - 9;
    if ( (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0 )
      IopInitActivityIdIrp(v9);
  }
  return v9;
}

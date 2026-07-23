/*
 * XREFs of IoMakeAssociatedIrpPriv @ 0x140118234
 * Callers:
 *     IoMakeAssociatedIrpEx @ 0x14011822C (IoMakeAssociatedIrpEx.c)
 *     IoMakeAssociatedIrp @ 0x1401F60AC (IoMakeAssociatedIrp.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140195A80 (memset.c)
 *     IoSetActivityIdIrp @ 0x1401F669C (IoSetActivityIdIrp.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

_SLIST_ENTRY *__fastcall IoMakeAssociatedIrpPriv(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r12
  char v4; // bp
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int16 v9; // si
  int v10; // eax
  __int16 v11; // si
  __int64 v12; // r13
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v14; // rbx
  _SLIST_ENTRY *result; // rax
  char *v16; // rdx
  __int16 Number; // ax
  struct _KPRCB *v18; // [rsp+20h] [rbp-48h]
  char v19; // [rsp+80h] [rbp+18h]
  char v20; // [rsp+88h] [rbp+20h]

  v3 = 0LL;
  v20 = 0;
  v4 = a3;
  if ( (IopFunctionPointerMask & 4) != 0
    && (IopIrpExtensionStatus & 1) != 0
    && (v6 = *(_QWORD *)(a1 + 200), *(char *)(a1 + 71) >= 0)
    && v6
    && (*(_BYTE *)(v6 + 2) & 1) != 0
    || a2 && (*(_DWORD *)(a2 + 48) & 0x8000000) != 0 )
  {
    v4 = a3 + 1;
    v20 = 1;
    if ( (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 200);
      if ( *(char *)(a1 + 71) >= 0 && v7 && (*(_BYTE *)(v7 + 2) & 1) != 0 )
        v3 = *(_QWORD *)(a1 + 200);
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v19 = 0;
  v18 = CurrentPrcb;
  v9 = 72 * v4 + 208;
  if ( v4 > (char)IopLargeIrpStackLocations )
    goto LABEL_30;
  v19 = 4;
  if ( v4 == 1 )
  {
    v10 = 0;
  }
  else
  {
    if ( v4 > (char)IopMediumIrpStackLocations )
    {
      v10 = 2;
      v11 = 9 * (char)IopLargeIrpStackLocations;
    }
    else
    {
      v11 = 9 * (char)IopMediumIrpStackLocations;
      v10 = 1;
    }
    v9 = 8 * v11 + 208;
  }
  v12 = v10;
  P = CurrentPrcb->PPLookasideList[v10].P;
  ++P->TotalAllocates;
  v14 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v14 )
  {
    ++P->AllocateMisses;
    P = v18->PPLookasideList[v12].L;
    ++P->TotalAllocates;
    v14 = RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( !v14 )
      ++P->AllocateMisses;
  }
  if ( (IopIrpStackProfilerFlags & 3) != 0 )
  {
    if ( !v14 )
      goto LABEL_30;
    if ( *((_QWORD *)&v14[3].Next + 1) < (unsigned __int64)(unsigned __int16)(72 * v4 + 208) )
    {
      ++P->TotalFrees;
      ExFreePoolWithTag(v14, 0);
      goto LABEL_30;
    }
    v9 = *((_WORD *)&v14[3].Next + 4);
  }
  if ( !v14 )
  {
LABEL_30:
    result = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x20707249u);
    v14 = result;
    if ( !result )
      return result;
  }
  memset(v14, 0, v9);
  BYTE2(v14[4].Next) = v4;
  LOWORD(v14->Next) = 6;
  BYTE3(v14[4].Next) = v4 + 1;
  WORD1(v14->Next) = v9;
  BYTE6(v14[4].Next) = KeGetCurrentThread()->ApcStateIndex;
  *((_QWORD *)&v14[2].Next + 1) = v14 + 2;
  v14[2].Next = v14 + 2;
  v16 = (char *)&v14[13] + 72 * v4;
  *((_QWORD *)&v14[11].Next + 1) = v16;
  Number = v18->Number;
  LODWORD(v14[1].Next) |= 8u;
  WORD2(v14->Next) = Number;
  LODWORD(v14[1].Next) |= *(_DWORD *)(a1 + 16) & 0xE0002;
  HIBYTE(v14[4].Next) |= v19;
  *((_QWORD *)&v14[9].Next + 1) = *(_QWORD *)(a1 + 152);
  *((_QWORD *)&v14[1].Next + 1) = a1;
  if ( v20 )
  {
    --BYTE3(v14[4].Next);
    --BYTE2(v14[4].Next);
    *((_QWORD *)&v14[11].Next + 1) = v16 - 72;
    *((_QWORD *)&v14[12].Next + 1) = v16 - 72;
  }
  if ( v3 )
    IoSetActivityIdIrp(v14, v3 + 16);
  return v14;
}

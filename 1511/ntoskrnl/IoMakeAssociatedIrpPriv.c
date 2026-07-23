/*
 * XREFs of IoMakeAssociatedIrpPriv @ 0x140100098
 * Callers:
 *     IoMakeAssociatedIrpEx @ 0x140100024 (IoMakeAssociatedIrpEx.c)
 *     IoMakeAssociatedIrp @ 0x14012DAC8 (IoMakeAssociatedIrp.c)
 * Callees:
 *     IopIrpHasExtensionType @ 0x140101C04 (IopIrpHasExtensionType.c)
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     IoSetActivityIdIrp @ 0x1401BB3D4 (IoSetActivityIdIrp.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

_SLIST_ENTRY *__fastcall IoMakeAssociatedIrpPriv(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r12
  __int64 v5; // r10
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int16 v8; // si
  int v9; // eax
  __int16 v10; // si
  __int64 v11; // r15
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v13; // rbx
  char *v14; // rdx
  __int16 Number; // ax
  _SLIST_ENTRY *result; // rax
  struct _KPRCB *v17; // [rsp+20h] [rbp-48h]
  char v18; // [rsp+80h] [rbp+18h]
  char v19; // [rsp+88h] [rbp+20h]

  v3 = 0LL;
  v5 = a2;
  v19 = 0;
  if ( (IopIrpExtensionStatus & 1) != 0
    && (IopFunctionPointerMask & 4) != 0
    && (unsigned __int8)IopIrpHasExtensionType(a1, 0LL)
    || v5 && (*(_DWORD *)(v5 + 48) & 0x8000000) != 0 )
  {
    ++a3;
    v19 = 1;
    if ( (IopIrpExtensionStatus & 1) != 0 && (IopFunctionPointerMask & 4) != 0 )
    {
      if ( (unsigned __int8)IopIrpHasExtensionType(a1, 0LL) )
        v3 = *(_QWORD *)(a1 + 200);
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v18 = 0;
  v17 = CurrentPrcb;
  v8 = 72 * a3 + 208;
  if ( a3 > (char)IopLargeIrpStackLocations )
    goto LABEL_25;
  v18 = 4;
  if ( a3 == 1 )
  {
    v9 = 0;
  }
  else
  {
    if ( a3 <= (char)IopMediumIrpStackLocations )
    {
      v10 = 9 * (char)IopMediumIrpStackLocations;
      v9 = 1;
    }
    else
    {
      v9 = 2;
      v10 = 9 * (char)IopLargeIrpStackLocations;
    }
    v8 = 8 * v10 + 208;
  }
  v11 = v9;
  P = CurrentPrcb->PPLookasideList[v9].P;
  ++P->TotalAllocates;
  v13 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v13 )
  {
    ++P->AllocateMisses;
    P = v17->PPLookasideList[v11].L;
    ++P->TotalAllocates;
    v13 = RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( !v13 )
      ++P->AllocateMisses;
  }
  if ( (IopIrpStackProfilerFlags & 3) != 0 )
  {
    if ( !v13 )
      goto LABEL_25;
    if ( *((_QWORD *)&v13[3].Next + 1) >= (unsigned __int64)(unsigned __int16)(72 * a3 + 208) )
    {
      v8 = *((_WORD *)&v13[3].Next + 4);
      goto LABEL_15;
    }
    ++P->TotalFrees;
    ExFreePoolWithTag(v13, 0);
LABEL_25:
    result = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x20707249u);
    v13 = result;
    if ( !result )
      return result;
    goto LABEL_16;
  }
LABEL_15:
  if ( !v13 )
    goto LABEL_25;
LABEL_16:
  memset(v13, 0, v8);
  BYTE2(v13[4].Next) = a3;
  LOWORD(v13->Next) = 6;
  BYTE3(v13[4].Next) = a3 + 1;
  WORD1(v13->Next) = v8;
  BYTE6(v13[4].Next) = KeGetCurrentThread()->ApcStateIndex;
  *((_QWORD *)&v13[2].Next + 1) = v13 + 2;
  v13[2].Next = v13 + 2;
  v14 = (char *)&v13[13] + 72 * a3;
  *((_QWORD *)&v13[11].Next + 1) = v14;
  Number = v17->Number;
  LODWORD(v13[1].Next) |= 8u;
  WORD2(v13->Next) = Number;
  LODWORD(v13[1].Next) |= *(_DWORD *)(a1 + 16) & 0xE0002;
  HIBYTE(v13[4].Next) |= v18;
  *((_QWORD *)&v13[9].Next + 1) = *(_QWORD *)(a1 + 152);
  *((_QWORD *)&v13[1].Next + 1) = a1;
  if ( v19 )
  {
    --BYTE3(v13[4].Next);
    --BYTE2(v13[4].Next);
    *((_QWORD *)&v13[11].Next + 1) = v14 - 72;
    *((_QWORD *)&v13[12].Next + 1) = v14 - 72;
  }
  if ( v3 )
    IoSetActivityIdIrp(v13, v3 + 16);
  return v13;
}

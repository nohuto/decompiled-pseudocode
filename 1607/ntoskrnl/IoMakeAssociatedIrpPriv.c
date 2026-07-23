/*
 * XREFs of IoMakeAssociatedIrpPriv @ 0x14008D7D8
 * Callers:
 *     IoMakeAssociatedIrpEx @ 0x14008D7D0 (IoMakeAssociatedIrpEx.c)
 *     IoMakeAssociatedIrp @ 0x140135BD0 (IoMakeAssociatedIrp.c)
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x14008DD68 (IopSetDiskIoAttributionExtension.c)
 *     IopIrpHasExtensionType @ 0x1400CF278 (IopIrpHasExtensionType.c)
 *     IoSetActivityIdIrp @ 0x14011253C (IoSetActivityIdIrp.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

_SLIST_ENTRY *__fastcall IoMakeAssociatedIrpPriv(__int64 a1, __int64 a2, char a3)
{
  unsigned int v5; // r11d
  __int64 v6; // r10
  struct _KPRCB *CurrentPrcb; // r12
  unsigned __int16 v8; // si
  int v9; // eax
  __int16 v10; // si
  __int64 v11; // r13
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v13; // rbx
  _SLIST_ENTRY **v14; // rdx
  __int16 Number; // ax
  _SLIST_ENTRY *result; // rax
  char v17; // [rsp+80h] [rbp+18h]
  char v18; // [rsp+88h] [rbp+20h]

  v18 = 0;
  v5 = 6;
  if ( (IopIrpExtensionStatus & 1) != 0
    && (IopFunctionPointerMask & 4) != 0
    && (unsigned __int8)IopIrpHasExtensionType(a1, 0LL)
    || (unsigned __int8)IopIrpHasExtensionType(a1, v5)
    || v6 && (*(_DWORD *)(v6 + 48) & 0x8000000) != 0 )
  {
    ++a3;
    v18 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v17 = 0;
  v8 = 72 * a3 + 208;
  if ( a3 > (char)IopLargeIrpStackLocations )
    goto LABEL_26;
  v17 = 4;
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
    P = CurrentPrcb->PPLookasideList[v11].L;
    ++P->TotalAllocates;
    v13 = RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( !v13 )
      ++P->AllocateMisses;
  }
  if ( (IopIrpStackProfilerFlags & 3) != 0 )
  {
    if ( !v13 )
      goto LABEL_26;
    if ( *((_QWORD *)&v13[3].Next + 1) >= (unsigned __int64)(unsigned __int16)(72 * a3 + 208) )
    {
      v8 = *((_WORD *)&v13[3].Next + 4);
      goto LABEL_16;
    }
    ++P->TotalFrees;
    ExFreePoolWithTag(v13, 0);
LABEL_26:
    result = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x20707249u);
    v13 = result;
    if ( !result )
      return result;
    goto LABEL_17;
  }
LABEL_16:
  if ( !v13 )
    goto LABEL_26;
LABEL_17:
  memset(v13, 0, v8);
  BYTE2(v13[4].Next) = a3;
  LOWORD(v13->Next) = 6;
  BYTE3(v13[4].Next) = a3 + 1;
  WORD1(v13->Next) = v8;
  BYTE6(v13[4].Next) = KeGetCurrentThread()->ApcStateIndex;
  *((_QWORD *)&v13[2].Next + 1) = v13 + 2;
  v13[2].Next = v13 + 2;
  v14 = &v13[4 * a3 + 13].Next + a3;
  *((_QWORD *)&v13[11].Next + 1) = v14;
  Number = CurrentPrcb->Number;
  LODWORD(v13[1].Next) |= 8u;
  WORD2(v13->Next) = Number;
  LODWORD(v13[1].Next) |= *(_DWORD *)(a1 + 16) & 0xE0002;
  HIBYTE(v13[4].Next) |= v17;
  *((_QWORD *)&v13[9].Next + 1) = *(_QWORD *)(a1 + 152);
  *((_QWORD *)&v13[1].Next + 1) = a1;
  if ( v18 )
  {
    --BYTE3(v13[4].Next);
    --BYTE2(v13[4].Next);
    *((_QWORD *)&v13[11].Next + 1) = v14 - 9;
    *((_QWORD *)&v13[12].Next + 1) = v14 - 9;
  }
  if ( (IopIrpExtensionStatus & 1) != 0
    && (IopFunctionPointerMask & 4) != 0
    && (unsigned __int8)IopIrpHasExtensionType(a1, 0LL) )
  {
    IoSetActivityIdIrp(v13, *(_QWORD *)(a1 + 200) + 24LL);
  }
  if ( (unsigned __int8)IopIrpHasExtensionType(a1, 6LL) )
    IopSetDiskIoAttributionExtension(v13, *(_QWORD *)(*(_QWORD *)(a1 + 200) + 16LL));
  return v13;
}

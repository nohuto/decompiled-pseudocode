/*
 * XREFs of IrqArbCommitAllocation @ 0x1C006C260
 * Callers:
 *     <none>
 * Callees:
 *     IrqArbpSetDeviceProperties @ 0x1C006B1D4 (IrqArbpSetDeviceProperties.c)
 *     IcCopyInputStateToDeviceState @ 0x1C006C134 (IcCopyInputStateToDeviceState.c)
 *     PcisuppIsPciDevice @ 0x1C006C42C (PcisuppIsPciDevice.c)
 *     PcisuppWriteIntLine @ 0x1C006C528 (PcisuppWriteIntLine.c)
 *     LinkNodeClearPossibleData @ 0x1C006C59C (LinkNodeClearPossibleData.c)
 *     IcCopyData @ 0x1C006C670 (IcCopyData.c)
 *     ProcessorCopyData @ 0x1C006C760 (ProcessorCopyData.c)
 *     ProcessorpClearData @ 0x1C006CB00 (ProcessorpClearData.c)
 *     IcClearPossibleData @ 0x1C006CBF0 (IcClearPossibleData.c)
 *     IcRemapInputs @ 0x1C006D098 (IcRemapInputs.c)
 *     LinkNodeCopyData @ 0x1C006DA58 (LinkNodeCopyData.c)
 *     IrtRemapNewMsiAssignments @ 0x1C006DDEC (IrtRemapNewMsiAssignments.c)
 *     LinkNodeWriteStateToHardware @ 0x1C006DEF0 (LinkNodeWriteStateToHardware.c)
 *     IrtClearDeletedMsiMappings @ 0x1C006DF58 (IrtClearDeletedMsiMappings.c)
 */

__int64 __fastcall IrqArbCommitAllocation(__int64 a1)
{
  _DWORD *UserData; // rax
  int IsPciDevice; // ebx
  struct _RTL_RANGE *v4; // rcx
  _DWORD *v5; // rsi
  __int64 v6; // rdx
  struct _RTL_RANGE_LIST *v7; // rcx
  struct _RANGE_LIST_ITERATOR v9; // [rsp+20h] [rbp-40h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+40h] [rbp-20h] BYREF
  PRTL_RANGE Range; // [rsp+80h] [rbp+20h] BYREF
  PRTL_RANGE v12; // [rsp+88h] [rbp+28h] BYREF

  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 48), &Iterator, &Range);
  while ( Range )
  {
    UserData = Range->UserData;
    if ( UserData )
      UserData[1] &= ~8u;
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  IrtClearDeletedMsiMappings(a1);
  IsPciDevice = ProcessorCopyData(0LL);
  if ( IsPciDevice < 0 )
    goto LABEL_28;
  IsPciDevice = IcRemapInputs();
  if ( IsPciDevice < 0 )
    goto LABEL_28;
  IcCopyInputStateToDeviceState(a1, 1);
  IsPciDevice = IcCopyData(0LL);
  if ( IsPciDevice < 0 )
    goto LABEL_28;
  ProcessorpClearData(1LL);
  IcClearPossibleData();
  IsPciDevice = LinkNodeWriteStateToHardware();
  if ( IsPciDevice < 0 )
    goto LABEL_28;
  IsPciDevice = LinkNodeCopyData(0LL);
  if ( IsPciDevice < 0 )
    goto LABEL_28;
  LinkNodeClearPossibleData();
  IrtRemapNewMsiAssignments(a1);
  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 48), &v9, &v12);
  while ( 1 )
  {
    v4 = v12;
    if ( !v12 )
      break;
    if ( v12->Owner && (v12->Attributes & 1) == 0 )
    {
      v5 = v12->UserData;
      if ( !v5 || (v5[1] & 0x10) == 0 )
      {
        IsPciDevice = PcisuppIsPciDevice(v12->Owner, &Range);
        if ( IsPciDevice >= 0 && (_BYTE)Range )
        {
          if ( v12->Start <= 0xFF )
            LOBYTE(v6) = v12->Start;
          else
            LOBYTE(v6) = 0;
          PcisuppWriteIntLine(v12->Owner, v6);
        }
        v4 = v12;
      }
      if ( v5 )
      {
        if ( (v5[1] & 1) != 0 )
        {
          Iterator = v9;
          IsPciDevice = IrqArbpSetDeviceProperties(v4, (__int128 *)&Iterator);
          if ( IsPciDevice < 0 )
            goto LABEL_28;
        }
      }
    }
    RtlGetNextRange(&v9, &v12, 1u);
  }
  v7 = *(struct _RTL_RANGE_LIST **)(a1 + 40);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = v7;
  RtlFreeRangeList(v7);
  ProcessorpClearData(1LL);
  IcClearPossibleData();
  LinkNodeClearPossibleData();
  if ( IsPciDevice < 0 )
LABEL_28:
    byte_1C0059240 = 0;
  return (unsigned int)IsPciDevice;
}

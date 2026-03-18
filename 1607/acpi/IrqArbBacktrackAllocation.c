/*
 * XREFs of IrqArbBacktrackAllocation @ 0x1C00A2190
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Dq @ 0x1C00222EC (WPP_RECORDER_SF_Dq.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C00272A4 (ProcessorDeleteDeviceIdtAssignment.c)
 *     RtlDeleteRange_0 @ 0x1C002BC7A (RtlDeleteRange_0.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C0089780 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqArbGsivFromIrq @ 0x1C008A05C (IrqArbGsivFromIrq.c)
 *     IcRemovePossibleReference @ 0x1C00908EC (IcRemovePossibleReference.c)
 */

NTSTATUS __fastcall IrqArbBacktrackAllocation(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // esi
  _QWORD *UserData; // rax
  __int128 v7; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v8; // [rsp+54h] [rbp-34h]
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+60h] [rbp-28h] BYREF
  PRTL_RANGE Range; // [rsp+90h] [rbp+8h] BYREF

  WPP_RECORDER_SF_Dq(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)a2, *((_QWORD *)a2 + 4), 18);
  v4 = IrqArbGsivFromIrq(*a2);
  IcRemovePossibleReference(v4, (a2[16] & 2) != 0);
  if ( (int)ProcessorGetDeviceIdtAssignment(*(PVOID *)(*((_QWORD *)a2 + 4) + 32LL), v4, 1, &v7) >= 0 )
    ProcessorDeleteDeviceIdtAssignment(*(PVOID *)(*((_QWORD *)a2 + 4) + 32LL), v4, v8, 1);
  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 48), &Iterator, &Range);
  while ( Range )
  {
    if ( *(PVOID *)(*((_QWORD *)a2 + 4) + 32LL) == Range->Owner
      && *((_QWORD *)a2 + 1) == Range->End
      && *(_QWORD *)a2 == Range->Start )
    {
      UserData = Range->UserData;
      if ( *((_DWORD *)UserData + 2) == 2 )
        --*(_DWORD *)(UserData[2] + 28LL);
      return RtlDeleteRange_0(
               *(PRTL_RANGE_LIST *)(a1 + 48),
               *(_QWORD *)a2,
               *((_QWORD *)a2 + 1),
               *(PVOID *)(*((_QWORD *)a2 + 4) + 32LL));
    }
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return RtlDeleteRange_0(
           *(PRTL_RANGE_LIST *)(a1 + 48),
           *(_QWORD *)a2,
           *((_QWORD *)a2 + 1),
           *(PVOID *)(*((_QWORD *)a2 + 4) + 32LL));
}

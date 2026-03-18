/*
 * XREFs of IrqArbBacktrackAllocation @ 0x1C0080570
 * Callers:
 *     <none>
 * Callees:
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C00198FC (ProcessorDeleteDeviceIdtAssignment.c)
 *     RtlDeleteRange_0 @ 0x1C002363A (RtlDeleteRange_0.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C006BA60 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqArbGsivFromIrq @ 0x1C006C23C (IrqArbGsivFromIrq.c)
 *     IcRemovePossibleReference @ 0x1C006E80C (IcRemovePossibleReference.c)
 */

NTSTATUS __fastcall IrqArbBacktrackAllocation(__int64 a1, ULONGLONG *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // esi
  _QWORD *UserData; // rax
  __int128 v8; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+34h] [rbp-34h]
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+40h] [rbp-28h] BYREF
  PRTL_RANGE Range; // [rsp+70h] [rbp+8h] BYREF

  v5 = IrqArbGsivFromIrq(*(unsigned int *)a2);
  IcRemovePossibleReference(v5, (*(_BYTE *)(v4 + 64) & 2) != 0);
  if ( (int)ProcessorGetDeviceIdtAssignment(*(PVOID *)(a2[4] + 32), v5, 1, &v8) >= 0 )
    ProcessorDeleteDeviceIdtAssignment(*(PVOID *)(a2[4] + 32), v5, v9, 1);
  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 48), &Iterator, &Range);
  while ( Range )
  {
    if ( *(PVOID *)(a2[4] + 32) == Range->Owner && a2[1] == Range->End && *a2 == Range->Start )
    {
      UserData = Range->UserData;
      if ( *((_DWORD *)UserData + 2) == 2 )
        --*(_DWORD *)(UserData[2] + 28LL);
      return RtlDeleteRange_0(*(PRTL_RANGE_LIST *)(a1 + 48), *a2, a2[1], *(PVOID *)(a2[4] + 32));
    }
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return RtlDeleteRange_0(*(PRTL_RANGE_LIST *)(a1 + 48), *a2, a2[1], *(PVOID *)(a2[4] + 32));
}

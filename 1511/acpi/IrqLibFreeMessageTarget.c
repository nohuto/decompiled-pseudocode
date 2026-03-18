/*
 * XREFs of IrqLibFreeMessageTarget @ 0x1C0080040
 * Callers:
 *     <none>
 * Callees:
 *     IrqLibReleaseArbiterLock @ 0x1C0019894 (IrqLibReleaseArbiterLock.c)
 *     IrqLibAcquireArbiterLock @ 0x1C00198A8 (IrqLibAcquireArbiterLock.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C0019B44 (ProcessorDeleteDeviceIdtAssignment.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C0069590 (ProcessorGetDeviceIdtAssignment.c)
 *     ProcessorIdtEntryToGsiv @ 0x1C006CA4C (ProcessorIdtEntryToGsiv.c)
 */

LONG __fastcall IrqLibFreeMessageTarget(PVOID Owner, int a2, __int64 a3)
{
  LONG result; // eax
  struct _PROCESSOR_NUMBER v7; // r8d
  unsigned int v8; // ebx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+34h] [rbp-14h]
  ULONGLONG End; // [rsp+68h] [rbp+20h] BYREF

  result = KeGetCurrentIrql();
  if ( !(_BYTE)result )
  {
    IrqLibAcquireArbiterLock(1);
    if ( (int)ProcessorIdtEntryToGsiv(a2, a3, v7, &End) >= 0 )
    {
      v8 = End;
      if ( (int)ProcessorGetDeviceIdtAssignment(Owner, End, 0, &v9) >= 0 )
      {
        ProcessorDeleteDeviceIdtAssignment(Owner, v8, v10, 0);
        RtlDeleteRange(RangeList, v8, v8, Owner);
      }
    }
    return IrqLibReleaseArbiterLock();
  }
  return result;
}

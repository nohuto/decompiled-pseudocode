/*
 * XREFs of IrqArbGetDeviceIrql @ 0x1C006AB04
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0069680 (IrqArbAddAllocation.c)
 *     IrqTranslatepQueryDeviceIrql @ 0x1C006AB60 (IrqTranslatepQueryDeviceIrql.c)
 *     IcSetPossibleInput @ 0x1C006BB74 (IcSetPossibleInput.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C006D578 (AcpiIrqLibSetupSciInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C0069590 (ProcessorGetDeviceIdtAssignment.c)
 */

__int64 __fastcall IrqArbGetDeviceIrql(_DWORD *a1, _BYTE *a2)
{
  unsigned int v3; // ebx
  _OWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1[1];
  if ( !*a1 )
  {
    if ( (unsigned __int8)HalPrivateDispatchTable[62](0LL, (unsigned int)a1[14]) )
    {
      memset(v6, 0, sizeof(v6));
      if ( (int)((__int64 (__fastcall **)(_DWORD *, __int64))HalPrivateDispatchTable)[59](a1, (__int64)&v7) >= 0
        && (int)ProcessorGetDeviceIdtAssignment(0LL, v7, 0, v6) >= 0 )
      {
        v3 = DWORD1(v6[1]);
      }
    }
  }
  *a2 = HalConvertDeviceIdtToIrql(v3);
  return 0LL;
}

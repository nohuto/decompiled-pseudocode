/*
 * XREFs of IrqArbGetDeviceIrql @ 0x1C008B21C
 * Callers:
 *     IcSetPossibleInput @ 0x1C00884D0 (IcSetPossibleInput.c)
 *     IrqTranslatepQueryDeviceIrql @ 0x1C0088B98 (IrqTranslatepQueryDeviceIrql.c)
 *     IrqArbAddAllocation @ 0x1C0089870 (IrqArbAddAllocation.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C008D1E8 (AcpiIrqLibSetupSciInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C0089780 (ProcessorGetDeviceIdtAssignment.c)
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

/*
 * XREFs of IrqTransGetInterruptVector @ 0x1C00A1F00
 * Callers:
 *     <none>
 * Callees:
 *     IrqLibReleaseArbiterLock @ 0x1C0022158 (IrqLibReleaseArbiterLock.c)
 *     IrqLibAcquireArbiterLock @ 0x1C002216C (IrqLibAcquireArbiterLock.c)
 *     IrqTranslatepQueryDeviceIrql @ 0x1C0088B98 (IrqTranslatepQueryDeviceIrql.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C0089780 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqArbGsivFromIrq @ 0x1C008A05C (IrqArbGsivFromIrq.c)
 */

__int64 __fastcall IrqTransGetInterruptVector(__int64 a1, __int64 a2, unsigned int a3, int a4, char *a5, _QWORD *a6)
{
  unsigned int v6; // edi
  __int64 result; // rax
  unsigned int v9; // esi
  int DeviceIdtAssignment; // ebx
  char DeviceIrql; // al
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v6 = 0;
  result = 0LL;
  *(_QWORD *)&v12 = 0LL;
  v13 = 0LL;
  if ( a3 == a4 )
  {
    IrqLibAcquireArbiterLock(0);
    v9 = IrqArbGsivFromIrq(a3);
    DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(0LL, v9, 0, &v12);
    IrqLibReleaseArbiterLock();
    if ( DeviceIdtAssignment >= 0 )
    {
      DeviceIrql = IrqTranslatepQueryDeviceIrql(v9, SHIDWORD(v13));
      v6 = HIDWORD(v13);
      *a5 = DeviceIrql;
      *a6 = v12;
    }
    return v6;
  }
  return result;
}

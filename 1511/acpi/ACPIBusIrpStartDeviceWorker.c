/*
 * XREFs of ACPIBusIrpStartDeviceWorker @ 0x1C0066C90
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalEvaluateOST @ 0x1C003CBDC (ACPIInternalEvaluateOST.c)
 *     EnableDisableRegions @ 0x1C0066F60 (EnableDisableRegions.c)
 *     IsNsobjPciBus @ 0x1C0067064 (IsNsobjPciBus.c)
 *     EnableDisableIPMIRegions @ 0x1C007B5DC (EnableDisableIPMIRegions.c)
 */

void __fastcall ACPIBusIrpStartDeviceWorker(__int64 a1)
{
  __int64 DeviceExtension; // rax
  __int64 v3; // rdx
  IRP *v4; // rbx
  __int64 v5; // rdi
  int Status; // ebp
  bool v7; // si
  __int64 v8; // r8

  DeviceExtension = ACPIInternalGetDeviceExtension(*(_QWORD *)(a1 + 32));
  v4 = *(IRP **)(a1 + 40);
  v5 = DeviceExtension;
  Status = v4->IoStatus.Status;
  if ( Status >= 0 )
  {
    v7 = (*(_DWORD *)(DeviceExtension + 904) & 0x8000LL) != 0;
    if ( (unsigned __int8)IsNsobjPciBus(*(_QWORD *)(DeviceExtension + 704)) || v7 )
    {
      LOBYTE(v8) = v7;
      LOBYTE(v3) = 1;
      EnableDisableRegions(*(_QWORD *)(v5 + 704), v3, v8);
    }
    if ( (*(_DWORD *)v5 & 0x1000LL) != 0 )
    {
      LOBYTE(v3) = 1;
      EnableDisableIPMIRegions(*(_QWORD *)(v5 + 704), v3);
    }
  }
  if ( (*(_QWORD *)v5 & 0x2000000000LL) != 0 && Status < 0 )
    ACPIInternalEvaluateOST(v5, v3, 163);
  v4->IoStatus.Information = 0LL;
  v4->IoStatus.Status = Status;
  IofCompleteRequest(v4, 0);
}

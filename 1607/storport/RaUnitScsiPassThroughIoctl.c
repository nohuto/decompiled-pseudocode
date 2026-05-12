/*
 * XREFs of RaUnitScsiPassThroughIoctl @ 0x1C005F0DC
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0001D30 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0007190 (RaidCompleteRequestEx.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     Template_pq @ 0x1C002A68C (Template_pq.c)
 *     Template_pqqq @ 0x1C002A8DC (Template_pqqq.c)
 *     PortPassThroughSetAddress @ 0x1C0060B34 (PortPassThroughSetAddress.c)
 */

NTSTATUS __fastcall RaUnitScsiPassThroughIoctl(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  IRP *v4; // rbx
  __int64 v5; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-48h]
  int MajorFunction; // [rsp+20h] [rbp-48h]
  int MinorFunction; // [rsp+28h] [rbp-40h]
  unsigned int LowPart; // [rsp+30h] [rbp-38h]
  GUID v15; // [rsp+40h] [rbp-28h] BYREF

  v15.Data1 = 0;
  v4 = a2;
  v5 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)&v15.Data2 = 0LL;
  *(_DWORD *)&v15.Data4[4] = 0;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &v15);
    if ( (Microsoft_Windows_StorPortEnableBits & 0x1000000) != 0 )
    {
      CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
      LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      MinorFunction = CurrentStackLocation->MinorFunction;
      MajorFunction = CurrentStackLocation->MajorFunction;
      Template_pqqq(
        CurrentStackLocation->MinorFunction,
        &EventPassThrough,
        &v15,
        v4,
        MajorFunction,
        MinorFunction,
        LowPart);
    }
  }
  LOBYTE(a4) = *(_BYTE *)(a1 + 90);
  LOBYTE(a3) = *(_BYTE *)(a1 + 89);
  LOBYTE(a2) = *(_BYTE *)(a1 + 88);
  v8 = PortPassThroughSetAddress(v4, a2, a3, a4);
  if ( v8 < 0 )
    return RaidCompleteRequestEx(v4, 0, 0xC0000010);
  if ( StorEtwLoggingEnabled )
  {
    if ( (Microsoft_Windows_StorPortEnableBits & 0x80000) != 0 )
    {
      LODWORD(v11) = v8;
      Template_pq(v9, &EventNonReadWriteRequestComplete, &v15, v4, v11);
    }
  }
  ++v4->CurrentLocation;
  ++v4->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(v5 + 8), v4);
}

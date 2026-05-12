/*
 * XREFs of RaUnitStorageBreakReservationIoctl @ 0x1C0053F7C
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C00036E0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002E70 (RaidCompleteRequestEx.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     Template_pq @ 0x1C0024F2C (Template_pq.c)
 *     PortAllowIrpFromPdoToFdo @ 0x1C00559B8 (PortAllowIrpFromPdoToFdo.c)
 */

__int64 __fastcall RaUnitStorageBreakReservationIoctl(__int64 a1, IRP *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  unsigned int v5; // edi
  int Status; // [rsp+20h] [rbp-38h]
  GUID v8; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  if ( (int)PortAllowIrpFromPdoToFdo(*(_QWORD *)(v2 + 8)) < 0 )
  {
    v5 = -1073741808;
    RaidCompleteRequestEx(a2, 0, 0xC0000010);
  }
  else
  {
    if ( StorEtwLoggingEnabled )
    {
      v8.Data1 = 0;
      *(_QWORD *)&v8.Data2 = 0LL;
      *(_DWORD *)&v8.Data4[4] = 0;
      IoGetActivityIdIrp(a2, &v8);
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x80000) != 0 )
      {
        Status = a2->IoStatus.Status;
        Template_pq(v4, &EventNonReadWriteRequestComplete, &v8, a2, Status);
      }
    }
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 8), a2);
  }
  return v5;
}

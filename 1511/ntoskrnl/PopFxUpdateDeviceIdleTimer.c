/*
 * XREFs of PopFxUpdateDeviceIdleTimer @ 0x14013F7D4
 * Callers:
 *     PopFxProcessWork @ 0x1400DB240 (PopFxProcessWork.c)
 *     PoFxSetDeviceIdleTimeout @ 0x14013F768 (PoFxSetDeviceIdleTimeout.c)
 * Callees:
 *     KeCancelTimer @ 0x140091500 (KeCancelTimer.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1400DB5D4 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x1400DC700 (PopFxScheduleDeviceIdleTimer.c)
 */

char __fastcall PopFxUpdateDeviceIdleTimer(__int64 a1)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett

  _m_prefetchw((const void *)(a1 + 32));
  v2 = *(_DWORD *)(a1 + 32);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v2, v2);
  }
  while ( v3 != v2 );
  if ( (v2 & 4) != 0 )
  {
    LOBYTE(v2) = KeCancelTimer((PKTIMER)(a1 + 336));
    if ( (_BYTE)v2 )
    {
      _InterlockedAnd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFB);
      LOBYTE(v2) = PopFxScheduleDeviceIdleTimer(a1);
      if ( !(_BYTE)v2 )
      {
        PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(a1 + 48), 0, 0);
        LOBYTE(v2) = (*(__int64 (__fastcall **)(_QWORD))(a1 + 144))(*(_QWORD *)(a1 + 168));
        _InterlockedOr((volatile signed __int32 *)(a1 + 32), 0x40u);
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 40));
      }
    }
  }
  return v2;
}

/*
 * XREFs of PopFxUpdateDeviceIdleTimer @ 0x140149238
 * Callers:
 *     PopFxProcessWork @ 0x1400BF0DC (PopFxProcessWork.c)
 *     PoFxSetDeviceIdleTimeout @ 0x1401491CC (PoFxSetDeviceIdleTimeout.c)
 * Callees:
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1400BF470 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x1400C0CB0 (PopFxScheduleDeviceIdleTimer.c)
 *     KeCancelTimer @ 0x1400C1310 (KeCancelTimer.c)
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

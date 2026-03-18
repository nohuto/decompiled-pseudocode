/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x1C000C0C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000C280 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIAsyncEvalObject @ 0x1C0018430 (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase1(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v2; // ebx
  __int64 v4; // rsi
  char v5; // r14
  KIRQL v6; // al
  _QWORD *i; // r8

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 0;
  v4 = 0LL;
  v5 = 1;
  if ( *(_DWORD *)(a1 + 104) != 1 )
  {
    *(_DWORD *)(a1 + 212) = 5;
LABEL_6:
    ACPIDeviceCompleteGenericPhase(v4, v2, 0LL, a1);
    return 0LL;
  }
  *(_DWORD *)(a1 + 212) = 4;
  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  for ( i = *(_QWORD **)(v1 + 360); i; i = (_QWORD *)*i )
  {
    if ( (*(_BYTE *)(i[1] + 16LL) & 0x10) == 0 )
    {
      v5 = 0;
      break;
    }
  }
  KeReleaseSpinLock(&AcpiPowerLock, v6);
  if ( !v5 )
  {
    v2 = -1073741823;
    goto LABEL_6;
  }
  v4 = *(_QWORD *)(v1 + 408);
  if ( !v4 )
    goto LABEL_6;
  *(_DWORD *)(a1 + 56) |= 0x1000000u;
  if ( (unsigned int)AMLIAsyncEvalObject(v4, 0LL, 0LL, 0LL, ACPIDeviceCompleteGenericPhase, a1) != 259 )
    goto LABEL_6;
  return 259LL;
}

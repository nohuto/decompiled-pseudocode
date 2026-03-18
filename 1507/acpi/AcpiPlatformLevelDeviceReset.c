/*
 * XREFs of AcpiPlatformLevelDeviceReset @ 0x1C00393C0
 * Callers:
 *     AcpiDeviceReset @ 0x1C0079AD0 (AcpiDeviceReset.c)
 * Callees:
 *     AcpiResetDeviceAlreadyProcessed @ 0x1C003949C (AcpiResetDeviceAlreadyProcessed.c)
 */

__int64 __fastcall AcpiPlatformLevelDeviceReset(__int64 a1)
{
  _QWORD *v1; // rsi
  int v4; // edi
  KIRQL v5; // bp
  __int64 v6; // r8
  __int64 v7; // r11
  _QWORD *v8; // r10
  _QWORD *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax

  v1 = *(_QWORD **)(a1 + 8);
  if ( !v1[89] )
    return 3221225486LL;
  if ( !*(_QWORD *)(a1 + 72) )
    return 3221225659LL;
  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  if ( v1[112] )
  {
    v4 = -2147483631;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 72);
    v8 = (_QWORD *)(v7 + 48);
    v9 = *(_QWORD **)(v7 + 48);
    while ( v9 != v8 )
    {
      if ( !(unsigned __int8)AcpiResetDeviceAlreadyProcessed(v7, v9 - 5, v6, *v9) )
      {
        v11 = *(_QWORD *)(v10 + 32);
        *(_QWORD *)(v11 + 904) |= 0x8000000uLL;
        *(_QWORD *)(v11 + 896) = a1;
        _InterlockedIncrement((volatile signed __int32 *)a1);
      }
    }
  }
  KeReleaseSpinLock(&AcpiPowerLock, v5);
  if ( v4 >= 0 )
    return (unsigned int)IoRequestDeviceRemovalForReset(v1[91], 0LL);
  return (unsigned int)v4;
}

/*
 * XREFs of AcpiPlatformLevelDeviceReset @ 0x1C004BEF0
 * Callers:
 *     AcpiDeviceReset @ 0x1C009A9C0 (AcpiDeviceReset.c)
 * Callees:
 *     AcpiResetDeviceAlreadyProcessed @ 0x1C004BFDC (AcpiResetDeviceAlreadyProcessed.c)
 */

__int64 __fastcall AcpiPlatformLevelDeviceReset(__int64 a1)
{
  __int64 v1; // rsi
  int v4; // edi
  KIRQL v5; // bp
  __int64 v6; // r8
  __int64 v7; // r11
  _QWORD *v8; // r10
  _QWORD *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( !*(_QWORD *)(v1 + 720) )
    return 3221225486LL;
  if ( !*(_QWORD *)(a1 + 72) )
    return 3221225659LL;
  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  if ( *(_QWORD *)(v1 + 904) )
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
        *(_QWORD *)(v11 + 912) |= 0x8000000uLL;
        *(_QWORD *)(v11 + 904) = a1;
        _InterlockedIncrement((volatile signed __int32 *)a1);
      }
    }
  }
  KeReleaseSpinLock(&AcpiPowerLock, v5);
  if ( v4 >= 0 )
    return (unsigned int)IoRequestDeviceRemovalForReset(
                           *(_QWORD *)(v1 + 736),
                           (*(_DWORD *)(v1 + 912) & 0x40000000) == 0LL);
  return (unsigned int)v4;
}

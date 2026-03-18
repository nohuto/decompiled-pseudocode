/*
 * XREFs of ACPIBuildProcessDevicePhasePsc @ 0x1C000B180
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceInitializePowerRequest @ 0x1C000AE8C (ACPIDeviceInitializePowerRequest.c)
 *     ACPIBuildCompleteCommon @ 0x1C000B7A4 (ACPIBuildCompleteCommon.c)
 *     AMLIGetNamedChild @ 0x1C000D460 (AMLIGetNamedChild.c)
 *     FreeDataBuffs @ 0x1C000E1D0 (FreeDataBuffs.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePsc(__int64 a1)
{
  ULONG_PTR v1; // rsi
  int v3; // r10d
  int *v4; // r9
  __int64 v5; // r11
  int v6; // ecx
  __int64 **v7; // rdx
  __int64 v8; // r8
  __int64 *v9; // rax
  POWER_STATE v10; // ebx
  ULONG_PTR v11; // r9
  int v12; // ebx
  __int64 v13; // rdx
  unsigned __int16 v15; // ax
  unsigned __int64 v16; // rax

  v1 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 32;
  *(_QWORD *)(v1 + 432) = AMLIGetNamedChild(*(_QWORD *)(v1 + 704), 861098079LL);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v3 = 2;
  v4 = (int *)(v1 + 460);
  v5 = 4LL;
  do
  {
    v6 = 1;
    v7 = (__int64 **)(v1 + 360);
    v8 = 1LL;
    while ( 1 )
    {
      v9 = *v7;
      if ( *v7 )
      {
        do
        {
          if ( *((_DWORD *)v9 + 4) < v3 )
            break;
          v9 = (__int64 *)*v9;
        }
        while ( v9 );
        if ( !v9 )
          break;
      }
      ++v6;
      ++v8;
      ++v7;
      if ( v8 > 3 )
        goto LABEL_5;
    }
    *v4 = v6;
LABEL_5:
    ++v3;
    ++v4;
    --v5;
  }
  while ( v5 );
  *(_DWORD *)(v1 + 484) = *(_DWORD *)(v1 + 4LL * *(int *)(v1 + 480) + 452);
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  v10.SystemState = PowerSystemWorking;
  if ( (*(_QWORD *)v1 & 0x80000000LL) != 0 )
  {
    v10.SystemState = PowerSystemSleeping3;
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 56);
    if ( v11 && *(int *)(a1 + 48) >= 0 )
    {
      if ( (*(_QWORD *)v1 & 0x80000LL) != 0 )
      {
        dword_1C005A218 = 0;
        byte_1C005A21C = 0;
        FreeDataBuffs(a1 + 80, 1LL);
        *(_DWORD *)(v1 + 328) = 1;
      }
      else
      {
        v15 = *(_WORD *)(a1 + 82);
        if ( v15 != 1 )
          KeBugCheckEx(0xA5u, 8uLL, v1, v11, v15);
        v16 = *(_QWORD *)(a1 + 96);
        if ( v16 < 4 )
          v10.SystemState = DevicePowerStateTranslation[v16];
        else
          v10.SystemState = PowerSystemUnspecified;
        dword_1C005A218 = 0;
        byte_1C005A21C = 0;
        FreeDataBuffs(a1 + 80, 1LL);
      }
    }
  }
  v12 = ACPIDeviceInitializePowerRequest(v1, v10, 0LL, 0LL, 0, 0, 9u);
  if ( v12 == -1073741802 )
    v12 = 259;
  v13 = *(unsigned int *)(a1 + 32);
  if ( v12 < 0 )
    *(_DWORD *)(a1 + 48) = v12;
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon(a1 + 24, v13);
  return (unsigned int)v12;
}

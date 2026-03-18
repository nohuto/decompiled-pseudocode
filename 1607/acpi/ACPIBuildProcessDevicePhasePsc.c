/*
 * XREFs of ACPIBuildProcessDevicePhasePsc @ 0x1C000EC80
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceInternalDelayedDeviceRequest @ 0x1C000EB98 (ACPIDeviceInternalDelayedDeviceRequest.c)
 *     ACPIBuildCompleteCommon @ 0x1C000F100 (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 *     WPP_RECORDER_SF_DDqss @ 0x1C0029140 (WPP_RECORDER_SF_DDqss.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePsc(__int64 a1)
{
  ULONG_PTR v1; // rbx
  int v2; // edi
  int *v3; // r12
  __int64 *v4; // r15
  __int64 v5; // r13
  int v6; // r14d
  __int64 **v7; // rcx
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rax
  POWER_STATE v11; // edi
  ULONG_PTR v12; // r9
  int v13; // edi
  __int64 v14; // rcx
  int v15; // edx
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v19; // rax
  __int64 *v20; // r8
  __int64 *v21; // rdx
  unsigned __int16 v22; // ax
  unsigned __int64 v23; // rax

  v1 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 32;
  *(_QWORD *)(v1 + 440) = AMLIGetNamedChild(*(_QWORD *)(v1 + 712), 861098079LL);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v2 = 2;
  v3 = (int *)(v1 + 468);
  v4 = qword_1C002C340;
  v5 = 4LL;
  do
  {
    v6 = 1;
    v7 = (__int64 **)(v1 + 368);
    v8 = 1LL;
    while ( 1 )
    {
      v9 = *v7;
      if ( *v7 )
      {
        do
        {
          if ( *((_DWORD *)v9 + 4) < v2 )
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
    v19 = *(_QWORD *)(v1 + 8);
    v20 = qword_1C002C340;
    v21 = qword_1C002C340;
    if ( (v19 & 0x200000000000LL) != 0 )
    {
      v20 = *(__int64 **)(v1 + 560);
      if ( (v19 & 0x400000000000LL) != 0 )
        v21 = *(__int64 **)(v1 + 568);
    }
    WPP_RECORDER_SF_DDqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v21,
      6,
      41,
      (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
      v6 - 1,
      v2 - 1,
      v1,
      (__int64)v20,
      (__int64)v21);
    *v3 = v6;
LABEL_5:
    ++v2;
    ++v3;
    --v5;
  }
  while ( v5 );
  *(_DWORD *)(v1 + 492) = *(_DWORD *)(v1 + 4LL * *(int *)(v1 + 488) + 460);
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  v10 = *(_QWORD *)(v1 + 8);
  v11.SystemState = PowerSystemWorking;
  if ( (v10 & 0x80000000) != 0 )
  {
    v11.SystemState = PowerSystemSleeping3;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 56);
    if ( v12 && *(int *)(a1 + 48) >= 0 )
    {
      if ( (v10 & 0x80000) != 0 )
      {
        dword_1C0074698 = 0;
        byte_1C007469C = 0;
        FreeDataBuffs(a1 + 80, 1LL);
        *(_DWORD *)(v1 + 336) = 1;
      }
      else
      {
        v22 = *(_WORD *)(a1 + 82);
        if ( v22 != 1 )
          KeBugCheckEx(0xA5u, 8uLL, v1, v12, v22);
        v23 = *(_QWORD *)(a1 + 96);
        if ( v23 < 4 )
          v11.SystemState = DevicePowerStateTranslation[v23];
        else
          v11.SystemState = PowerSystemUnspecified;
        dword_1C0074698 = 0;
        byte_1C007469C = 0;
        FreeDataBuffs(a1 + 80, 1LL);
      }
    }
  }
  v13 = ACPIDeviceInternalDelayedDeviceRequest((_QWORD *)v1, v11);
  v14 = *(_QWORD *)(v1 + 8);
  v15 = 0;
  v16 = qword_1C002C340;
  if ( (v14 & 0x200000000000LL) != 0 )
  {
    v4 = *(__int64 **)(v1 + 560);
    v15 = 0;
    if ( (v14 & 0x400000000000LL) != 0 )
      v16 = *(__int64 **)(v1 + 568);
  }
  LOBYTE(v15) = 4;
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v15,
    6,
    42,
    (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
    v13,
    v1,
    (__int64)v4,
    (__int64)v16);
  v17 = *(unsigned int *)(a1 + 32);
  if ( v13 < 0 )
    *(_DWORD *)(a1 + 48) = v13;
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon(a1 + 24, v17);
  return (unsigned int)v13;
}

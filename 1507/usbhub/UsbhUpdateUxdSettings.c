/*
 * XREFs of UsbhUpdateUxdSettings @ 0x1C0005860
 * Callers:
 *     UsbhSetupDevice @ 0x1C0007110 (UsbhSetupDevice.c)
 *     UsbhIoctlCyclePort @ 0x1C0047854 (UsbhIoctlCyclePort.c)
 * Callees:
 *     UsbhReleasePdoUxdLock @ 0x1C000598C (UsbhReleasePdoUxdLock.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C000639C (UsbhGetGlobalUxdSettings.c)
 *     UsbhAcquirePdoUxdLock @ 0x1C0006C48 (UsbhAcquirePdoUxdLock.c)
 *     UsbhFreeID @ 0x1C000758C (UsbhFreeID.c)
 *     UsbhBuildDeviceID @ 0x1C00086EC (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x1C0008A88 (UsbhBuildHardwareID.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C004FE2C (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_Sqd @ 0x1C00520DC (WPP_RECORDER_SF_Sqd.c)
 *     UsbhGetUxdDeviceKey @ 0x1C0056AF4 (UsbhGetUxdDeviceKey.c)
 *     UsbhGetUxdPortKey @ 0x1C0056D1C (UsbhGetUxdPortKey.c)
 *     UsbhUpdateSqmFlags @ 0x1C006F000 (UsbhUpdateSqmFlags.c)
 */

__int64 __fastcall UsbhUpdateUxdSettings(__int64 a1, struct _DEVICE_OBJECT *a2, char a3, _BYTE *a4)
{
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int128 v11; // xmm0
  __int64 v12; // rcx
  PDEVICE_OBJECT v13; // rcx
  __int64 v15; // rcx
  PDEVICE_OBJECT v16; // rcx
  int v17; // esi
  int v18; // edx
  int v19; // r8d
  int v20; // edx
  int v21; // r8d
  int v22; // r8d
  __int128 v23; // [rsp+40h] [rbp-99h] BYREF
  _OWORD Source1[5]; // [rsp+50h] [rbp-89h] BYREF
  _OWORD Source2[5]; // [rsp+A0h] [rbp-39h] BYREF

  v8 = PdoExt(a2);
  v9 = FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      20,
      (__int64)&WPP_7b111e6d9aaacafadc26834d2b580d22_Traceguids);
  memset(Source1, 0, 0x44uLL);
  memset(Source2, 0, 0x44uLL);
  UsbhAcquirePdoUxdLock(v10, a2);
  *a4 = 0;
  v11 = *(_OWORD *)(v8 + 2568);
  *(_DWORD *)(v8 + 1412) &= ~0x10000u;
  Source2[0] = v11;
  Source2[1] = *(_OWORD *)(v8 + 2584);
  Source2[2] = *(_OWORD *)(v8 + 2600);
  Source2[3] = *(_OWORD *)(v8 + 2616);
  LODWORD(Source2[4]) = *(_DWORD *)(v8 + 2632);
  UsbhGetGlobalUxdSettings(v12, v9 + 5176);
  if ( !*(_DWORD *)(v9 + 5188) || dword_1C006662C )
  {
    v13 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        21,
        (__int64)&WPP_7b111e6d9aaacafadc26834d2b580d22_Traceguids);
    UsbhReleasePdoUxdLock(v13, a2);
    return 0LL;
  }
  if ( (int)UsbhGetUxdPortKey(a1, *(unsigned __int16 *)(v8 + 1420), Source1) < 0 )
  {
    if ( (int)UsbhGetUxdDeviceKey(v15, a2, Source1) < 0 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          24,
          (__int64)&WPP_7b111e6d9aaacafadc26834d2b580d22_Traceguids,
          *(_WORD *)(v8 + 1420));
      goto LABEL_17;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_DDD(
        WPP_GLOBAL_Control->DeviceExtension,
        *(unsigned __int16 *)(v8 + 1400),
        (_DWORD)WPP_GLOBAL_Control,
        23,
        (__int64)&WPP_7b111e6d9aaacafadc26834d2b580d22_Traceguids,
        *(_WORD *)(v8 + 1400),
        *(_WORD *)(v8 + 1402),
        *(_WORD *)(v8 + 1404));
  }
  else if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      22,
      (__int64)&WPP_7b111e6d9aaacafadc26834d2b580d22_Traceguids,
      *(_WORD *)(v8 + 1420));
  }
  *(_DWORD *)(v8 + 1412) |= 0x10000u;
LABEL_17:
  *(_OWORD *)(v8 + 2568) = Source1[0];
  *(_OWORD *)(v8 + 2584) = Source1[1];
  *(_OWORD *)(v8 + 2600) = Source1[2];
  *(_OWORD *)(v8 + 2616) = Source1[3];
  *(_DWORD *)(v8 + 2632) = Source1[4];
  if ( RtlCompareMemory(Source1, Source2, 0x44uLL) != 68 && (*(_DWORD *)(v8 + 1412) & 4) == 0 )
    *a4 = 1;
  v17 = 0;
  if ( *a4 && a3 )
  {
    v17 = UsbhBuildHardwareID(a1, a2, &v23);
    if ( v17 < 0 )
    {
      v16 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          26,
          (__int64)&WPP_7b111e6d9aaacafadc26834d2b580d22_Traceguids);
    }
    else
    {
      UsbhFreeID(v8 + 2088);
      *(_OWORD *)(v8 + 2088) = v23;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_Sqd(
          WPP_GLOBAL_Control->DeviceExtension,
          v18,
          v19,
          25,
          (__int64)&WPP_7b111e6d9aaacafadc26834d2b580d22_Traceguids,
          *((__int64 *)&v23 + 1),
          SBYTE8(v23),
          SBYTE4(v23));
      v17 = UsbhBuildDeviceID(a1, a2, &v23);
      if ( v17 < 0 )
      {
        v16 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            28,
            (__int64)&WPP_7b111e6d9aaacafadc26834d2b580d22_Traceguids);
      }
      else
      {
        UsbhFreeID(v8 + 2072);
        *(_OWORD *)(v8 + 2072) = v23;
        v16 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_Sqd(
            WPP_GLOBAL_Control->DeviceExtension,
            v20,
            v21,
            27,
            (__int64)&WPP_7b111e6d9aaacafadc26834d2b580d22_Traceguids,
            *((__int64 *)&v23 + 1),
            SBYTE8(v23),
            SBYTE4(v23));
      }
    }
  }
  UsbhReleasePdoUxdLock(v16, a2);
  v22 = *(_DWORD *)(v8 + 2772);
  if ( (_bittest((const signed __int32 *)(v8 + 1412), 0x10u) & ((v22 & 4) == 0)) != 0 )
  {
    *(_DWORD *)(v8 + 2772) = v22 | 4;
    UsbhUpdateSqmFlags(a2);
  }
  return (unsigned int)v17;
}

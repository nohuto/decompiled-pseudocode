/*
 * XREFs of CiConfigInitialize @ 0x1C000D2E0
 * Callers:
 *     CsInitialize @ 0x1C000D030 (CsInitialize.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0003D20 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C0004164 (WPP_SF_d.c)
 *     CiConfigReadDWORD @ 0x1C000D5C0 (CiConfigReadDWORD.c)
 *     CiConfigInitializeFromRegistry @ 0x1C000D640 (CiConfigInitializeFromRegistry.c)
 */

__int64 CiConfigInitialize()
{
  NTSTATUS v0; // ebx
  unsigned int DWORD; // edx
  int v2; // ecx
  PDEVICE_OBJECT v3; // r10
  int v4; // eax
  int v5; // r9d
  bool v6; // cl
  int v7; // r8d
  int DpcData_high; // r9d
  ULONG ActiveThreadCount; // r9d
  int v10; // r9d
  int v11; // r9d
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+60h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+18h] BYREF

  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)0x1C000F100LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = ZwOpenKey(&KeyHandle, 0x80000100, &ObjectAttributes);
  if ( v0 < 0 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x1Bu,
        (__int64)&WPP_d7ac1f0a018c092a6c834544e103194b_Traceguids,
        v0);
  }
  else
  {
    DWORD = CiConfigReadDWORD(KeyHandle, 0x1C000F090LL, 100LL);
    if ( DWORD - 10 > 0x5A )
      v2 = 20;
    else
      v2 = 10 * (DWORD / 0xA);
    CiSystemResponsiveness = v2;
    v3 = WPP_GLOBAL_Control;
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x12u,
        (__int64)&WPP_d7ac1f0a018c092a6c834544e103194b_Traceguids,
        v2);
      v2 = CiSystemResponsiveness;
      v3 = WPP_GLOBAL_Control;
    }
    if ( v2 == 100 )
    {
      if ( (HIDWORD(v3->Timer) & 1) != 0 && BYTE1(v3->Timer) >= 2u )
        WPP_SF_((__int64)v3->AttachedDevice, 0x13u, (__int64)&WPP_d7ac1f0a018c092a6c834544e103194b_Traceguids);
      v0 = -1073741696;
    }
    else
    {
      v4 = CiConfigReadDWORD(KeyHandle, 0x1C000F0A0LL, 10LL);
      LODWORD(WPP_MAIN_CB.Dpc.DpcData) = v4;
      v5 = v4;
      if ( v4 )
      {
        if ( (unsigned int)(v4 - 71) <= 0xFFFFFFB7 )
        {
          v5 = 70;
          LODWORD(WPP_MAIN_CB.Dpc.DpcData) = 70;
        }
      }
      else
      {
        v5 = 1;
        LODWORD(WPP_MAIN_CB.Dpc.DpcData) = 1;
      }
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x14u,
          (__int64)&WPP_d7ac1f0a018c092a6c834544e103194b_Traceguids,
          v5);
      v6 = (unsigned __int8)CiConfigReadDWORD(KeyHandle, 0x1C000F080LL, 0LL) != 0;
      CiSchedulerDisallowLazyMode = v6;
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x15u,
          (__int64)&WPP_d7ac1f0a018c092a6c834544e103194b_Traceguids,
          v6);
      v7 = CiConfigReadDWORD(KeyHandle, 0x1C000F0B0LL, 2LL);
      CiSchedulerIdleDetectionCycles = v7;
      if ( (unsigned int)(v7 - 1) > 0x1E )
      {
        v7 = 2;
        CiSchedulerIdleDetectionCycles = 2;
      }
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x16u,
          (__int64)&WPP_d7ac1f0a018c092a6c834544e103194b_Traceguids,
          v7);
        LOBYTE(v7) = CiSchedulerIdleDetectionCycles;
      }
      CiSchedulerIdleCycleBitMask = (1 << v7) - 1;
      HIDWORD(WPP_MAIN_CB.Dpc.DpcData) = CiConfigReadDWORD(KeyHandle, 0x1C000F0C0LL, 1000000LL);
      DpcData_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
      if ( !HIDWORD(WPP_MAIN_CB.Dpc.DpcData) )
      {
        DpcData_high = 1000000;
        HIDWORD(WPP_MAIN_CB.Dpc.DpcData) = 1000000;
      }
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x17u,
          (__int64)&WPP_d7ac1f0a018c092a6c834544e103194b_Traceguids,
          DpcData_high);
      WPP_MAIN_CB.ActiveThreadCount = CiConfigReadDWORD(KeyHandle, 0x1C000F0D0LL, 10000LL);
      ActiveThreadCount = WPP_MAIN_CB.ActiveThreadCount;
      if ( WPP_MAIN_CB.ActiveThreadCount > 0x2710 )
      {
        ActiveThreadCount = 10000;
        WPP_MAIN_CB.ActiveThreadCount = 10000;
      }
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x18u,
          (__int64)&WPP_d7ac1f0a018c092a6c834544e103194b_Traceguids,
          ActiveThreadCount);
      v10 = CiConfigReadDWORD(KeyHandle, 0x1C000F0E0LL, 100000LL);
      *(&WPP_MAIN_CB.ActiveThreadCount + 1) = v10;
      if ( (unsigned int)(v10 - 50000) > 0xE7EF0 )
      {
        v10 = 100000;
        *(&WPP_MAIN_CB.ActiveThreadCount + 1) = 100000;
      }
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x19u,
          (__int64)&WPP_d7ac1f0a018c092a6c834544e103194b_Traceguids,
          v10);
      v11 = CiConfigReadDWORD(KeyHandle, 0x1C000F0F0LL, 32LL);
      CiMaxThreadsPerProcess = v11;
      if ( (unsigned int)(v11 - 8) > 0x78 )
      {
        v11 = 32;
        CiMaxThreadsPerProcess = 32;
      }
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x1Au,
          (__int64)&WPP_d7ac1f0a018c092a6c834544e103194b_Traceguids,
          v11);
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)0x1C000F110LL;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v0 = ZwOpenKey(&Handle, 0x80000100, &ObjectAttributes);
      if ( v0 >= 0 )
      {
        v0 = CiConfigInitializeFromRegistry(Handle);
        ZwClose(Handle);
      }
    }
    ZwClose(KeyHandle);
  }
  return (unsigned int)v0;
}

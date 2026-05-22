/*
 * XREFs of ?OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z @ 0x180074EE0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInfo@@@Z @ 0x180054C2C (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInf.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180072CE4 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@@@Z @ 0x1800752DC (-GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@.c)
 *     ?UpdateCacheForDevice@AugmentedInputDeviceCollection@@AEAAJKUAugmentedInputCacheState@@@Z @ 0x180075334 (-UpdateCacheForDevice@AugmentedInputDeviceCollection@@AEAAJKUAugmentedInputCacheState@@@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x18007E2EC (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::OnInputReport(
        AugmentedInputDeviceCollection *this,
        unsigned int a2,
        PCHAR Report,
        unsigned int *a4)
{
  unsigned int v5; // r14d
  int DeviceId; // eax
  __int64 v9; // rcx
  ULONG v10; // r11d
  int updated; // ebx
  int v12; // r9d
  __int64 v13; // rcx
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r12
  struct _HIDP_CAPS *v15; // rdi
  int HIDCapabilities; // eax
  __int64 v17; // rcx
  NTSTATUS v18; // ebx
  NTSTATUS v19; // eax
  __int64 v20; // rcx
  NTSTATUS Usages; // ebx
  USHORT v22; // ax
  USHORT *v23; // rdx
  __int64 v24; // rdx
  char v25; // r11
  unsigned int v26; // r11d
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 InputReportByteLength; // rax
  struct _HIDP_CAPS *v33; // [rsp+40h] [rbp-C0h] BYREF
  int v34; // [rsp+48h] [rbp-B8h]
  ULONG UsageValue; // [rsp+50h] [rbp-B0h] BYREF
  ULONG UsageLength[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct _HIDP_CAPS *v37; // [rsp+60h] [rbp-A0h] BYREF
  int v38; // [rsp+68h] [rbp-98h]
  struct _HIDP_CAPS *v39; // [rsp+70h] [rbp-90h] BYREF
  int v40; // [rsp+78h] [rbp-88h]
  float v41[472]; // [rsp+80h] [rbp-80h] BYREF
  USHORT UsageList[20]; // [rsp+7E0h] [rbp+6E0h] BYREF

  *(_QWORD *)UsageLength = 0LL;
  v33 = 0LL;
  v5 = (unsigned int)a4;
  DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, (struct RIMDevice **)UsageLength, a4);
  updated = DeviceId;
  if ( DeviceId >= 0 )
  {
    v13 = *(_QWORD *)UsageLength;
    PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)UsageLength + 48LL);
    v15 = (struct _HIDP_CAPS *)(*(_QWORD *)UsageLength + 60LL);
    if ( *(_WORD *)(*(_QWORD *)UsageLength + 60LL) == (_WORD)v10 )
    {
      HIDCapabilities = HIDDevice::GetHIDCapabilities(*(HIDDevice **)UsageLength, &v33);
      v15 = v33;
      updated = HIDCapabilities;
      v10 = 0;
    }
    else
    {
      updated = v10;
    }
    if ( updated < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v13, &MinInput_Warning_CheckResult, 0, 174, updated);
      return (unsigned int)updated;
    }
    UsageValue = v10;
    while ( 1 )
    {
      if ( v5 < v15->InputReportByteLength )
        return (unsigned int)updated;
      memset(v41, 0, sizeof(v41));
      v18 = HidP_GetUsageValue(HidP_Input, 1u, 0, 0x33u, &UsageValue, PreparsedData, Report, v15->InputReportByteLength);
      if ( v18 < 0 )
      {
        updated = v18 | 0x10000000;
        if ( updated < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            Template_qqq(v17, &MinInput_Warning_CheckResult, 0, 196, updated);
          return (unsigned int)updated;
        }
      }
      v41[325] = (float)(__int16)UsageValue / 10.0;
      v19 = HidP_GetUsageValue(HidP_Input, 1u, 0, 0x34u, &UsageValue, PreparsedData, Report, v15->InputReportByteLength);
      if ( v19 < 0 )
      {
        updated = v19 | 0x10000000;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(0LL, &MinInput_Warning_CheckResult, 0, 211, v19);
        return (unsigned int)updated;
      }
      LOBYTE(v41[324]) = 0;
      UsageLength[0] = 20;
      v41[326] = (float)(__int16)UsageValue / 10.0;
      Usages = HidP_GetUsages(
                 HidP_Input,
                 9u,
                 0,
                 UsageList,
                 UsageLength,
                 PreparsedData,
                 Report,
                 v15->InputReportByteLength);
      if ( Usages < 0 )
      {
        updated = Usages | 0x10000000;
        if ( updated < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            Template_qqq(v20, &MinInput_Warning_CheckResult, 0, 230, updated);
          return (unsigned int)updated;
        }
      }
      v22 = UsageList[0];
      v23 = UsageList;
      while ( v22 )
      {
        if ( v22 == 1 )
          LOBYTE(v41[324]) = 1;
        v22 = *++v23;
      }
      v33 = 0LL;
      v34 = 0;
      DeviceId = AugmentedInputDeviceCollection::GetAugmentedInputCacheEntry(
                   this,
                   a2,
                   (struct AugmentedInputCacheState *)&v33);
      updated = DeviceId;
      if ( DeviceId < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return (unsigned int)updated;
        v12 = 245;
        goto LABEL_46;
      }
      if ( LOBYTE(v41[324]) == v25 )
      {
        if ( BYTE4(v33) == v25 )
          goto LABEL_33;
        BYTE4(v33) = 0;
        v39 = v33;
        v40 = v34;
        updated = AugmentedInputDeviceCollection::UpdateCacheForDevice(this, v24, &v39);
        if ( updated < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            Template_qqq(v29, &MinInput_Warning_CheckResult, 0, 266, updated);
          return (unsigned int)updated;
        }
      }
      else if ( BYTE4(v33) == v25 )
      {
        BYTE4(v33) = 1;
        v37 = v33;
        v38 = v34;
        v27 = AugmentedInputDeviceCollection::UpdateCacheForDevice(this, v24, &v37);
        updated = v27;
        if ( v27 < 0 )
        {
          if ( ((unsigned __int8)v26 & (unsigned __int8)Microsoft_OneCore_MinInputEnableBits) != 0 )
            Template_qqq(v28, &MinInput_Warning_CheckResult, 0, 257, v27);
          return (unsigned int)updated;
        }
      }
      else
      {
        v26 = 3;
      }
      MPCInputInfoHelper::PopulateAugmentedInput(v26, a2, (int)v33, SHIWORD(v33), v34, SHIWORD(v33), (__int64)v41);
      updated = (*(__int64 (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 2) + 24LL))(
                  *((_QWORD *)this + 2),
                  v41);
      if ( updated < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v30, &MinInput_Warning_CheckResult, 0, 273, updated);
        return (unsigned int)updated;
      }
LABEL_33:
      InputReportByteLength = v15->InputReportByteLength;
      v5 -= InputReportByteLength;
      Report += InputReportByteLength;
    }
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v12 = 172;
LABEL_46:
    Template_qqq(v9, &MinInput_Warning_CheckResult, 0, v12, DeviceId);
  }
  return (unsigned int)updated;
}

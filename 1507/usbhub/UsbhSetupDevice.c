/*
 * XREFs of UsbhSetupDevice @ 0x1C0007110
 * Callers:
 *     UsbhReset2Complete @ 0x1C0016FE0 (UsbhReset2Complete.c)
 * Callees:
 *     UsbhGetInitRegUsbDeviceFlags @ 0x1C000508C (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhGetMSOS_Descriptor @ 0x1C0005348 (UsbhGetMSOS_Descriptor.c)
 *     UsbhGetDeviceInformation @ 0x1C000544C (UsbhGetDeviceInformation.c)
 *     UsbhUpdateUxdSettings @ 0x1C0005860 (UsbhUpdateUxdSettings.c)
 *     UsbhValidateDeviceDescriptor @ 0x1C0006F6C (UsbhValidateDeviceDescriptor.c)
 *     UsbhGetSerialNumber @ 0x1C0006F9C (UsbhGetSerialNumber.c)
 *     UsbhFreeID @ 0x1C000758C (UsbhFreeID.c)
 *     Usbh__TestPoint__Ulong @ 0x1C00075B8 (Usbh__TestPoint__Ulong.c)
 *     UsbhGetLanguageIdString @ 0x1C00075F8 (UsbhGetLanguageIdString.c)
 *     UsbhBuildCompatibleID @ 0x1C0008538 (UsbhBuildCompatibleID.c)
 *     UsbhBuildDeviceID @ 0x1C00086EC (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x1C0008A88 (UsbhBuildHardwareID.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     UsbhQueryPortState @ 0x1C0014220 (UsbhQueryPortState.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B540 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C001F6F0 (UsbhSyncSendCommandToDevice.c)
 *     UsbhGetProductIdString @ 0x1C0028D74 (UsbhGetProductIdString.c)
 *     UsbhGetMsOsContainerID @ 0x1C0029BB8 (UsbhGetMsOsContainerID.c)
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 *     UsbhGetMsOs20DescriptorSet @ 0x1C003FC00 (UsbhGetMsOs20DescriptorSet.c)
 *     UsbhGetMsOsExtendedConfigDesc @ 0x1C003FD4C (UsbhGetMsOsExtendedConfigDesc.c)
 *     UsbhSendMsOs20AltEnumCommand @ 0x1C0040430 (UsbhSendMsOs20AltEnumCommand.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0043334 (UsbhGetAlternateUsbDescriptors.c)
 *     UsbhGetBillboardInfo @ 0x1C00434A0 (UsbhGetBillboardInfo.c)
 *     WPP_RECORDER_SF_S @ 0x1C0045584 (WPP_RECORDER_SF_S.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 *     UsbhBusIf_SetClearRootPortResumeTime @ 0x1C004FCB0 (UsbhBusIf_SetClearRootPortResumeTime.c)
 *     UsbhBusIf_SetMsOs20Support @ 0x1C004FDAC (UsbhBusIf_SetMsOs20Support.c)
 *     UsbhValidateBOSDescriptorSet @ 0x1C0052D0C (UsbhValidateBOSDescriptorSet.c)
 *     UsbhValidateMsOs20DescriptorSet @ 0x1C00530A0 (UsbhValidateMsOs20DescriptorSet.c)
 *     UsbhGetBosDescriptor @ 0x1C0053D80 (UsbhGetBosDescriptor.c)
 *     UsbhGetDeviceDescriptor @ 0x1C0053EF0 (UsbhGetDeviceDescriptor.c)
 *     UsbhGetQualifierDescriptorFromDevice @ 0x1C0053FC8 (UsbhGetQualifierDescriptorFromDevice.c)
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C0057E44 (UsbDualRoleFeaturesQueryLocalMachine.c)
 */

__int64 __fastcall UsbhSetupDevice(__int64 a1, struct _DEVICE_OBJECT *a2, _DWORD *a3)
{
  __int64 v6; // rbx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  int *v13; // r15
  __int64 result; // rax
  __int64 v15; // r14
  __int64 v16; // rax
  int (__fastcall *v17)(_QWORD, __int64, __int64, int *, _QWORD, int *); // r10
  __int64 v18; // rcx
  int BosDescriptor; // r14d
  int MSOS_Descriptor; // eax
  int v21; // r8d
  PDEVICE_OBJECT v22; // rcx
  __int64 v23; // rax
  int v24; // r14d
  int v25; // r8d
  int v26; // eax
  unsigned int v27; // r10d
  __int64 v28; // r8
  char AlternateUsbDescriptors; // r13
  __int64 *v30; // rcx
  __int64 v31; // rax
  __int64 *v32; // r8
  __int64 v33; // r8
  int v34; // ecx
  __int64 v35; // r9
  __int64 v36; // rcx
  int v37; // eax
  char v38; // cl
  __int128 v39; // xmm0
  void *v40; // r9
  int QualifierDescriptorFromDevice; // eax
  int ValueData; // [rsp+20h] [rbp-79h]
  int ValueDataa; // [rsp+20h] [rbp-79h]
  int v44; // [rsp+48h] [rbp-51h]
  _BYTE v45[4]; // [rsp+50h] [rbp-49h] BYREF
  int v46; // [rsp+54h] [rbp-45h] BYREF
  unsigned int v47; // [rsp+58h] [rbp-41h] BYREF
  int v48; // [rsp+5Ch] [rbp-3Dh] BYREF
  int v49; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v50[8]; // [rsp+68h] [rbp-31h] BYREF
  __int64 v51; // [rsp+70h] [rbp-29h]
  __int64 v52; // [rsp+78h] [rbp-21h]
  __int64 *v53; // [rsp+80h] [rbp-19h]
  __int64 v54; // [rsp+88h] [rbp-11h]
  __int64 v55; // [rsp+90h] [rbp-9h]
  __int64 v56; // [rsp+98h] [rbp-1h] BYREF
  char v57; // [rsp+A0h] [rbp+7h]
  int v58; // [rsp+A1h] [rbp+8h]
  int v59[2]; // [rsp+A8h] [rbp+Fh] BYREF

  v46 = 0;
  v45[0] = 0;
  *(_QWORD *)v59 = FdoExt(a1);
  v6 = PdoExt(a2);
  Log(a1, 4, 1936028740, (_DWORD)a2, *(unsigned __int16 *)(v6 + 1420));
  v7 = *(void **)(v6 + 2384);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(v6 + 2384) = 0LL;
  }
  v8 = *(void **)(v6 + 1136);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(v6 + 1136) = 0LL;
  }
  v9 = *(void **)(v6 + 2232);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *(_QWORD *)(v6 + 2232) = 0LL;
  }
  v10 = *(void **)(v6 + 2392);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *(_QWORD *)(v6 + 2392) = 0LL;
  }
  v11 = *(void **)(v6 + 2808);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *(_QWORD *)(v6 + 2808) = 0LL;
  }
  UsbhFreeID(v6 + 2120);
  *(_DWORD *)(v6 + 1412) &= ~0x200u;
  UsbhFreeID(v6 + 2168);
  UsbhFreeID(v6 + 2184);
  v12 = *(void **)(v6 + 2496);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *(_QWORD *)(v6 + 2496) = 0LL;
  }
  v13 = (int *)(v6 + 2792);
  memset((void *)(v6 + 2792), 0, 0x38uLL);
  result = UsbhQueryPortState(a1);
  if ( a3 )
    *a3 = v46;
  if ( (result & 0xC0000000) == 0xC0000000 )
  {
    *(_DWORD *)(v6 + 2788) = 1073807368;
    return result;
  }
  if ( (v47 & 0x200) != 0 )
  {
    *(_DWORD *)(v6 + 1160) = 0;
  }
  else if ( (v47 & 0x400) != 0 )
  {
    *(_DWORD *)(v6 + 1160) = 2;
  }
  else
  {
    *(_DWORD *)(v6 + 1160) = 1;
  }
  Log(a1, 4, 1936999473, (_DWORD)a2, *(int *)(v6 + 1160));
  v49 = 18;
  v48 = 0;
  v15 = *(_QWORD *)(v6 + 1152);
  v16 = FdoExt(a1);
  v17 = *(int (__fastcall **)(_QWORD, __int64, __int64, int *, _QWORD, int *))(v16 + 4272);
  if ( !v17 || v17(*(_QWORD *)(v16 + 4232), v15, v6 + 1392, &v49, 0LL, &v48) < 0 )
    goto LABEL_105;
  UsbhGetInitRegUsbDeviceFlags(v18, (__int64)a2);
  if ( !*(_BYTE *)(v6 + 2855) )
    goto LABEL_22;
  if ( (int)UsbhSendMsOs20AltEnumCommand(a1, a2, v6 + 2848) < 0 )
    goto LABEL_55;
  if ( (int)UsbhGetDeviceDescriptor(a1, a2) < 0 )
  {
LABEL_105:
    *(_DWORD *)(v6 + 2788) = 1073807360;
    return 3221225485LL;
  }
  if ( !UsbhValidateDeviceDescriptor(a1, v6 + 1392, v28, 0LL, 0LL) )
  {
    *(_DWORD *)(v6 + 2788) = 1073807365;
    return 3221225485LL;
  }
  UsbhBusIf_SetMsOs20Support(a1, *(_QWORD *)(v6 + 1152), v6 + 1392, 0LL);
LABEL_22:
  result = UsbhGetDeviceInformation(a1, (__int64)a2);
  BosDescriptor = result;
  if ( (result & 0xC0000000) == 0xC0000000 )
    return result;
  if ( *(_WORD *)(v6 + 1394) <= 0x200u || (*(_DWORD *)(v6 + 1424) & 0x20000) != 0 )
    goto LABEL_24;
  BosDescriptor = UsbhGetBosDescriptor(*(_QWORD *)(v6 + 1176), a2, &v47);
  if ( BosDescriptor < 0 )
    return (unsigned int)BosDescriptor;
  AlternateUsbDescriptors = UsbhValidateBOSDescriptorSet(a1, *(_QWORD *)(v6 + 2392), v47, v50);
  if ( AlternateUsbDescriptors == 1 )
    *(_DWORD *)(v6 + 2772) |= 0x20u;
  v30 = v53;
  if ( v53 )
  {
    if ( !*((_BYTE *)v53 + 7) || (*(_DWORD *)(v6 + 1412) & 0x40000000) != 0 )
    {
LABEL_67:
      if ( v30 )
      {
        *v13 |= 1u;
        *(_DWORD *)(v6 + 1424) &= 0xFFFFF9FF;
        if ( *((_WORD *)v30 + 2) )
        {
          UsbhBusIf_SetMsOs20Support(a1, *(_QWORD *)(v6 + 1152), 0LL, *((unsigned __int8 *)v30 + 6));
          BosDescriptor = UsbhGetMsOs20DescriptorSet(a1, a2, v53);
          if ( BosDescriptor < 0 )
          {
            ValueData = *(unsigned __int16 *)(v6 + 1420);
            *(_DWORD *)(v6 + 2788) = 1073807388;
            UsbhEtwLogHubIrpEvent(
              a1,
              0LL,
              0LL,
              &USBHUB_ETW_EVENT_HUB_ENUM_MSOS20_DESC_FAILURE,
              ValueData,
              BosDescriptor);
            return (unsigned int)BosDescriptor;
          }
          AlternateUsbDescriptors = UsbhValidateMsOs20DescriptorSet(a1, a2, v53);
          if ( !AlternateUsbDescriptors )
          {
            ValueDataa = *(unsigned __int16 *)(v6 + 1420);
            *(_DWORD *)(v6 + 2788) = 1073807389;
            UsbhEtwLogHubIrpEvent(
              a1,
              0LL,
              0LL,
              &USBHUB_ETW_EVENT_HUB_ENUM_MSOS20_DESC_VALIDATION_FAILURE,
              ValueDataa,
              -1073741811);
            return 3221225485LL;
          }
          v34 = *v13;
          if ( (*v13 & 0x200) != 0 )
            *(_DWORD *)(v6 + 1412) |= 0x20u;
          if ( (*(_DWORD *)(v6 + 1172) & 0x10) != 0 && (*(_DWORD *)(v6 + 1412) & 4) == 0 && (v34 & 0x80u) != 0 )
          {
            LOBYTE(v33) = 1;
            v35 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 2824) + 5LL);
            if ( (*(_BYTE *)(*(_QWORD *)v59 + 2560LL) & 1) == 0 )
              v35 = 20LL;
            UsbhBusIf_SetClearRootPortResumeTime(a1, *(_QWORD *)(v6 + 1152), v33, v35);
            *(_DWORD *)(v6 + 1412) |= 0x20000000u;
          }
        }
      }
      goto LABEL_81;
    }
    v31 = *v53;
    v32 = v53;
    *v13 |= 4u;
    *(_QWORD *)(v6 + 2848) = v31;
    BosDescriptor = UsbhSendMsOs20AltEnumCommand(a1, a2, v32);
    if ( BosDescriptor >= 0 )
    {
      AlternateUsbDescriptors = UsbhGetAlternateUsbDescriptors(a1, a2, v50);
      if ( AlternateUsbDescriptors )
      {
        RtlWriteRegistryValue(2u, *(PCWSTR *)(v6 + 1136), L"MsOs20DescriptorSetInfo", 3u, (PVOID)(v6 + 2848), 8u);
        v30 = v53;
        goto LABEL_67;
      }
      return 3221225485LL;
    }
LABEL_55:
    *(_DWORD *)(v6 + 2788) = 1073807390;
    return 3221225485LL;
  }
LABEL_81:
  v36 = v54;
  if ( v54 )
  {
    *(_DWORD *)(v6 + 1424) |= 0x40000u;
    *(_DWORD *)(v6 + 3008) = *(_DWORD *)(v36 + 22);
    v56 = *(_QWORD *)(v6 + 3016);
    v37 = *(_DWORD *)(v36 + 22);
    v57 = 1;
    v58 = v37;
    ZwUpdateWnfStateData(&WNF_USB_TYPE_C_PARTNER_STATE, &v56, 13LL, 0LL, 0LL);
    UsbDualRoleFeaturesQueryLocalMachine(&v47);
    LOBYTE(v56) = 64;
    HIWORD(v56) = 0;
    LOWORD(v46) = 0;
    v38 = *(_BYTE *)(v54 + 21);
    *(_DWORD *)((char *)&v56 + 2) = v47;
    BYTE1(v56) = v38;
    BosDescriptor = UsbhSyncSendCommandToDevice(
                      *(_QWORD *)(v6 + 1176),
                      (_DWORD)a2,
                      (unsigned int)&v56,
                      0,
                      (__int64)&v46,
                      0,
                      (__int64)&v47);
    if ( BosDescriptor < 0 )
      Log(a1, 4, 1399075121, 0, 0LL);
  }
  if ( v55 )
  {
    result = UsbhGetBillboardInfo(*(_QWORD *)(v6 + 1176));
    BosDescriptor = result;
    if ( (int)result < 0 )
      return result;
  }
  if ( !*(_BYTE *)(v6 + 2700) && AlternateUsbDescriptors == 1 && v52 )
  {
    v39 = *(_OWORD *)(v52 + 4);
    *(_BYTE *)(v6 + 2700) = 1;
    *(_OWORD *)(v6 + 2684) = v39;
  }
  if ( v51 )
  {
    *(_DWORD *)(v6 + 1412) |= 0x80000u;
    *(_DWORD *)(v6 + 2772) |= 0x200u;
  }
LABEL_24:
  if ( BosDescriptor < 0 )
    return (unsigned int)BosDescriptor;
  if ( (*(_BYTE *)v13 & 2) == 0 )
  {
    MSOS_Descriptor = UsbhGetMSOS_Descriptor(a1, (__int64)a2);
    BosDescriptor = MSOS_Descriptor;
    if ( MSOS_Descriptor != -1073741637 && (MSOS_Descriptor & 0xC0000000) == 0xC0000000 )
    {
      v40 = &USBHUB_ETW_EVENT_HUB_ENUM_MSOS_DESC_FAILURE;
LABEL_95:
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, v40, *(unsigned __int16 *)(v6 + 1420), MSOS_Descriptor);
      return (unsigned int)BosDescriptor;
    }
  }
  result = UsbhUpdateUxdSettings(a1, a2, 0, v45);
  if ( (result & 0xC0000000) != 0xC0000000 )
  {
    MSOS_Descriptor = UsbhGetSerialNumber(a1, (__int64)a2, v6 + 2120);
    BosDescriptor = MSOS_Descriptor;
    v22 = (PDEVICE_OBJECT)(MSOS_Descriptor & 0xC0000000);
    if ( (_DWORD)v22 == -1073741824 )
    {
      v40 = &USBHUB_ETW_EVENT_HUB_ENUM_SERIAL_NUMBER_FAILURE;
      goto LABEL_95;
    }
    v23 = *(_QWORD *)(v6 + 2128);
    if ( v23 )
    {
      *(_DWORD *)(v6 + 1412) |= 0x200u;
      v22 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          v21,
          40,
          (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
          v23);
    }
    LOBYTE(v22) = (*(_DWORD *)(v6 + 1412) & 0x20) == 0;
    if ( ((unsigned __int8)v22 & _bittest((const signed __int32 *)(v6 + 1424), 0xAu)) != 0 )
      *(_QWORD *)(v6 + 2496) = UsbhGetMsOsExtendedConfigDesc(v22, a2);
    if ( (*(_DWORD *)(v6 + 1172) & 0x10) == 0 )
      BosDescriptor = UsbhGetMsOsContainerID(a1);
    if ( (BosDescriptor & 0xC0000000) == 0xC0000000 && BosDescriptor != -1073741637 )
      return (unsigned int)BosDescriptor;
    UsbhFreeID(v6 + 2088);
    UsbhFreeID(v6 + 2072);
    UsbhFreeID(v6 + 2104);
    v24 = UsbhBuildDeviceID(a1, a2, v6 + 2072);
    if ( v24 < 0 )
      goto LABEL_38;
    v24 = UsbhBuildHardwareID(a1, a2, v6 + 2088);
    if ( v24 >= 0 )
    {
      v24 = UsbhBuildCompatibleID(a1, a2, v6 + 2104);
      if ( (v24 & 0xC0000000) != 0xC0000000 )
        goto LABEL_38;
      UsbhFreeID(v6 + 2088);
    }
    UsbhFreeID(v6 + 2072);
LABEL_38:
    UsbhGetLanguageIdString(a1);
    if ( *(_BYTE *)(v6 + 1407) && (*(_DWORD *)(v6 + 1424) & 0x800) == 0 )
      UsbhGetProductIdString(*(_QWORD *)(v6 + 1176));
    if ( v24 >= 0
      && *(_DWORD *)(*(_QWORD *)v59 + 2536LL) == 1
      && *(_DWORD *)(v6 + 1160) == 1
      && *(_WORD *)(v6 + 1394) >= 0x200u )
    {
      LOWORD(v46) = 10;
      QualifierDescriptorFromDevice = UsbhGetQualifierDescriptorFromDevice(
                                        a1,
                                        (_DWORD)a2,
                                        v25,
                                        (unsigned int)v59,
                                        (__int64)&v46);
      if ( QualifierDescriptorFromDevice >= 0 )
      {
        LOBYTE(v44) = 0;
        UsbhException(
          a1,
          *(unsigned __int16 *)(v6 + 1420),
          100,
          (int)v59,
          10,
          QualifierDescriptorFromDevice,
          0,
          usbfile_bus_c,
          4488,
          v44);
        *(_DWORD *)(v6 + 1412) |= 1u;
      }
      v24 = 0;
    }
    v26 = Usbh__TestPoint__Ulong(a1, 6LL, (unsigned int)v24, *(unsigned __int16 *)(v6 + 1420));
    Log(a1, 4, 1936999486, (_DWORD)a2, v26);
    return v27;
  }
  return result;
}

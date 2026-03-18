/*
 * XREFs of UsbhConfigureUsbHub @ 0x1C001D394
 * Callers:
 *     UsbhInitialize @ 0x1C000F6C0 (UsbhInitialize.c)
 *     UsbhReinitialize @ 0x1C003C7FC (UsbhReinitialize.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C001C840 (UsbhSyncSendInternalIoctl.c)
 *     UsbhGetMaxPowerPerPort @ 0x1C001CB10 (UsbhGetMaxPowerPerPort.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C001CD1C (UsbhGetHubConfigurationDescriptor.c)
 *     UsbhParseConfigurationDescriptorEx @ 0x1C001D610 (UsbhParseConfigurationDescriptorEx.c)
 *     UsbhCreateConfigurationRequestEx @ 0x1C001D740 (UsbhCreateConfigurationRequestEx.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhConfigureUsbHub(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  int HubConfigurationDescriptor; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbp
  unsigned __int16 *v12; // rbx
  char v13; // al
  __int64 v14; // rdx
  int v15; // ecx
  int MaxPowerPerPort; // eax
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  int v21; // eax
  unsigned __int64 ConfigurationRequest; // rax
  unsigned __int64 v23; // rbp
  NTSTATUS v24; // r14d
  unsigned int v26; // edi
  int v27; // [rsp+20h] [rbp-58h]
  int v28; // [rsp+20h] [rbp-58h]
  int v29; // [rsp+20h] [rbp-58h]
  int v30; // [rsp+48h] [rbp-30h]
  PVOID P; // [rsp+88h] [rbp+10h] BYREF

  P = 0LL;
  v5 = FdoExt(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      26,
      (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids);
  HubConfigurationDescriptor = UsbhGetHubConfigurationDescriptor(a1, (unsigned __int16 **)&P, v6, v7);
  v11 = HubConfigurationDescriptor;
  if ( (HubConfigurationDescriptor & 0xC0000000) == 0xC0000000 )
  {
    Log(a1, 8, 1667655729, HubConfigurationDescriptor, 0LL);
    return (unsigned int)v11;
  }
  v12 = (unsigned __int16 *)P;
  if ( !P )
  {
    v26 = -1073741670;
    Log(a1, 8, 1667655730, -1073741670LL, 0LL);
    return v26;
  }
  v13 = 1;
  v14 = 3221229312LL;
  if ( *((_BYTE *)P + 1) == 2 )
  {
    v15 = (int)P;
  }
  else
  {
    v13 = 0;
    v15 = -1073737984;
  }
  if ( *(_BYTE *)P < 9u )
  {
    v13 = 0;
    v15 = -1073737984;
  }
  if ( !v13 )
  {
    LOBYTE(v30) = 0;
    v26 = -1073741823;
    UsbhException(a1, 0, 34, (int)P, *((unsigned __int16 *)P + 1), -1073741823, v15, usbfile_hub_c, 4321, v30);
    Log(a1, 8, 1667655731, v11, 0LL);
LABEL_34:
    ExFreePoolWithTag(v12, 0);
    return v26;
  }
  if ( (*((_BYTE *)P + 7) & 0x40) != 0 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        27,
        (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids);
    v5[760] = 500;
  }
  else
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        28,
        (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids);
    v5[760] = 100;
  }
  MaxPowerPerPort = UsbhGetMaxPowerPerPort(a1, v14, v9, v10);
  v5[758] = MaxPowerPerPort;
  if ( MaxPowerPerPort == 100 )
    *((_BYTE *)v12 + 8) = -6;
  v17 = v5[640];
  if ( (v17 & 0x40) != 0 )
  {
    v5[640] = v17 & 0xFFFEFFFF;
    v18 = UsbhParseConfigurationDescriptorEx(a1, (_DWORD)v12, v27, 9, -1, 2);
    if ( v18 )
    {
      v20 = (unsigned int)v5[640];
      LODWORD(v20) = v20 | 0x10000;
      v5[640] = v20;
      if ( (v20 & 0x200000) == 0 )
      {
        LODWORD(v20) = v20 | 0x80;
        v5[640] = v20;
        goto LABEL_22;
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          29,
          (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids);
    }
    v5[640] &= ~0x80u;
    v18 = UsbhParseConfigurationDescriptorEx(a1, (_DWORD)v12, v28, 9, -1, 1);
    if ( v18 )
      goto LABEL_23;
    v21 = v5[640];
    if ( (v21 & 1) != 0 )
      v5[640] = v21 & 0xFFFFFFBF;
    v18 = UsbhParseConfigurationDescriptorEx(a1, (_DWORD)v12, v29, 9, -1, 0);
  }
  else
  {
    v18 = UsbhParseConfigurationDescriptorEx(a1, (_DWORD)v12, v27, 9, -1, -1);
  }
LABEL_22:
  if ( !v18 )
  {
    LOBYTE(v30) = 0;
    v26 = -1073741823;
    UsbhException(a1, 0, 18, (int)v12, v12[1], -1073741823, 0, usbfile_hub_c, 4454, v30);
    Log(a1, 8, 1667655732, v12[1], (__int64)v12);
    goto LABEL_34;
  }
LABEL_23:
  LOBYTE(v20) = *(_BYTE *)(v18 + 5);
  if ( (_BYTE)v20 != 9 )
  {
    Log(a1, 8, 1667655733, (unsigned __int8)v20, (__int64)v12);
    v26 = -1073741823;
    goto LABEL_34;
  }
  ConfigurationRequest = UsbhCreateConfigurationRequestEx(v20, v12, v19, v18);
  v23 = ConfigurationRequest;
  if ( !ConfigurationRequest )
  {
    Log(a1, 8, 1667655734, 0LL, 0LL);
    v26 = -1073741670;
    goto LABEL_34;
  }
  v24 = UsbhSyncSendInternalIoctl(a1, 0x220003u, ConfigurationRequest, 0LL);
  Log(a1, 8, 1667655735, 0LL, v24);
  if ( v24 >= 0 )
  {
    *(_OWORD *)(v5 + 658) = *(_OWORD *)(v23 + 64);
    *((_QWORD *)v5 + 331) = *(_QWORD *)(v23 + 80);
    *((_QWORD *)v5 + 328) = *(_QWORD *)(v23 + 32);
  }
  ExFreePoolWithTag(v12, 0);
  ExFreePoolWithTag((PVOID)v23, 0);
  return (unsigned int)v24;
}

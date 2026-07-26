/*
 * XREFs of ndisPnPAddDevice @ 0x1C00ACC00
 * Callers:
 *     ndisWdmPnPAddDevice @ 0x1C00AD040 (ndisWdmPnPAddDevice.c)
 *     NdisWdfPnPAddDevice @ 0x1C00D29E0 (NdisWdfPnPAddDevice.c)
 * Callees:
 *     ??1NDIS_ADDDEVICE_PARAMETERS@@QEAA@XZ @ 0x1C001BDDC (--1NDIS_ADDDEVICE_PARAMETERS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF__guid_ @ 0x1C0042D58 (WPP_SF__guid_.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     Template_z @ 0x1C005F6E0 (Template_z.c)
 *     WPP_SF_S @ 0x1C005F76C (WPP_SF_S.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBGAEAV?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@@Z @ 0x1C00A7EA8 (-QueryValueString@KRegKey@@QEAAJPEBGAEAV-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z @ 0x1C00A7F1C (-QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z.c)
 *     ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00A8C10 (-ndisIsInNetSetupMode@@YA_NXZ.c)
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C00AAE98 (ndisIfReadInterfaceAddDeviceParameters.c)
 *     ?ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C00ACF9C (-ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     NdisMSleep @ 0x1C00B1AA0 (NdisMSleep.c)
 *     ??1?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@QEAA@XZ @ 0x1C00C3158 (--1-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@QEAA@XZ.c)
 *     ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C00D1EF4 (-ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETERS@@@Z @ 0x1C00D1F94 (-ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETE.c)
 *     ?NdisTraceLoggingTemporarilyScribbleNetLuidIndex@@YAXAEAT_NET_LUID_LH@@@Z @ 0x1C00E22DC (-NdisTraceLoggingTemporarilyScribbleNetLuidIndex@@YAXAEAT_NET_LUID_LH@@@Z.c)
 *     ?ndisSetupDeviceAdd@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00E24B0 (-ndisSetupDeviceAdd@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DeleteValue@KRegKey@@QEAAJPEBG@Z @ 0x1C00E2854 (-DeleteValue@KRegKey@@QEAAJPEBG@Z.c)
 *     ?SetValueBlob@KRegKey@@QEAAJPEBGKPEBE@Z @ 0x1C00E28C4 (-SetValueBlob@KRegKey@@QEAAJPEBGKPEBE@Z.c)
 *     ?SetValueUlong@KRegKey@@QEAAJPEBGK@Z @ 0x1C00E2950 (-SetValueUlong@KRegKey@@QEAAJPEBGK@Z.c)
 *     ndisAddDevice @ 0x1C00E88C0 (ndisAddDevice.c)
 */

__int64 __fastcall ndisPnPAddDevice(struct _DRIVER_OBJECT *a1, _DEVICE_OBJECT *a2, void *a3, __int64 a4)
{
  const UNICODE_STRING *p_DriverName; // rdi
  unsigned int v7; // r12d
  char v8; // r14
  NTSTATUS v9; // esi
  bool v10; // r13
  HANDLE v11; // rcx
  int v12; // eax
  const wchar_t **v13; // rdi
  const struct _UNICODE_STRING *v14; // rcx
  bool v15; // r14
  NTSTATUS v16; // eax
  NTSTATUS ValueUlong; // eax
  const UNICODE_STRING *v18; // rcx
  NTSTATUS v19; // eax
  __int64 Value; // rcx
  __int64 v21; // r8
  PVOID v23; // rcx
  const struct _UNICODE_STRING *v24; // rcx
  const UNICODE_STRING *v25; // rcx
  NTSTATUS v26; // eax
  char v27; // [rsp+40h] [rbp-C0h]
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE DeviceRegKey; // [rsp+58h] [rbp-A8h] BYREF
  PDRIVER_OBJECT DriverObject; // [rsp+60h] [rbp-A0h]
  void *v32; // [rsp+68h] [rbp-98h]
  __int64 v33; // [rsp+70h] [rbp-90h]
  UNICODE_STRING String2; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v35; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v36; // [rsp+98h] [rbp-68h] BYREF
  NDIS_ADDDEVICE_PARAMETERS Guid; // [rsp+B0h] [rbp-50h] BYREF
  GUID v38; // [rsp+100h] [rbp+0h] BYREF
  __int128 v39; // [rsp+110h] [rbp+10h] BYREF
  __int64 v40; // [rsp+120h] [rbp+20h]
  int v41; // [rsp+128h] [rbp+28h]
  wchar_t v42; // [rsp+12Ch] [rbp+2Ch]
  _OWORD v43[2]; // [rsp+130h] [rbp+30h] BYREF
  wchar_t v44; // [rsp+150h] [rbp+50h]
  _OWORD v45[2]; // [rsp+158h] [rbp+58h] BYREF
  int v46; // [rsp+178h] [rbp+78h]

  v33 = a4;
  DeviceRegKey = 0LL;
  v32 = a3;
  DriverObject = a1;
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qq(0x3Au, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, a1, a2);
  v46 = *(_DWORD *)L"p";
  String2.Buffer = (wchar_t *)v45;
  p_DriverName = &a1->DriverName;
  v41 = *(_DWORD *)L"va";
  v7 = 0;
  v42 = aDriverJnprva[14];
  v8 = 0;
  v45[0] = *(_OWORD *)L"\\Driver\\threadvmp";
  v27 = 0;
  v35.Buffer = (wchar_t *)&v39;
  v45[1] = *(_OWORD *)L"threadvmp";
  v44 = aDriverAsyncmac[16];
  v39 = *(_OWORD *)L"\\Driver\\jnprva";
  v36.Buffer = (wchar_t *)v43;
  *(_DWORD *)&String2.Length = 2359330;
  v40 = *(_QWORD *)L"jnprva";
  *(_DWORD *)&v35.Length = 1966108;
  v43[0] = *(_OWORD *)L"\\Driver\\AsyncMac";
  *(_DWORD *)&v36.Length = 2228256;
  v43[1] = *(_OWORD *)L"AsyncMac";
  if ( RtlEqualUnicodeString(p_DriverName, &String2, 0)
    || RtlEqualUnicodeString(p_DriverName, &v35, 0)
    || RtlEqualUnicodeString(p_DriverName, &v36, 0) )
  {
    v8 = 1;
    v27 = 1;
  }
  v9 = IoOpenDeviceRegistryKey(a2, 2u, 0xC2000000, &DeviceRegKey);
  if ( v9 < 0 )
  {
LABEL_35:
    if ( (unsigned __int8)byte_1C00895D4 >= 4u )
      WPP_SF_qD(0x3Du, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, (__int64)a2, v9);
    return (unsigned int)v9;
  }
  v10 = 0;
  while ( 1 )
  {
    P = 0LL;
    v11 = 0LL;
    if ( DeviceRegKey )
      v11 = DeviceRegKey;
    Handle = v11;
    v12 = KRegKey::QueryValueString(&Handle, (wchar_t *)L"NetCfgInstanceId", &P);
    v13 = (const wchar_t **)P;
    v9 = v12;
    if ( v12 != -1073741772 )
    {
      if ( v12 < 0 )
      {
        v23 = P;
        if ( !P )
        {
LABEL_33:
          if ( Handle )
            ZwClose(Handle);
          goto LABEL_35;
        }
LABEL_39:
        ExFreePoolWithTag(v23, 0x7274534Bu);
        goto LABEL_33;
      }
      v14 = (const struct _UNICODE_STRING *)((char *)P + 8);
      if ( !P )
        v14 = 0LL;
      if ( ndisIsNetSetupV2Interface(v14) )
        goto LABEL_15;
      v24 = (const struct _UNICODE_STRING *)(v13 + 1);
      if ( !v13 )
        v24 = 0LL;
      if ( !ndisIsNetSetupV1Interface(v24) )
      {
LABEL_15:
        P = 0LL;
        v15 = 0;
        v16 = KRegKey::QueryValueString(&Handle, L"RetiredNetCfgInstanceId", &P);
        v9 = v16;
        if ( v16 == -1073741772 )
        {
          KPtr<Rtl::KString,KDeletePtr<Rtl::KString>>::~KPtr<Rtl::KString,KDeletePtr<Rtl::KString>>(&P);
          goto LABEL_17;
        }
        if ( v16 || !ndisIsInNetSetupMode() )
        {
          if ( P )
            ExFreePoolWithTag(P, 0x7274534Bu);
          if ( v9 < 0 )
            goto LABEL_32;
LABEL_17:
          LODWORD(P) = 0;
          ValueUlong = KRegKey::QueryValueUlong((KRegKey *)&Handle, (wchar_t *)L"DriverUpdated", (unsigned int *)&P);
          v9 = ValueUlong;
          if ( ValueUlong == -1073741772 )
            goto LABEL_18;
          if ( !ValueUlong )
          {
            v9 = 0;
            v15 = (_DWORD)P != 0;
          }
          if ( v9 < 0 )
            goto LABEL_32;
          if ( !v15 )
            goto LABEL_18;
        }
        else
        {
          if ( (unsigned __int8)byte_1C00895D4 >= 3u )
            WPP_SF_S(0x39u, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, v13[2]);
          KPtr<Rtl::KString,KDeletePtr<Rtl::KString>>::~KPtr<Rtl::KString,KDeletePtr<Rtl::KString>>(&P);
        }
        v8 = v27;
        goto LABEL_67;
      }
      if ( (unsigned __int8)byte_1C00895D4 >= 3u )
        WPP_SF_S(0x38u, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, v13[2]);
      v25 = (const UNICODE_STRING *)(v13 + 1);
      if ( !v13 )
        v25 = 0LL;
      if ( RtlGUIDFromString(v25, &v38) >= 0 )
        KRegKey::SetValueBlob((KRegKey *)&Handle, L"SuggestedInstanceId", 0x10u, (const unsigned __int8 *)&v38);
      KRegKey::SetValueUlong((KRegKey *)&Handle, L"MigratedFromNetSetupV1", 1u);
      KRegKey::DeleteValue((KRegKey *)&Handle, L"NetCfgInstanceId");
    }
LABEL_67:
    if ( v8 && v7 < 0xA )
      KRegKey::SetValueUlong((KRegKey *)&Handle, L"NdisWaitingUsermodeToCompleteAddDevice", 0);
    ZwUpdateWnfStateData(&WNF_NDIS_ADAPTER_ARRIVAL, 0LL, 0, 0LL, 0LL, 0, 0);
    if ( (unsigned __int8)byte_1C00895D4 >= 4u )
      WPP_SF_(0x3Bu, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids);
    if ( !v8 || v7 >= 0xA )
      break;
    ++v7;
    NdisMSleep(0xF4240u);
    KRegKey::DeleteValue((KRegKey *)&Handle, L"NdisWaitingUsermodeToCompleteAddDevice");
    if ( v13 )
      ExFreePoolWithTag(v13, 0x7274534Bu);
    if ( Handle )
      ZwClose(Handle);
    v9 = IoOpenDeviceRegistryKey(a2, 2u, 0xC2000000, &DeviceRegKey);
    if ( v9 < 0 )
      goto LABEL_35;
  }
  LODWORD(P) = 0;
  v26 = KRegKey::QueryValueUlong((KRegKey *)&Handle, (wchar_t *)L"AlwaysStartDevice", (unsigned int *)&P);
  v9 = v26;
  if ( v26 == -1073741772 )
    goto LABEL_85;
  if ( !v26 )
  {
    v9 = 0;
    v10 = (_DWORD)P != 0;
  }
  if ( v9 < 0 )
    goto LABEL_32;
  if ( v10 )
  {
LABEL_18:
    v18 = (const UNICODE_STRING *)(v13 + 1);
    Guid.MiniportAdapterContext = v32;
    Guid.IsPhysicalMediumAvailable = 0;
    memset(&Guid.PhysicalMedium, 0, 29);
    Guid.Characteristics = 0;
    Guid.NetLuid.Value = 0LL;
    if ( !v13 )
      v18 = 0LL;
    v9 = RtlGUIDFromString(v18, &Guid.InterfaceGuid);
    if ( v9 >= 0 )
    {
      if ( (unsigned __int8)byte_1C00895D4 >= 4u )
        WPP_SF__guid_(0x3Cu, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, (__int64)&Guid);
      if ( (int)ndisIfReadInterfaceAddDeviceParameters(&Guid.InterfaceGuid.Data1) >= 0
        || ndisReadAddDeviceParametersV1(a2, (struct KRegKey *)&Handle, &Guid) )
      {
        LODWORD(P) = 0;
        if ( KRegKey::QueryValueUlong((KRegKey *)&Handle, (wchar_t *)L"IMMiniport", (unsigned int *)&P) >= 0 )
          Guid.IsImMiniport = (unsigned __int8)P & 1;
        else
          Guid.IsImMiniport = 0;
        KRegKey::QueryValueString(&Handle, L"ComponentID", &Guid.ComponentId._p);
        LODWORD(P) = 0;
        v19 = KRegKey::QueryValueUlong((KRegKey *)&Handle, (wchar_t *)L"NetLuidIndex", (unsigned int *)&P);
        Value = Guid.NetLuid.Value;
        v21 = 0xFFFFFFLL;
        if ( v19 < 0 || (_DWORD)P != ((Guid.NetLuid.Value >> 24) & 0xFFFFFF) )
        {
          KRegKey::SetValueUlong((KRegKey *)&Handle, L"NetLuidIndex", (Guid.NetLuid.Value >> 24) & 0xFFFFFF);
          NdisTraceLoggingTemporarilyScribbleNetLuidIndex(&Guid.NetLuid);
        }
        if ( (Microsoft_Windows_NDISEnableBits & 0x80u) != 0LL )
          Template_z(Value, &AddPnPDevice, v21, Guid.ExportName._p->Buffer);
        v9 = ndisAddDevice(DriverObject, a2, v33);
      }
      else
      {
        v9 = -1073741823;
      }
    }
    NDIS_ADDDEVICE_PARAMETERS::~NDIS_ADDDEVICE_PARAMETERS(&Guid);
LABEL_32:
    if ( !v13 )
      goto LABEL_33;
    v23 = v13;
    goto LABEL_39;
  }
LABEL_85:
  v9 = ndisSetupDeviceAdd(DriverObject, a2);
  if ( v13 )
    ExFreePoolWithTag(v13, 0x7274534Bu);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v9;
}

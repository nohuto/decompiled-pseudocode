/*
 * XREFs of ndisPnPAddDevice @ 0x1C00AEEAC
 * Callers:
 *     ndisWdmPnPAddDevice @ 0x1C00AEEA0 (ndisWdmPnPAddDevice.c)
 *     NdisWdfPnPAddDevice @ 0x1C00D3560 (NdisWdfPnPAddDevice.c)
 * Callees:
 *     ??1NDIS_ADDDEVICE_PARAMETERS@@QEAA@XZ @ 0x1C001D64C (--1NDIS_ADDDEVICE_PARAMETERS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     WPP_SF__guid_ @ 0x1C0053250 (WPP_SF__guid_.c)
 *     Template_z @ 0x1C005BB3C (Template_z.c)
 *     WPP_SF_S @ 0x1C005BBC8 (WPP_SF_S.c)
 *     ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00A0A30 (-ndisIsInNetSetupMode@@YA_NXZ.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBGAEAV?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@@Z @ 0x1C00A5484 (-QueryValueString@KRegKey@@QEAAJPEBGAEAV-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z @ 0x1C00A54F8 (-QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z.c)
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C00AF218 (ndisIfReadInterfaceAddDeviceParameters.c)
 *     ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C00AF3E4 (-ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     NdisMSleep @ 0x1C00AFE00 (NdisMSleep.c)
 *     ?ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETERS@@@Z @ 0x1C00B2338 (-ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETE.c)
 *     ?NdisTraceLoggingTemporarilyScribbleNetLuidIndex@@YAXAEAT_NET_LUID_LH@@@Z @ 0x1C00E26F8 (-NdisTraceLoggingTemporarilyScribbleNetLuidIndex@@YAXAEAT_NET_LUID_LH@@@Z.c)
 *     ?ndisSetupDeviceAdd@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00E28CC (-ndisSetupDeviceAdd@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DeleteValue@KRegKey@@QEAAJPEBG@Z @ 0x1C00E2C70 (-DeleteValue@KRegKey@@QEAAJPEBG@Z.c)
 *     ?SetValueBlob@KRegKey@@QEAAJPEBGKPEBE@Z @ 0x1C00E2CE0 (-SetValueBlob@KRegKey@@QEAAJPEBGKPEBE@Z.c)
 *     ?SetValueUlong@KRegKey@@QEAAJPEBGK@Z @ 0x1C00E2D6C (-SetValueUlong@KRegKey@@QEAAJPEBGK@Z.c)
 *     ndisAddDevice @ 0x1C00E7650 (ndisAddDevice.c)
 */

__int64 __fastcall ndisPnPAddDevice(struct _DRIVER_OBJECT *a1, struct _DEVICE_OBJECT *a2, void *a3, __int64 a4)
{
  unsigned int v6; // r12d
  char v7; // r14
  NTSTATUS v8; // esi
  HANDLE v9; // rcx
  int v10; // eax
  const wchar_t **v11; // rdi
  const struct _UNICODE_STRING *v12; // rcx
  bool v13; // r14
  NTSTATUS v14; // eax
  NTSTATUS ValueUlong; // eax
  const UNICODE_STRING *v16; // rcx
  NTSTATUS v17; // eax
  __int64 Value; // rcx
  __int64 v19; // r8
  PVOID v21; // rcx
  const UNICODE_STRING *v22; // rcx
  char v23; // [rsp+40h] [rbp-C0h]
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE DeviceRegKey; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING String2; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v29; // [rsp+78h] [rbp-88h] BYREF
  void *v30; // [rsp+88h] [rbp-78h]
  struct NDIS_ADDDEVICE_PARAMETERS Guid; // [rsp+90h] [rbp-70h] BYREF
  GUID v32; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v33; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v34; // [rsp+100h] [rbp+0h]
  int v35; // [rsp+108h] [rbp+8h]
  wchar_t v36; // [rsp+10Ch] [rbp+Ch]
  _OWORD v37[2]; // [rsp+110h] [rbp+10h] BYREF
  wchar_t v38; // [rsp+130h] [rbp+30h]

  v27 = a4;
  DeviceRegKey = 0LL;
  v30 = a3;
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_qq(0x3Au, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, a1, a2);
  v35 = *(_DWORD *)L"va";
  v6 = 0;
  v36 = aDriverJnprva[14];
  v7 = 0;
  v34 = *(_QWORD *)L"jnprva";
  String2.Buffer = (wchar_t *)&v33;
  v33 = *(_OWORD *)L"\\Driver\\jnprva";
  v38 = aDriverAsyncmac[16];
  v29.Buffer = (wchar_t *)v37;
  v23 = 0;
  *(_DWORD *)&String2.Length = 1966108;
  v37[0] = *(_OWORD *)L"\\Driver\\AsyncMac";
  *(_DWORD *)&v29.Length = 2228256;
  v37[1] = *(_OWORD *)L"AsyncMac";
  if ( RtlEqualUnicodeString(&a1->DriverName, &String2, 0) || RtlEqualUnicodeString(&a1->DriverName, &v29, 0) )
  {
    v7 = 1;
    v23 = 1;
  }
  while ( 1 )
  {
    v8 = IoOpenDeviceRegistryKey(a2, 2u, 0xC2000000, &DeviceRegKey);
    if ( v8 < 0 )
      goto LABEL_35;
    P = 0LL;
    v9 = 0LL;
    if ( DeviceRegKey )
      v9 = DeviceRegKey;
    Handle = v9;
    v10 = KRegKey::QueryValueString(&Handle, (wchar_t *)L"NetCfgInstanceId", &P);
    v11 = (const wchar_t **)P;
    v8 = v10;
    if ( v10 != -1073741772 )
    {
      if ( v10 < 0 )
      {
        v21 = P;
        if ( P )
          goto LABEL_39;
        goto LABEL_33;
      }
      v12 = (const struct _UNICODE_STRING *)((char *)P + 8);
      if ( !P )
        v12 = 0LL;
      if ( !ndisIsNetSetupV1Interface(v12) )
      {
        P = 0LL;
        v13 = 0;
        v14 = KRegKey::QueryValueString(&Handle, L"RetiredNetCfgInstanceId", &P);
        v8 = v14;
        if ( v14 == -1073741772 )
        {
          if ( P )
            ExFreePoolWithTag(P, 0x7274534Bu);
LABEL_16:
          LODWORD(P) = 0;
          ValueUlong = KRegKey::QueryValueUlong((KRegKey *)&Handle, (wchar_t *)L"DriverUpdated", (unsigned int *)&P);
          v8 = ValueUlong;
          if ( ValueUlong == -1073741772 )
            goto LABEL_17;
          if ( !ValueUlong )
          {
            v8 = 0;
            v13 = (_DWORD)P != 0;
          }
          if ( v8 < 0 )
            goto LABEL_32;
          if ( !v13 )
          {
LABEL_17:
            v16 = (const UNICODE_STRING *)(v11 + 1);
            Guid.MiniportAdapterContext = v30;
            Guid.IsPhysicalMediumAvailable = 0;
            memset(&Guid.PhysicalMedium, 0, 29);
            Guid.Characteristics = 0;
            Guid.NetLuid.Value = 0LL;
            if ( !v11 )
              v16 = 0LL;
            v8 = RtlGUIDFromString(v16, &Guid.InterfaceGuid);
            if ( v8 >= 0 )
            {
              if ( (unsigned __int8)byte_1C0085314 >= 4u )
                WPP_SF__guid_(0x3Cu, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)&Guid);
              if ( (int)ndisIfReadInterfaceAddDeviceParameters(&Guid) >= 0
                || ndisReadAddDeviceParametersV1(a2, (struct KRegKey *)&Handle, &Guid) )
              {
                LODWORD(P) = 0;
                if ( KRegKey::QueryValueUlong((KRegKey *)&Handle, (wchar_t *)L"IMMiniport", (unsigned int *)&P) >= 0 )
                  Guid.IsImMiniport = (unsigned __int8)P & 1;
                else
                  Guid.IsImMiniport = 0;
                KRegKey::QueryValueString(&Handle, L"ComponentID", (void **)&Guid.ComponentId._p);
                LODWORD(P) = 0;
                v17 = KRegKey::QueryValueUlong((KRegKey *)&Handle, (wchar_t *)L"NetLuidIndex", (unsigned int *)&P);
                Value = Guid.NetLuid.Value;
                v19 = 0xFFFFFFLL;
                if ( v17 < 0 || (_DWORD)P != ((Guid.NetLuid.Value >> 24) & 0xFFFFFF) )
                {
                  KRegKey::SetValueUlong((KRegKey *)&Handle, L"NetLuidIndex", (Guid.NetLuid.Value >> 24) & 0xFFFFFF);
                  NdisTraceLoggingTemporarilyScribbleNetLuidIndex(&Guid.NetLuid);
                }
                if ( (Microsoft_Windows_NDISEnableBits & 0x80u) != 0LL )
                  Template_z(Value, &AddPnPDevice, v19, Guid.ExportName._p->Buffer);
                v8 = ndisAddDevice(a1, a2, v27);
              }
              else
              {
                v8 = -1073741823;
              }
            }
            NDIS_ADDDEVICE_PARAMETERS::~NDIS_ADDDEVICE_PARAMETERS(&Guid);
LABEL_32:
            if ( !v11 )
              goto LABEL_33;
            v21 = v11;
LABEL_39:
            ExFreePoolWithTag(v21, 0x7274534Bu);
LABEL_33:
            if ( Handle )
              ZwClose(Handle);
LABEL_35:
            if ( (unsigned __int8)byte_1C0085314 >= 4u )
              WPP_SF_qD(0x3Du, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)a2, v8);
            return (unsigned int)v8;
          }
        }
        else
        {
          if ( v14 || !ndisIsInNetSetupMode() )
          {
            if ( P )
              ExFreePoolWithTag(P, 0x7274534Bu);
            if ( v8 < 0 )
              goto LABEL_32;
            goto LABEL_16;
          }
          if ( (unsigned __int8)byte_1C0085314 >= 3u )
            WPP_SF_S(0x39u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, v11[2]);
          if ( P )
            ExFreePoolWithTag(P, 0x7274534Bu);
        }
        v7 = v23;
        goto LABEL_50;
      }
      if ( (unsigned __int8)byte_1C0085314 >= 3u )
        WPP_SF_S(0x38u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, v11[2]);
      v22 = (const UNICODE_STRING *)(v11 + 1);
      if ( !v11 )
        v22 = 0LL;
      if ( RtlGUIDFromString(v22, &v32) >= 0 )
        KRegKey::SetValueBlob((KRegKey *)&Handle, L"SuggestedInstanceId", 0x10u, (const unsigned __int8 *)&v32);
      KRegKey::SetValueUlong((KRegKey *)&Handle, L"MigratedFromNetSetupV1", 1u);
      KRegKey::DeleteValue((KRegKey *)&Handle, L"NetCfgInstanceId");
    }
LABEL_50:
    if ( v7 && v6 < 0xA )
      KRegKey::SetValueUlong((KRegKey *)&Handle, L"NdisWaitingUsermodeToCompleteAddDevice", 0);
    ZwUpdateWnfStateData(&WNF_NDIS_ADAPTER_ARRIVAL, 0LL, 0, 0LL, 0LL, 0, 0);
    if ( (unsigned __int8)byte_1C0085314 >= 4u )
      WPP_SF_(0x3Bu, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids);
    if ( !v7 || v6 >= 0xA )
      break;
    ++v6;
    NdisMSleep(0xF4240u);
    KRegKey::DeleteValue((KRegKey *)&Handle, L"NdisWaitingUsermodeToCompleteAddDevice");
    if ( v11 )
      ExFreePoolWithTag(v11, 0x7274534Bu);
    if ( Handle )
      ZwClose(Handle);
  }
  v8 = ndisSetupDeviceAdd(a1, a2);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x7274534Bu);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v8;
}

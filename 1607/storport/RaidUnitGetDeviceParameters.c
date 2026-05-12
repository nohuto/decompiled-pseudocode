/*
 * XREFs of RaidUnitGetDeviceParameters @ 0x1C005A2F4
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C0058E58 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0014C64 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0018D00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     memset @ 0x1C001AD80 (memset.c)
 *     WPP_SF_q @ 0x1C002AF28 (WPP_SF_q.c)
 *     WPP_SF_qddd @ 0x1C002B2A8 (WPP_SF_qddd.c)
 */

int __fastcall RaidUnitGetDeviceParameters(__int64 a1)
{
  struct _DEVICE_OBJECT *v2; // rcx
  UINT32 *v3; // rsi
  int *v4; // rdi
  int *v5; // r14
  PDEVICE_OBJECT *v6; // rax
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  __int64 v10; // rcx
  UINT32 cData[2]; // [rsp+28h] [rbp-E0h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+30h] [rbp-D8h]
  int v14; // [rsp+38h] [rbp-D0h]
  __int16 v15; // [rsp+48h] [rbp-C0h] BYREF
  char v16; // [rsp+4Ah] [rbp-BEh] BYREF
  int v17; // [rsp+4Ch] [rbp-BCh] BYREF
  UINT32 v18; // [rsp+50h] [rbp-B8h] BYREF
  int v19; // [rsp+54h] [rbp-B4h] BYREF
  int v20; // [rsp+58h] [rbp-B0h] BYREF
  int v21; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v22; // [rsp+60h] [rbp-A8h] BYREF
  void *DeviceRegKey; // [rsp+68h] [rbp-A0h] BYREF
  void *KeyHandle; // [rsp+70h] [rbp-98h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR v27; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v28; // [rsp+D8h] [rbp-30h]
  __int64 v29; // [rsp+E0h] [rbp-28h]
  __int64 v30; // [rsp+E8h] [rbp-20h]
  __int64 v31; // [rsp+F0h] [rbp-18h]
  int *v32; // [rsp+F8h] [rbp-10h]
  __int64 v33; // [rsp+100h] [rbp-8h]
  __int16 *v34; // [rsp+108h] [rbp+0h]
  __int64 v35; // [rsp+110h] [rbp+8h]
  char *v36; // [rsp+118h] [rbp+10h]
  __int64 v37; // [rsp+120h] [rbp+18h]
  char *v38; // [rsp+128h] [rbp+20h]
  __int64 v39; // [rsp+130h] [rbp+28h]
  UINT32 *v40; // [rsp+138h] [rbp+30h]
  __int64 v41; // [rsp+140h] [rbp+38h]
  int *v42; // [rsp+148h] [rbp+40h]
  __int64 v43; // [rsp+150h] [rbp+48h]
  int *v44; // [rsp+158h] [rbp+50h]
  __int64 v45; // [rsp+160h] [rbp+58h]
  int *v46; // [rsp+168h] [rbp+60h]
  __int64 v47; // [rsp+170h] [rbp+68h]
  __int64 *v48; // [rsp+178h] [rbp+70h]
  __int64 v49; // [rsp+180h] [rbp+78h]
  _QWORD v50[50]; // [rsp+188h] [rbp+80h] BYREF

  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  ObjectAttributes.Length = 0;
  memset(&ObjectAttributes.RootDirectory, 0, 0x28uLL);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x4Bu,
      (__int64)&WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids,
      a1);
  }
  v2 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  v3 = (UINT32 *)(a1 + 1512);
  v4 = (int *)(a1 + 1516);
  *(_DWORD *)(a1 + 1512) = 20;
  v5 = (int *)(a1 + 1520);
  *(_DWORD *)(a1 + 1516) = 25;
  *(_DWORD *)(a1 + 1520) = 250;
  *(_DWORD *)(a1 + 1524) = 0;
  *(_DWORD *)(a1 + 1532) = -1;
  LODWORD(v6) = IoOpenDeviceRegistryKey(v2, 1u, 0x20019u, &DeviceRegKey);
  if ( (int)v6 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Storport");
    ObjectAttributes.RootDirectory = DeviceRegKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LODWORD(v6) = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( (int)v6 >= 0 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x4Cu,
          (__int64)&WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids,
          a1);
      }
      memset(v50, 0, 0x188uLL);
      v50[3] = a1 + 1516;
      LODWORD(v50[4]) = 67108868;
      LODWORD(v50[1]) = 288;
      LODWORD(v50[6]) = 4;
      v50[2] = L"QueueFullWaitIoPercentage";
      LODWORD(v50[8]) = 288;
      v50[9] = L"BusyPauseTime";
      v50[16] = L"BusyRetryCount";
      v50[23] = L"EnableLogoETW";
      v50[30] = L"DisableIdlePowerManagement";
      v50[31] = a1 + 1528;
      v50[33] = a1 + 1528;
      LODWORD(v50[11]) = 67108868;
      LODWORD(v50[13]) = 4;
      LODWORD(v50[15]) = 288;
      LODWORD(v50[18]) = 67108868;
      LODWORD(v50[20]) = 4;
      LODWORD(v50[22]) = 288;
      LODWORD(v50[25]) = 67108868;
      LODWORD(v50[27]) = 4;
      LODWORD(v50[29]) = 288;
      LODWORD(v50[32]) = 67108868;
      LODWORD(v50[34]) = 4;
      LODWORD(v50[36]) = 288;
      LODWORD(v50[39]) = 67108868;
      LODWORD(v50[41]) = 4;
      v50[37] = L"MinimumIdleTimeoutInMS";
      v50[5] = a1 + 1516;
      v50[10] = a1 + 1520;
      v50[12] = a1 + 1520;
      v50[17] = a1 + 1512;
      v50[19] = a1 + 1512;
      v50[24] = a1 + 1524;
      v50[26] = a1 + 1524;
      v50[38] = a1 + 1532;
      v50[40] = a1 + 1532;
      RtlQueryRegistryValuesEx(0x40000000LL, KeyHandle, v50, 0LL, 0LL);
      if ( (unsigned int)*v4 > 0x64 )
        *v4 = 25;
      if ( (unsigned int)dword_1C004F010 > 5 && TlgKeywordOn(v7, 0x400000000000uLL) )
      {
        v10 = *(_QWORD *)(a1 + 24);
        v17 = *(_DWORD *)(v10 + 56);
        v15 = *(_WORD *)(a1 + 88);
        v16 = *(_BYTE *)(a1 + 90);
        v18 = *v3;
        v19 = *v4;
        v20 = *v5;
        v21 = *(_DWORD *)(a1 + 1524);
        LODWORD(v22) = *(_DWORD *)(a1 + 1532);
        v28 = v10 + 5192;
        v30 = a1 + 1688;
        v32 = &v17;
        v34 = &v15;
        v36 = (char *)&v15 + 1;
        v38 = &v16;
        v40 = &v18;
        v42 = &v19;
        v44 = &v20;
        v46 = &v21;
        v48 = &v22;
        v29 = 16LL;
        v31 = 16LL;
        v33 = 4LL;
        v35 = 1LL;
        v37 = 1LL;
        v39 = 1LL;
        v41 = 4LL;
        v43 = 4LL;
        v45 = 4LL;
        v47 = 4LL;
        v49 = 4LL;
        TlgWrite((TraceLoggingHProvider)v10, &unk_1C00462B2, v8, v9, 0xDu, &v27);
      }
      v6 = &WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
      {
        LODWORD(v6) = HIDWORD(WPP_GLOBAL_Control->Timer);
        if ( ((unsigned __int8)v6 & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          v14 = *v4;
          LODWORD(pData) = *v5;
          cData[0] = *v3;
          LODWORD(v6) = WPP_SF_qddd(
                          (__int64)WPP_GLOBAL_Control->AttachedDevice,
                          0x4Du,
                          (__int64)&WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids,
                          a1,
                          *(_QWORD *)cData,
                          pData,
                          v14);
        }
      }
    }
  }
  if ( DeviceRegKey )
    LODWORD(v6) = ZwClose(DeviceRegKey);
  if ( KeyHandle )
    LODWORD(v6) = ZwClose(KeyHandle);
  return (int)v6;
}

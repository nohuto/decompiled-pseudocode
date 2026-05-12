/*
 * XREFs of RaidUnitGetDeviceParameters @ 0x1C00533C8
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C00510B8 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0011B18 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0014C54 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 *     WPP_SF_q @ 0x1C002786C (WPP_SF_q.c)
 *     WPP_SF_qddd @ 0x1C0027C28 (WPP_SF_qddd.c)
 */

int __fastcall RaidUnitGetDeviceParameters(__int64 a1)
{
  struct _DEVICE_OBJECT *v2; // rcx
  _DWORD *v3; // rsi
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
  char v15; // [rsp+48h] [rbp-C0h] BYREF
  char v16; // [rsp+49h] [rbp-BFh] BYREF
  char v17; // [rsp+4Ah] [rbp-BEh] BYREF
  int v18; // [rsp+4Ch] [rbp-BCh] BYREF
  void *DeviceRegKey; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  void *KeyHandle; // [rsp+60h] [rbp-A8h] BYREF
  int v22; // [rsp+68h] [rbp-A0h] BYREF
  int v23; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v24; // [rsp+70h] [rbp-98h] BYREF
  int v25; // [rsp+74h] [rbp-94h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR v28; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v29; // [rsp+D8h] [rbp-30h]
  __int64 v30; // [rsp+E0h] [rbp-28h]
  __int64 v31; // [rsp+E8h] [rbp-20h]
  __int64 v32; // [rsp+F0h] [rbp-18h]
  int *v33; // [rsp+F8h] [rbp-10h]
  __int64 v34; // [rsp+100h] [rbp-8h]
  char *v35; // [rsp+108h] [rbp+0h]
  __int64 v36; // [rsp+110h] [rbp+8h]
  char *v37; // [rsp+118h] [rbp+10h]
  __int64 v38; // [rsp+120h] [rbp+18h]
  char *v39; // [rsp+128h] [rbp+20h]
  __int64 v40; // [rsp+130h] [rbp+28h]
  __int64 *v41; // [rsp+138h] [rbp+30h]
  __int64 v42; // [rsp+140h] [rbp+38h]
  int *v43; // [rsp+148h] [rbp+40h]
  __int64 v44; // [rsp+150h] [rbp+48h]
  int *v45; // [rsp+158h] [rbp+50h]
  __int64 v46; // [rsp+160h] [rbp+58h]
  int *v47; // [rsp+168h] [rbp+60h]
  __int64 v48; // [rsp+170h] [rbp+68h]
  int *v49; // [rsp+178h] [rbp+70h]
  __int64 v50; // [rsp+180h] [rbp+78h]
  _QWORD v51[50]; // [rsp+188h] [rbp+80h] BYREF

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
      0x46u,
      (__int64)&WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids,
      a1);
  }
  v2 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  v3 = (_DWORD *)(a1 + 1512);
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
          0x47u,
          (__int64)&WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids,
          a1);
      }
      memset(v51, 0, 0x188uLL);
      v51[3] = a1 + 1516;
      LODWORD(v51[1]) = 32;
      v51[2] = L"QueueFullWaitIoPercentage";
      LODWORD(v51[8]) = 32;
      v51[9] = L"BusyPauseTime";
      LODWORD(v51[4]) = 4;
      v51[16] = L"BusyRetryCount";
      LODWORD(v51[6]) = 4;
      v51[23] = L"EnableLogoETW";
      v51[30] = L"DisableIdlePowerManagement";
      v51[31] = a1 + 1528;
      v51[33] = a1 + 1528;
      LODWORD(v51[11]) = 4;
      LODWORD(v51[13]) = 4;
      LODWORD(v51[15]) = 32;
      LODWORD(v51[18]) = 4;
      LODWORD(v51[20]) = 4;
      LODWORD(v51[22]) = 32;
      LODWORD(v51[25]) = 4;
      LODWORD(v51[27]) = 4;
      LODWORD(v51[29]) = 32;
      LODWORD(v51[32]) = 4;
      LODWORD(v51[34]) = 4;
      LODWORD(v51[36]) = 32;
      LODWORD(v51[39]) = 4;
      LODWORD(v51[41]) = 4;
      v51[37] = L"MinimumIdleTimeoutInMS";
      v51[5] = a1 + 1516;
      v51[10] = a1 + 1520;
      v51[12] = a1 + 1520;
      v51[17] = a1 + 1512;
      v51[19] = a1 + 1512;
      v51[24] = a1 + 1524;
      v51[26] = a1 + 1524;
      v51[38] = a1 + 1532;
      v51[40] = a1 + 1532;
      RtlQueryRegistryValuesEx(0x40000000LL, KeyHandle, v51, 0LL, 0LL);
      if ( (unsigned int)*v4 > 0x64 )
        *v4 = 25;
      if ( (unsigned int)dword_1C0048030 > 5 && TlgKeywordOn(v7, 0x400000000000uLL) )
      {
        v10 = *(_QWORD *)(a1 + 24);
        v24 = *(_DWORD *)(v10 + 56);
        v16 = *(_BYTE *)(a1 + 88);
        v15 = *(_BYTE *)(a1 + 89);
        v17 = *(_BYTE *)(a1 + 90);
        LODWORD(v20) = *v3;
        v23 = *v4;
        v22 = *v5;
        v18 = *(_DWORD *)(a1 + 1524);
        v25 = *(_DWORD *)(a1 + 1532);
        v29 = v10 + 5192;
        v31 = a1 + 1688;
        v33 = &v24;
        v35 = &v16;
        v37 = &v15;
        v39 = &v17;
        v41 = &v20;
        v43 = &v23;
        v45 = &v22;
        v47 = &v18;
        v49 = &v25;
        v30 = 16LL;
        v32 = 16LL;
        v34 = 4LL;
        v36 = 1LL;
        v38 = 1LL;
        v40 = 1LL;
        v42 = 4LL;
        v44 = 4LL;
        v46 = 4LL;
        v48 = 4LL;
        v50 = 4LL;
        TlgWrite((TraceLoggingHProvider)v10, &unk_1C004001A, v8, v9, 0xDu, &v28);
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
                          0x48u,
                          (__int64)&WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids,
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

/*
 * XREFs of RaidInitializeAdapter @ 0x1C004DBB8
 * Callers:
 *     RaDriverAddDevice @ 0x1C0008830 (RaDriverAddDevice.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C00090F8 (RaidDriverGetName.c)
 *     _TlgWrite @ 0x1C000F63C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000F6DC (_TlgKeywordOn.c)
 *     StorpInitializeAdapterTelemetry @ 0x1C00120E4 (StorpInitializeAdapterTelemetry.c)
 *     RaGetBusInterface @ 0x1C001231C (RaGetBusInterface.c)
 *     PortGetLinkTimeoutValue @ 0x1C00123B8 (PortGetLinkTimeoutValue.c)
 *     RaidAllocateDeviceProperty @ 0x1C0012424 (RaidAllocateDeviceProperty.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     memset @ 0x1C0013300 (memset.c)
 *     PortRegistryReadDeviceKey @ 0x1C004E2B4 (PortRegistryReadDeviceKey.c)
 *     PortRegistryWriteDeviceKey @ 0x1C004FBE4 (PortRegistryWriteDeviceKey.c)
 *     PortGetRegistrySettings @ 0x1C0050100 (PortGetRegistrySettings.c)
 *     PortGetDriverParameters @ 0x1C005065C (PortGetDriverParameters.c)
 *     PortReadStorageBusType @ 0x1C0050818 (PortReadStorageBusType.c)
 *     PortGetIoLatencyCapValue @ 0x1C00509AC (PortGetIoLatencyCapValue.c)
 *     PortGetIoTimeoutValue @ 0x1C0050A90 (PortGetIoTimeoutValue.c)
 *     RiAllocateMiniportDeviceExtension @ 0x1C0050B78 (RiAllocateMiniportDeviceExtension.c)
 */

__int64 __fastcall RaidInitializeAdapter(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PDEVICE_OBJECT DeviceObject,
        __int128 *a6,
        unsigned int a7)
{
  __int64 v7; // rsi
  int v9; // r13d
  __int128 v10; // xmm0
  int BusInterface; // r8d
  _QWORD **v12; // rdx
  _QWORD *i; // rax
  _QWORD *v14; // rcx
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 *v19; // rsi
  int DeviceKey; // eax
  unsigned int v21; // ecx
  char v22; // al
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  const struct _TlgProvider_t *v27; // rcx
  const struct _TlgProvider_t *v28; // rcx
  const GUID *v29; // r8
  const GUID *v30; // r9
  int v31; // eax
  int v32; // [rsp+30h] [rbp-D0h] BYREF
  UUID *p_Uuid; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v34; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v35; // [rsp+48h] [rbp-B8h] BYREF
  int v36; // [rsp+58h] [rbp-A8h] BYREF
  int v37; // [rsp+5Ch] [rbp-A4h] BYREF
  int v38; // [rsp+60h] [rbp-A0h] BYREF
  int v39; // [rsp+64h] [rbp-9Ch] BYREF
  int v40; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  int v42; // [rsp+80h] [rbp-80h] BYREF
  int v43; // [rsp+84h] [rbp-7Ch] BYREF
  int v44; // [rsp+88h] [rbp-78h] BYREF
  __int64 v45; // [rsp+90h] [rbp-70h] BYREF
  ULONG Seed; // [rsp+98h] [rbp-68h] BYREF
  int v47; // [rsp+9Ch] [rbp-64h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v49[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v50; // [rsp+B0h] [rbp-50h]
  _OWORD v51[21]; // [rsp+C0h] [rbp-40h] BYREF
  UUID Uuid; // [rsp+210h] [rbp+110h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+220h] [rbp+120h] BYREF
  const GUID *v54; // [rsp+240h] [rbp+140h]
  __int64 v55; // [rsp+248h] [rbp+148h]
  int *v56; // [rsp+250h] [rbp+150h]
  __int64 v57; // [rsp+258h] [rbp+158h]
  int *v58; // [rsp+260h] [rbp+160h]
  __int64 v59; // [rsp+268h] [rbp+168h]
  __int64 *v60; // [rsp+270h] [rbp+170h]
  __int64 v61; // [rsp+278h] [rbp+178h]
  int *v62; // [rsp+280h] [rbp+180h]
  __int64 v63; // [rsp+288h] [rbp+188h]
  __int64 *v64; // [rsp+290h] [rbp+190h]
  __int64 v65; // [rsp+298h] [rbp+198h]

  v7 = a1 + 296;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 32) = DeviceObject;
  v9 = a2;
  *(_QWORD *)(a1 + 24) = a4;
  v45 = a3;
  v34 = 0;
  v37 = 0;
  v39 = 0;
  v10 = *a6;
  *(_DWORD *)(a1 + 2072) = a7;
  *(_DWORD *)(a1 + 2156) = 1;
  *(_OWORD *)(a1 + 40) = v10;
  *(_BYTE *)(a1 + 4989) = 1;
  *(_DWORD *)(a1 + 5432) = 0;
  *(_QWORD *)(a1 + 296) = a1;
  v36 = 0;
  v38 = 0;
  v40 = 0;
  BusInterface = RaGetBusInterface(DeviceObject);
  if ( BusInterface == -1 )
    BusInterface = 0;
  if ( !BusInterface )
    *(_BYTE *)(a1 + 104) |= 8u;
  v12 = (_QWORD **)(*(_QWORD *)(a1 + 16) + 96LL);
  for ( i = *v12; i != v12; i = (_QWORD *)*i )
  {
    v14 = i - 26;
    if ( *((_DWORD *)i - 51) == BusInterface )
      goto LABEL_8;
  }
  v14 = 0LL;
LABEL_8:
  *(_QWORD *)(a1 + 528) = v14;
  if ( !v14 )
    return 3221225486LL;
  result = RiAllocateMiniportDeviceExtension(v7);
  if ( (int)result >= 0 )
  {
    PortGetDriverParameters(*(_QWORD *)(a1 + 16) + 40LL, a7, a1 + 2080);
    v16 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_DWORD *)(a1 + 2152) = 30;
    PortGetLinkTimeoutValue(v16, a7);
    v17 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 4204) = 0;
    PortGetIoTimeoutValue(v17 + 40, a1 + 4204);
    v18 = *(_QWORD *)(a1 + 16);
    v19 = (__int64 *)(a1 + 5000);
    *(_QWORD *)(a1 + 5000) = 0LL;
    PortGetIoLatencyCapValue(v18 + 40, a1 + 5000);
    if ( *(_QWORD *)(a1 + 5000) )
      *v19 = 10000LL * *(_QWORD *)(a1 + 5000);
    RtlInitUnicodeString(&DestinationString, L"StorPort");
    RtlInitUnicodeString(&v35, L"TotalSenseDataBytes");
    p_Uuid = (UUID *)&v34;
    v32 = 4;
    DeviceKey = PortRegistryReadDeviceKey(
                  (_DWORD)DeviceObject,
                  (unsigned int)&DestinationString,
                  (unsigned int)&v35,
                  4,
                  (__int64)&p_Uuid,
                  (__int64)&v32);
    v21 = v34;
    if ( DeviceKey < 0 )
      v21 = 256;
    v34 = v21;
    if ( v21 <= 0x12 )
    {
      *(_BYTE *)(a1 + 4988) = 18;
    }
    else if ( v21 < 0xFF )
    {
      *(_BYTE *)(a1 + 4988) = v21;
    }
    else
    {
      *(_BYTE *)(a1 + 4988) = -1;
    }
    RtlInitUnicodeString(&v35, L"EnableIdlePowerManagement");
    *(_BYTE *)(a1 + 104) &= ~0x20u;
    p_Uuid = (UUID *)&v37;
    v32 = 4;
    if ( (int)PortRegistryReadDeviceKey(
                (_DWORD)DeviceObject,
                (unsigned int)&DestinationString,
                (unsigned int)&v35,
                4,
                (__int64)&p_Uuid,
                (__int64)&v32) >= 0 )
    {
      if ( v37 )
        *(_BYTE *)(a1 + 104) |= 0x20u;
      else
        *(_BYTE *)(a1 + 104) &= ~0x20u;
    }
    RtlInitUnicodeString(&v35, L"DisableRuntimePowerManagement");
    *(_BYTE *)(a1 + 108) &= ~0x10u;
    p_Uuid = (UUID *)&v39;
    v32 = 4;
    if ( (int)PortRegistryReadDeviceKey(
                (_DWORD)DeviceObject,
                (unsigned int)&DestinationString,
                (unsigned int)&v35,
                4,
                (__int64)&p_Uuid,
                (__int64)&v32) >= 0 )
    {
      if ( v39 )
        *(_BYTE *)(a1 + 108) |= 0x10u;
      else
        *(_BYTE *)(a1 + 108) &= ~0x10u;
    }
    RtlInitUnicodeString(&v35, L"DisableD3Cold");
    v22 = *(_BYTE *)(a1 + 108) & 0xF3 | 4;
    v32 = 4;
    *(_BYTE *)(a1 + 108) = v22;
    p_Uuid = (UUID *)&v36;
    if ( (int)PortRegistryReadDeviceKey(
                (_DWORD)DeviceObject,
                (unsigned int)&DestinationString,
                (unsigned int)&v35,
                4,
                (__int64)&p_Uuid,
                (__int64)&v32) >= 0 )
    {
      if ( v36 )
        *(_BYTE *)(a1 + 108) &= ~4u;
      else
        *(_BYTE *)(a1 + 108) |= 4u;
    }
    RtlInitUnicodeString(&v35, L"IdleTimeoutInMS");
    *(_DWORD *)(a1 + 5104) = 60000;
    v32 = 4;
    p_Uuid = (UUID *)&v38;
    if ( (int)PortRegistryReadDeviceKey(
                (_DWORD)DeviceObject,
                (unsigned int)&DestinationString,
                (unsigned int)&v35,
                4,
                (__int64)&p_Uuid,
                (__int64)&v32) >= 0 )
    {
      v31 = v38;
      *(_BYTE *)(a1 + 108) |= 0x40u;
      *(_DWORD *)(a1 + 5104) = v31;
    }
    RtlInitUnicodeString(&v35, L"UseDMAv3");
    *(_BYTE *)(a1 + 109) &= ~2u;
    p_Uuid = (UUID *)&v40;
    v32 = 4;
    if ( (int)PortRegistryReadDeviceKey(
                (_DWORD)DeviceObject,
                (unsigned int)&DestinationString,
                (unsigned int)&v35,
                4,
                (__int64)&p_Uuid,
                (__int64)&v32) >= 0 )
      *(_BYTE *)(a1 + 109) ^= (*(_BYTE *)(a1 + 109) ^ (2 * (v40 != 0))) & 2;
    *(_BYTE *)(a1 + 108) &= ~0x80u;
    *(_QWORD *)(a1 + 5096) = 0LL;
    *(_BYTE *)(a1 + 109) |= 0x10u;
    memset(v51, 0, 0x148uLL);
    v23 = *(_QWORD *)(a1 + 16);
    HIDWORD(v51[2]) = 0;
    LODWORD(v51[0]) = 255;
    v51[1] = _mm_load_si128((const __m128i *)&_xmm);
    LODWORD(v51[2]) = -1;
    PortGetRegistrySettings(v23 + 40, a7, v51);
    *(_QWORD *)(a1 + 4368) = *((_QWORD *)&v51[1] + 1);
    *(_QWORD *)(a1 + 4376) = *(_QWORD *)&v51[1];
    *(_DWORD *)(a1 + 4352) = v51[2];
    *(_DWORD *)(a1 + 4360) = HIDWORD(v51[2]);
    *(_QWORD *)(a1 + 4400) = 0xFFFFFFFFLL;
    *(_QWORD *)(a1 + 4384) = 0LL;
    *(_QWORD *)(a1 + 4392) = 0LL;
    *(_DWORD *)(a1 + 4356) = 6;
    if ( (unsigned __int8)PortReadStorageBusType(*(_QWORD *)(a1 + 16) + 40LL, &v44) )
      *(_DWORD *)(a1 + 4356) = v44;
    RaidDriverGetName(v45, (__int64)v49);
    *(_QWORD *)(a1 + 4800) = v50;
    RaidAllocateDeviceProperty(DeviceObject, v24, (_QWORD *)(a1 + 4808));
    Seed = MEMORY[0xFFFFF78000000320] ^ v9 ^ MEMORY[0xFFFFF78000000324] ^ (unsigned int)KeGetCurrentThread();
    *(_DWORD *)(a1 + 4816) = RtlRandomEx(&Seed);
    *(_DWORD *)(a1 + 5056) = -1;
    v25 = RaidLogListSize;
    *(_DWORD *)(a1 + 5060) = RaidLogListSize;
    if ( v25 )
      *(_QWORD *)(a1 + 5064) = a1 + 5504;
    else
      *(_QWORD *)(a1 + 5064) = 0LL;
    *(_QWORD *)&Uuid.Data1 = 0LL;
    *(_QWORD *)Uuid.Data4 = 0LL;
    RtlInitUnicodeString(&v35, L"AdapterGuid");
    p_Uuid = &Uuid;
    v32 = 16;
    if ( (int)PortRegistryReadDeviceKey(
                (_DWORD)DeviceObject,
                (unsigned int)&DestinationString,
                (unsigned int)&v35,
                3,
                (__int64)&p_Uuid,
                (__int64)&v32) < 0
      && ExUuidCreate(&Uuid) >= 0 )
    {
      PortRegistryWriteDeviceKey(
        (_DWORD)DeviceObject,
        (unsigned int)&DestinationString,
        (unsigned int)&v35,
        3,
        (__int64)p_Uuid,
        16);
    }
    *(UUID *)(a1 + 5412) = Uuid;
    StorpInitializeAdapterTelemetry(a1, v26);
    if ( (unsigned int)dword_1C0044050 > 5 )
    {
      if ( TlgKeywordOn(v27, 0x400000000000uLL) )
      {
        v43 = *(_DWORD *)(a1 + 2152);
        v42 = *(_DWORD *)(a1 + 4204);
        v48 = *v19;
        v47 = *(unsigned __int8 *)(a1 + 4988);
        LODWORD(v45) = *(_DWORD *)(a1 + 5104);
        v56 = &v43;
        v58 = &v42;
        v60 = &v48;
        v62 = &v47;
        v64 = &v45;
        v54 = v30;
        v55 = 16LL;
        v57 = 4LL;
        v59 = 4LL;
        v61 = 8LL;
        v63 = 4LL;
        v65 = 4LL;
        TlgWrite(v28, &unk_1C003CB8F, v29, v30, 8u, &pData);
      }
    }
    KeInitializeDpc(
      (PRKDPC)(*(_QWORD *)(a1 + 8) + 200LL),
      (PKDEFERRED_ROUTINE)RaidpAdapterDpcRoutine,
      *(PVOID *)(a1 + 8));
    return 0LL;
  }
  return result;
}

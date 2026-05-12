/*
 * XREFs of RaidInitializeAdapter @ 0x1C00596D8
 * Callers:
 *     RaDriverAddDevice @ 0x1C00159A0 (RaDriverAddDevice.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C000F5AC (RaidDriverGetName.c)
 *     PortGetLinkTimeoutValue @ 0x1C00102BC (PortGetLinkTimeoutValue.c)
 *     _TlgKeywordOn @ 0x1C0014C64 (_TlgKeywordOn.c)
 *     StorpInitializeAdapterTelemetry @ 0x1C00157A8 (StorpInitializeAdapterTelemetry.c)
 *     RaidAllocateDeviceProperty @ 0x1C0015858 (RaidAllocateDeviceProperty.c)
 *     RaGetBusInterface @ 0x1C0015900 (RaGetBusInterface.c)
 *     _TlgWrite @ 0x1C0018D00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     memset @ 0x1C001AD80 (memset.c)
 *     PortGetDriverParameters @ 0x1C00589DC (PortGetDriverParameters.c)
 *     PortGetRegistrySettings @ 0x1C0058A48 (PortGetRegistrySettings.c)
 *     PortRegistryReadDeviceKey @ 0x1C0059EF4 (PortRegistryReadDeviceKey.c)
 *     PortRegistryWriteDeviceKey @ 0x1C005A7AC (PortRegistryWriteDeviceKey.c)
 *     PortGetIoLatencyCapValue @ 0x1C005A804 (PortGetIoLatencyCapValue.c)
 *     PortGetIoTimeoutValue @ 0x1C005A8E8 (PortGetIoTimeoutValue.c)
 *     PortReadStorageBusType @ 0x1C005A9D0 (PortReadStorageBusType.c)
 *     RiAllocateMiniportDeviceExtension @ 0x1C005AAD8 (RiAllocateMiniportDeviceExtension.c)
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
  _DWORD *v18; // r14
  __int64 v19; // rcx
  __int64 *v20; // rsi
  int DeviceKey; // eax
  unsigned int v22; // ecx
  char v23; // al
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rdx
  const struct _TlgProvider_t *v28; // rcx
  const struct _TlgProvider_t *v29; // rcx
  const GUID *v30; // r8
  const GUID *v31; // r9
  int v32; // eax
  int v33; // [rsp+30h] [rbp-D0h] BYREF
  UUID *p_Uuid; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING v35; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v36; // [rsp+50h] [rbp-B0h] BYREF
  int v37; // [rsp+54h] [rbp-ACh] BYREF
  int v38; // [rsp+58h] [rbp-A8h] BYREF
  int v39; // [rsp+5Ch] [rbp-A4h] BYREF
  int v40; // [rsp+60h] [rbp-A0h] BYREF
  int v41; // [rsp+64h] [rbp-9Ch] BYREF
  int v42; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  int v44; // [rsp+80h] [rbp-80h] BYREF
  ULONG Seed; // [rsp+84h] [rbp-7Ch] BYREF
  int v46; // [rsp+88h] [rbp-78h] BYREF
  int v47; // [rsp+8Ch] [rbp-74h] BYREF
  int v48; // [rsp+90h] [rbp-70h] BYREF
  __int64 v49; // [rsp+98h] [rbp-68h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v51[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v52; // [rsp+B0h] [rbp-50h]
  _OWORD v53[21]; // [rsp+C0h] [rbp-40h] BYREF
  UUID Uuid; // [rsp+210h] [rbp+110h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+220h] [rbp+120h] BYREF
  const GUID *v56; // [rsp+240h] [rbp+140h]
  __int64 v57; // [rsp+248h] [rbp+148h]
  int *v58; // [rsp+250h] [rbp+150h]
  __int64 v59; // [rsp+258h] [rbp+158h]
  int *v60; // [rsp+260h] [rbp+160h]
  __int64 v61; // [rsp+268h] [rbp+168h]
  __int64 *v62; // [rsp+270h] [rbp+170h]
  __int64 v63; // [rsp+278h] [rbp+178h]
  int *v64; // [rsp+280h] [rbp+180h]
  __int64 v65; // [rsp+288h] [rbp+188h]
  __int64 *v66; // [rsp+290h] [rbp+190h]
  __int64 v67; // [rsp+298h] [rbp+198h]

  v7 = a1 + 296;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 32) = DeviceObject;
  v9 = a2;
  *(_QWORD *)(a1 + 24) = a4;
  v49 = a3;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v10 = *a6;
  *(_DWORD *)(a1 + 2072) = a7;
  *(_DWORD *)(a1 + 2156) = 1;
  *(_OWORD *)(a1 + 40) = v10;
  *(_BYTE *)(a1 + 4989) = 1;
  *(_DWORD *)(a1 + 5456) = 0;
  *(_QWORD *)(a1 + 296) = a1;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
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
    PortGetDriverParameters(*(_QWORD *)(a1 + 16) + 40LL, a7, (PVOID *)(a1 + 2080));
    v16 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_DWORD *)(a1 + 2152) = 30;
    PortGetLinkTimeoutValue(v16, a7);
    v17 = *(_QWORD *)(a1 + 16);
    v18 = (_DWORD *)(a1 + 4204);
    *(_DWORD *)(a1 + 4204) = 0;
    PortGetIoTimeoutValue(v17 + 40, a1 + 4204);
    v19 = *(_QWORD *)(a1 + 16);
    v20 = (__int64 *)(a1 + 5000);
    *(_QWORD *)(a1 + 5000) = 0LL;
    PortGetIoLatencyCapValue(v19 + 40, a1 + 5000);
    if ( *(_QWORD *)(a1 + 5000) )
      *v20 = 10000LL * *(_QWORD *)(a1 + 5000);
    RtlInitUnicodeString(&DestinationString, L"StorPort");
    RtlInitUnicodeString(&v35, L"TotalSenseDataBytes");
    p_Uuid = (UUID *)&v36;
    v33 = 4;
    DeviceKey = PortRegistryReadDeviceKey(
                  (_DWORD)DeviceObject,
                  (unsigned int)&DestinationString,
                  (unsigned int)&v35,
                  4,
                  (__int64)&p_Uuid,
                  (__int64)&v33);
    v22 = v36;
    if ( DeviceKey < 0 )
      v22 = 256;
    v36 = v22;
    if ( v22 <= 0x12 )
    {
      *(_BYTE *)(a1 + 4988) = 18;
    }
    else if ( v22 < 0xFF )
    {
      *(_BYTE *)(a1 + 4988) = v22;
    }
    else
    {
      *(_BYTE *)(a1 + 4988) = -1;
    }
    RtlInitUnicodeString(&v35, L"EnableIdlePowerManagement");
    *(_BYTE *)(a1 + 104) &= ~0x20u;
    p_Uuid = (UUID *)&v37;
    v33 = 4;
    if ( (int)PortRegistryReadDeviceKey(
                (_DWORD)DeviceObject,
                (unsigned int)&DestinationString,
                (unsigned int)&v35,
                4,
                (__int64)&p_Uuid,
                (__int64)&v33) >= 0 )
    {
      if ( v37 )
        *(_BYTE *)(a1 + 104) |= 0x20u;
      else
        *(_BYTE *)(a1 + 104) &= ~0x20u;
    }
    RtlInitUnicodeString(&v35, L"DisableRuntimePowerManagement");
    *(_BYTE *)(a1 + 108) &= ~0x10u;
    p_Uuid = (UUID *)&v38;
    v33 = 4;
    if ( (int)PortRegistryReadDeviceKey(
                (_DWORD)DeviceObject,
                (unsigned int)&DestinationString,
                (unsigned int)&v35,
                4,
                (__int64)&p_Uuid,
                (__int64)&v33) >= 0 )
    {
      if ( v38 )
        *(_BYTE *)(a1 + 108) |= 0x10u;
      else
        *(_BYTE *)(a1 + 108) &= ~0x10u;
    }
    RtlInitUnicodeString(&v35, L"DisableD3Cold");
    v23 = *(_BYTE *)(a1 + 108) & 0xF3 | 4;
    v33 = 4;
    *(_BYTE *)(a1 + 108) = v23;
    p_Uuid = (UUID *)&v39;
    if ( (int)PortRegistryReadDeviceKey(
                (_DWORD)DeviceObject,
                (unsigned int)&DestinationString,
                (unsigned int)&v35,
                4,
                (__int64)&p_Uuid,
                (__int64)&v33) >= 0 )
    {
      if ( v39 )
        *(_BYTE *)(a1 + 108) &= ~4u;
      else
        *(_BYTE *)(a1 + 108) |= 4u;
    }
    RtlInitUnicodeString(&v35, L"IdleTimeoutInMS");
    *(_DWORD *)(a1 + 5104) = 60000;
    v33 = 4;
    p_Uuid = (UUID *)&v40;
    if ( (int)PortRegistryReadDeviceKey(
                (_DWORD)DeviceObject,
                (unsigned int)&DestinationString,
                (unsigned int)&v35,
                4,
                (__int64)&p_Uuid,
                (__int64)&v33) >= 0 )
    {
      v32 = v40;
      *(_BYTE *)(a1 + 108) |= 0x40u;
      *(_DWORD *)(a1 + 5104) = v32;
    }
    RtlInitUnicodeString(&v35, L"UseDMAv3");
    *(_BYTE *)(a1 + 109) &= ~2u;
    p_Uuid = (UUID *)&v41;
    v33 = 4;
    if ( (int)PortRegistryReadDeviceKey(
                (_DWORD)DeviceObject,
                (unsigned int)&DestinationString,
                (unsigned int)&v35,
                4,
                (__int64)&p_Uuid,
                (__int64)&v33) >= 0 )
      *(_BYTE *)(a1 + 109) ^= (*(_BYTE *)(a1 + 109) ^ (2 * (v41 != 0))) & 2;
    RtlInitUnicodeString(&v35, L"PowerSrbTimeout");
    *(_DWORD *)(a1 + 5688) = *v18;
    p_Uuid = (UUID *)&v42;
    v33 = 4;
    if ( (int)PortRegistryReadDeviceKey(
                (_DWORD)DeviceObject,
                (unsigned int)&DestinationString,
                (unsigned int)&v35,
                4,
                (__int64)&p_Uuid,
                (__int64)&v33) >= 0
      && v42 )
    {
      *(_DWORD *)(a1 + 5688) = v42;
    }
    if ( *(_DWORD *)(a1 + 5688) > 0x6Eu )
      *(_DWORD *)(a1 + 5688) = 110;
    *(_BYTE *)(a1 + 108) &= ~0x80u;
    *(_QWORD *)(a1 + 5096) = 0LL;
    *(_BYTE *)(a1 + 109) |= 0x10u;
    memset(v53, 0, 0x148uLL);
    v24 = *(_QWORD *)(a1 + 16);
    HIDWORD(v53[2]) = 0;
    LODWORD(v53[0]) = 255;
    v53[1] = _mm_load_si128((const __m128i *)&_xmm);
    LODWORD(v53[2]) = -1;
    PortGetRegistrySettings(v24 + 40, a7);
    *(_QWORD *)(a1 + 4368) = *((_QWORD *)&v53[1] + 1);
    *(_QWORD *)(a1 + 4376) = *(_QWORD *)&v53[1];
    *(_DWORD *)(a1 + 4352) = v53[2];
    *(_DWORD *)(a1 + 4360) = HIDWORD(v53[2]);
    *(_QWORD *)(a1 + 4400) = 0xFFFFFFFFLL;
    *(_QWORD *)(a1 + 4384) = 0LL;
    *(_QWORD *)(a1 + 4392) = 0LL;
    *(_DWORD *)(a1 + 4356) = 6;
    if ( (unsigned __int8)PortReadStorageBusType(*(_QWORD *)(a1 + 16) + 40LL, &v44) )
      *(_DWORD *)(a1 + 4356) = v44;
    RaidDriverGetName(v49, (__int64)v51);
    *(_QWORD *)(a1 + 4800) = v52;
    RaidAllocateDeviceProperty(DeviceObject, v25, (_QWORD *)(a1 + 4808));
    Seed = MEMORY[0xFFFFF78000000320] ^ v9 ^ MEMORY[0xFFFFF78000000324] ^ (unsigned int)KeGetCurrentThread();
    *(_DWORD *)(a1 + 4816) = RtlRandomEx(&Seed);
    *(_DWORD *)(a1 + 5056) = -1;
    v26 = RaidLogListSize;
    *(_DWORD *)(a1 + 5060) = RaidLogListSize;
    if ( v26 )
      *(_QWORD *)(a1 + 5064) = a1 + 5760;
    else
      *(_QWORD *)(a1 + 5064) = 0LL;
    *(_QWORD *)&Uuid.Data1 = 0LL;
    *(_QWORD *)Uuid.Data4 = 0LL;
    RtlInitUnicodeString(&v35, L"AdapterGuid");
    v33 = 16;
    p_Uuid = &Uuid;
    if ( (int)PortRegistryReadDeviceKey(
                (_DWORD)DeviceObject,
                (unsigned int)&DestinationString,
                (unsigned int)&v35,
                3,
                (__int64)&p_Uuid,
                (__int64)&v33) < 0
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
    *(UUID *)(a1 + 5192) = Uuid;
    StorpInitializeAdapterTelemetry(a1, v27);
    if ( (unsigned int)dword_1C004F010 > 5 )
    {
      if ( TlgKeywordOn(v28, 0x400000000000uLL) )
      {
        v46 = *(_DWORD *)(a1 + 2152);
        v47 = *v18;
        v50 = *v20;
        v48 = *(unsigned __int8 *)(a1 + 4988);
        LODWORD(v49) = *(_DWORD *)(a1 + 5104);
        v58 = &v46;
        v60 = &v47;
        v62 = &v50;
        v64 = &v48;
        v66 = &v49;
        v56 = v31;
        v57 = 16LL;
        v59 = 4LL;
        v61 = 4LL;
        v63 = 8LL;
        v65 = 4LL;
        v67 = 4LL;
        TlgWrite(v29, &unk_1C0045E33, v30, v31, 8u, &pData);
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

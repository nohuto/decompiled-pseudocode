/*
 * XREFs of LogDriverInfoStream @ 0x1C0072C70
 * Callers:
 *     ?PnpEventStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C002E840 (-PnpEventStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C000F1DC (_TlgKeywordOn.c)
 *     ??1FxAutoString@@QEAA@XZ @ 0x1C0031C9C (--1FxAutoString@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0035B00 (__security_check_cookie.c)
 *     _TlgWrite @ 0x1C0062F80 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0067E98 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x1C0067EC4 (_TlgCreateWsz.c)
 *     FxGetDevicePropertyString @ 0x1C00727CC (FxGetDevicePropertyString.c)
 *     GetDriverInfo @ 0x1C0072970 (GetDriverInfo.c)
 *     GetFirstHardwareId @ 0x1C0072C14 (GetFirstHardwareId.c)
 *     RegistryWriteCurrentTime @ 0x1C00730C8 (RegistryWriteCurrentTime.c)
 */

void __fastcall LogDriverInfoStream(_FX_DRIVER_GLOBALS *DriverGlobals, FxDevice *Fdo)
{
  unsigned __int16 *Buffer; // rdi
  unsigned __int16 *v3; // rsi
  unsigned __int16 *v4; // r14
  const _TlgProvider_t *v7; // rcx
  const _TlgProvider_t *v8; // rcx
  const _GUID *v9; // r8
  const _GUID *v10; // r9
  bool v11; // [rsp+30h] [rbp-D0h] BYREF
  char v12; // [rsp+31h] [rbp-CFh] BYREF
  bool v13; // [rsp+32h] [rbp-CEh] BYREF
  bool v14; // [rsp+33h] [rbp-CDh] BYREF
  char v15; // [rsp+34h] [rbp-CCh] BYREF
  bool v16; // [rsp+35h] [rbp-CBh] BYREF
  bool v17; // [rsp+36h] [rbp-CAh] BYREF
  bool v18; // [rsp+37h] [rbp-C9h] BYREF
  bool v19; // [rsp+38h] [rbp-C8h] BYREF
  char v20; // [rsp+39h] [rbp-C7h] BYREF
  bool v21; // [rsp+3Ah] [rbp-C6h] BYREF
  bool v22; // [rsp+3Bh] [rbp-C5h] BYREF
  bool v23; // [rsp+3Ch] [rbp-C4h] BYREF
  bool v24; // [rsp+3Dh] [rbp-C3h] BYREF
  bool v25; // [rsp+3Eh] [rbp-C2h] BYREF
  bool v26; // [rsp+3Fh] [rbp-C1h] BYREF
  bool v27; // [rsp+40h] [rbp-C0h] BYREF
  bool v28; // [rsp+41h] [rbp-BFh] BYREF
  bool v29; // [rsp+42h] [rbp-BEh] BYREF
  bool v30; // [rsp+43h] [rbp-BDh] BYREF
  bool v31; // [rsp+44h] [rbp-BCh] BYREF
  bool v32; // [rsp+45h] [rbp-BBh] BYREF
  bool v33; // [rsp+46h] [rbp-BAh] BYREF
  FxTelemetryDriverInfo driverInfo; // [rsp+48h] [rbp-B8h] BYREF
  FxAutoString hardwareIDs; // [rsp+50h] [rbp-B0h] BYREF
  FxAutoString busEnum; // [rsp+60h] [rbp-A0h] BYREF
  FxAutoString setupClass; // [rsp+70h] [rbp-90h] BYREF
  FxAutoString manufacturer; // [rsp+80h] [rbp-80h] BYREF
  _EVENT_DATA_DESCRIPTOR _TlgData[31]; // [rsp+90h] [rbp-70h] BYREF

  Buffer = 0LL;
  *(_QWORD *)&hardwareIDs.m_UnicodeString.Length = 0LL;
  v3 = 0LL;
  hardwareIDs.m_UnicodeString.Buffer = 0LL;
  v4 = 0LL;
  *(_QWORD *)&setupClass.m_UnicodeString.Length = 0LL;
  setupClass.m_UnicodeString.Buffer = 0LL;
  driverInfo.Dword = 0;
  *(_QWORD *)&busEnum.m_UnicodeString.Length = 0LL;
  busEnum.m_UnicodeString.Buffer = 0LL;
  *(_QWORD *)&manufacturer.m_UnicodeString.Length = 0LL;
  manufacturer.m_UnicodeString.Buffer = 0LL;
  GetDriverInfo(DriverGlobals, Fdo, &driverInfo);
  if ( Fdo )
  {
    FxGetDevicePropertyString(Fdo, 5, &setupClass.m_UnicodeString);
    FxGetDevicePropertyString(Fdo, 15, &busEnum.m_UnicodeString);
    FxGetDevicePropertyString(Fdo, 1, &hardwareIDs.m_UnicodeString);
    GetFirstHardwareId(&hardwareIDs.m_UnicodeString);
    FxGetDevicePropertyString(Fdo, 8, &manufacturer.m_UnicodeString);
    Buffer = setupClass.m_UnicodeString.Buffer;
    v3 = busEnum.m_UnicodeString.Buffer;
    v4 = manufacturer.m_UnicodeString.Buffer;
  }
  if ( Tlgg_TelemetryProviderProv.LevelPlus1 > 5 && TlgKeywordOn(v7, 0x200000000000uLL) )
  {
    _TlgData[2].Ptr = (unsigned __int64)DriverGlobals->TelemetryContext;
    *(_QWORD *)&_TlgData[2].Size = 16LL;
    TlgCreateSz(&_TlgData[3], DriverGlobals->Public.DriverName);
    *(_QWORD *)&_TlgData[4].Size = 1LL;
    v12 = *(_BYTE *)&driverInfo.bitmap & 1;
    _TlgData[4].Ptr = (unsigned __int64)&v12;
    *(_QWORD *)&_TlgData[5].Size = 1LL;
    v26 = (*(_BYTE *)&driverInfo.bitmap & 2) != 0;
    _TlgData[5].Ptr = (unsigned __int64)&v26;
    *(_QWORD *)&_TlgData[6].Size = 1LL;
    v14 = (*(_BYTE *)&driverInfo.bitmap & 4) != 0;
    _TlgData[6].Ptr = (unsigned __int64)&v14;
    *(_QWORD *)&_TlgData[7].Size = 1LL;
    v31 = (*(_BYTE *)&driverInfo.bitmap & 8) != 0;
    _TlgData[7].Ptr = (unsigned __int64)&v31;
    *(_QWORD *)&_TlgData[8].Size = 1LL;
    v16 = (*(_BYTE *)&driverInfo.bitmap & 0x10) != 0;
    _TlgData[8].Ptr = (unsigned __int64)&v16;
    *(_QWORD *)&_TlgData[9].Size = 1LL;
    v28 = (*(_BYTE *)&driverInfo.bitmap & 0x20) != 0;
    _TlgData[9].Ptr = (unsigned __int64)&v28;
    *(_QWORD *)&_TlgData[10].Size = 1LL;
    v18 = (*(_BYTE *)&driverInfo.bitmap & 0x40) != 0;
    _TlgData[10].Ptr = (unsigned __int64)&v18;
    *(_QWORD *)&_TlgData[11].Size = 1LL;
    v33 = (*(_BYTE *)&driverInfo.bitmap & 0x80) != 0;
    _TlgData[11].Ptr = (unsigned __int64)&v33;
    *(_QWORD *)&_TlgData[12].Size = 1LL;
    v20 = *((_BYTE *)&driverInfo.bitmap + 1) & 1;
    _TlgData[12].Ptr = (unsigned __int64)&v20;
    *(_QWORD *)&_TlgData[13].Size = 1LL;
    v30 = (*(_WORD *)&driverInfo.bitmap & 0x200) != 0;
    _TlgData[13].Ptr = (unsigned __int64)&v30;
    v22 = (*(_WORD *)&driverInfo.bitmap & 0x400) != 0;
    _TlgData[14].Ptr = (unsigned __int64)&v22;
    *(_QWORD *)&_TlgData[14].Size = 1LL;
    v32 = (*(_WORD *)&driverInfo.bitmap & 0x800) != 0;
    _TlgData[15].Ptr = (unsigned __int64)&v32;
    *(_QWORD *)&_TlgData[15].Size = 1LL;
    v24 = (*(_WORD *)&driverInfo.bitmap & 0x1000) != 0;
    _TlgData[16].Ptr = (unsigned __int64)&v24;
    *(_QWORD *)&_TlgData[16].Size = 1LL;
    v29 = (*(_WORD *)&driverInfo.bitmap & 0x2000) != 0;
    _TlgData[17].Ptr = (unsigned __int64)&v29;
    *(_QWORD *)&_TlgData[17].Size = 1LL;
    v11 = (*(_WORD *)&driverInfo.bitmap & 0x4000) != 0;
    _TlgData[18].Ptr = (unsigned __int64)&v11;
    *(_QWORD *)&_TlgData[18].Size = 1LL;
    v13 = (*(_WORD *)&driverInfo.bitmap & 0x8000) != 0;
    _TlgData[19].Ptr = (unsigned __int64)&v13;
    *(_QWORD *)&_TlgData[19].Size = 1LL;
    v15 = BYTE2(driverInfo.Dword) & 1;
    _TlgData[20].Ptr = (unsigned __int64)&v15;
    *(_QWORD *)&_TlgData[20].Size = 1LL;
    v17 = (driverInfo.Dword & 0x20000) != 0;
    _TlgData[21].Ptr = (unsigned __int64)&v17;
    *(_QWORD *)&_TlgData[21].Size = 1LL;
    v19 = (driverInfo.Dword & 0x40000) != 0;
    _TlgData[22].Ptr = (unsigned __int64)&v19;
    *(_QWORD *)&_TlgData[22].Size = 1LL;
    v21 = (driverInfo.Dword & 0x80000) != 0;
    _TlgData[23].Ptr = (unsigned __int64)&v21;
    *(_QWORD *)&_TlgData[23].Size = 1LL;
    v23 = (driverInfo.Dword & 0x100000) != 0;
    _TlgData[24].Ptr = (unsigned __int64)&v23;
    v25 = (driverInfo.Dword & 0x200000) != 0;
    *(_QWORD *)&_TlgData[24].Size = 1LL;
    _TlgData[25].Ptr = (unsigned __int64)&v25;
    *(_QWORD *)&_TlgData[25].Size = 1LL;
    v27 = (driverInfo.Dword & 0x400000) != 0;
    _TlgData[26].Ptr = (unsigned __int64)&v27;
    *(_QWORD *)&_TlgData[26].Size = 1LL;
    TlgCreateWsz(&_TlgData[27], Buffer);
    TlgCreateWsz(&_TlgData[28], v3);
    TlgCreateWsz(&_TlgData[29], hardwareIDs.m_UnicodeString.Buffer);
    TlgCreateWsz(&_TlgData[30], v4);
    TlgWrite(v8, (char *)&TlgEvent_0._TlgChannel, v9, v10, 0x1Fu, _TlgData);
  }
  RegistryWriteCurrentTime(DriverGlobals);
  FxAutoString::~FxAutoString(&manufacturer);
  FxAutoString::~FxAutoString(&busEnum);
  FxAutoString::~FxAutoString(&setupClass);
  FxAutoString::~FxAutoString(&hardwareIDs);
}

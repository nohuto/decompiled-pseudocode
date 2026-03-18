/*
 * XREFs of ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x140001960
 * Callers:
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140001080 (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ @ 0x1400012B0 (-HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ.c)
 *     ?ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140001300 (-ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 *     ?SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z @ 0x140001530 (-SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z.c)
 *     wWinMain @ 0x140001AE0 (wWinMain.c)
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140001DD0 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140001EA0 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140001F70 (-StartComposition@CDwmAppHost@@AEAAJXZ.c)
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x140002020 (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140002170 (-Run@CDwmAppHost@@QEAAJXZ.c)
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140002220 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?SendComplexSyncRequestWow64@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z @ 0x1400022F0 (-SendComplexSyncRequestWow64@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     ?SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z @ 0x140002410 (-SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z.c)
 *     ?CheckForDwmGroupSid@@YAJXZ @ 0x140002B60 (-CheckForDwmGroupSid@@YAJXZ.c)
 *     ?SetDword@CSettingsManager@@AEAAJW4DwmSettingType@@PEBGK@Z @ 0x140004B28 (-SetDword@CSettingsManager@@AEAAJW4DwmSettingType@@PEBGK@Z.c)
 *     ?ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z @ 0x140004F50 (-ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z.c)
 *     ?SendComplexAsyncRequestNative@CPortClient@@AEAAJKPEBXF@Z @ 0x140005110 (-SendComplexAsyncRequestNative@CPortClient@@AEAAJKPEBXF@Z.c)
 *     ?SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z @ 0x140005280 (-SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     ?SendSimpleAsyncRequestNative@CPortClient@@AEAAJK@Z @ 0x140005440 (-SendSimpleAsyncRequestNative@CPortClient@@AEAAJK@Z.c)
 * Callees:
 *     ?IsHRInList@@YA_NJQEBJI@Z @ 0x1400019E0 (-IsHRInList@@YA_NJQEBJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x140001A00 (-IsOOM@@YA_NJ@Z.c)
 *     ?DoStackCapture@@YAXIJI@Z @ 0x140004CD8 (-DoStackCapture@@YAXIJI@Z.c)
 *     ?MilInstrumentationHandleFailure@@YAXIJKI@Z @ 0x140004E1C (-MilInstrumentationHandleFailure@@YAXIJKI@Z.c)
 */

void __fastcall MilInstrumentationCheckHR(
        unsigned int a1,
        const int *const a2,
        unsigned int a3,
        int a4,
        unsigned int a5)
{
  bool v8; // al
  unsigned int v9; // ecx
  const int *v10; // r11
  int v11; // r9d
  char v12; // r10

  v8 = IsOOM(a4);
  if ( (a1 & 0x10) == 0 || !v8 )
  {
    if ( !v10 || !a3 )
    {
      v10 = (const int *)&unk_140007420;
      a3 = 10;
    }
    if ( IsHRInList(v9, v10, a3) )
      goto LABEL_6;
LABEL_12:
    MilInstrumentationHandleFailure(v9, a4, a1, a5);
    return;
  }
  if ( !v10 || !a3 || !IsHRInList(v9, v10, a3) )
    goto LABEL_12;
LABEL_6:
  if ( (a1 & 4) != 0 )
  {
    if ( v12 )
      DoStackCapture(1u, v11, a5);
  }
}

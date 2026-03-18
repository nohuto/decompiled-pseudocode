/*
 * XREFs of _RegisterRawInputDevices @ 0x14016FDF8
 * Callers:
 *     NtUserRegisterRawInputDevices @ 0x14016FB50 (NtUserRegisterRawInputDevices.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x14029ABCC (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x14029AC88 (UnregisterModernAppThreadForRawKeyboard.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?UnregisterRawInputDevice@RawInput@InputTraceLogging@@SAXPEBUtagRAWINPUTDEVICE@@@Z @ 0x14016F220 (-UnregisterRawInputDevice@RawInput@InputTraceLogging@@SAXPEBUtagRAWINPUTDEVICE@@@Z.c)
 *     AllocateProcessHidTable @ 0x14016F584 (AllocateProcessHidTable.c)
 *     ?RegisterRawInputDevice@RawInput@InputTraceLogging@@SAXPEBUtagRAWINPUTDEVICE@@@Z @ 0x14016F65C (-RegisterRawInputDevice@RawInput@InputTraceLogging@@SAXPEBUtagRAWINPUTDEVICE@@@Z.c)
 *     ?HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x14016FFBC (-HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_IN.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x1401702C0 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     ?RawInputListener@RawInput@InputTraceLogging@@SAXPEBUtagPROCESS_HID_TABLE@@@Z @ 0x140170460 (-RawInputListener@RawInput@InputTraceLogging@@SAXPEBUtagPROCESS_HID_TABLE@@@Z.c)
 *     ?FixupOrphanedExclusiveRequests@@YAXPEAUtagPROCESSINFO@@@Z @ 0x140170930 (-FixupOrphanedExclusiveRequests@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401709C0 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x140170EF4 (-SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z.c)
 *     FreeHidProcessRequest @ 0x140171304 (FreeHidProcessRequest.c)
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1401713D4 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 */

__int64 __fastcall RegisterRawInputDevices(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 CurrentProcessWin32Process; // rax
  const struct tagPROCESS_HID_TABLE **v7; // rbx
  const struct tagPROCESS_HID_TABLE *v8; // rax
  unsigned int v9; // esi
  unsigned int v10; // edi
  const struct tagPROCESS_HID_TABLE *v11; // rdx
  unsigned int i; // esi
  __int64 v13; // r14
  struct tagPROCESS_HID_REQUEST *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 UserSessionState; // rax
  __int64 ProcessHidTable; // rax
  __int128 v23; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+78h] [rbp+10h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v7 = (const struct tagPROCESS_HID_TABLE **)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v7 = (const struct tagPROCESS_HID_TABLE **)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  v8 = v7[103];
  if ( v8 )
  {
    *((_QWORD *)v8 + 11) = 0LL;
    *((_DWORD *)v8 + 24) = 0;
  }
  v9 = 0;
  v10 = 1;
  while ( v9 < a2 )
  {
    v11 = v7[103];
    v23 = *(_OWORD *)(a1 + 16LL * v9);
    if ( !(unsigned int)HidRequestValidityCheck(&v23, v11, a3) )
      goto LABEL_14;
    ++v9;
  }
  if ( !v7[103] )
  {
    ProcessHidTable = AllocateProcessHidTable();
    v7[103] = (const struct tagPROCESS_HID_TABLE *)ProcessHidTable;
    if ( !ProcessHidTable )
    {
      UserSetLastError(8);
LABEL_14:
      v10 = 0;
      goto LABEL_15;
    }
    *(_QWORD *)(ProcessHidTable + 104) = v7;
  }
  for ( i = 0; i < a2; ++i )
  {
    v13 = a1 + 16LL * i;
    v24 = 0;
    v14 = SearchProcessHidRequest((struct tagPROCESSINFO *)v7, *(_WORD *)v13, *(_WORD *)(v13 + 2), &v24);
    if ( (*(_DWORD *)(v13 + 4) & 1) != 0 )
    {
      if ( v14 )
      {
        FreeHidProcessRequest(v14);
        InputTraceLogging::RawInput::UnregisterRawInputDevice((const struct tagRAWINPUTDEVICE *)v13);
      }
    }
    else
    {
      if ( !(unsigned int)SetProcDeviceRequest(v7, v13, v14, v24, a3) )
        goto LABEL_14;
      InputTraceLogging::RawInput::RegisterRawInputDevice((const struct tagRAWINPUTDEVICE *)v13, v15, v16, v17);
    }
  }
LABEL_15:
  if ( v7[103] )
  {
    AdjustLegacyDeviceFlags((struct tagPROCESSINFO *)v7);
    FixupOrphanedExclusiveRequests((struct tagPROCESSINFO *)v7);
    CleanupFreedTLCInfo();
    UserSessionState = W32GetUserSessionState(v19, v18);
    CHidInput::HandleDirectStartStopDeviceReadRequest(*(CHidInput **)(UserSessionState + 16832));
    InputTraceLogging::RawInput::RawInputListener(v7[103]);
  }
  return v10;
}

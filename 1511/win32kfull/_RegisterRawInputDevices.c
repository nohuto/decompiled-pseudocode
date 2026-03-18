/*
 * XREFs of _RegisterRawInputDevices @ 0x1C00893B4
 * Callers:
 *     NtUserRegisterRawInputDevices @ 0x1C008A0A0 (NtUserRegisterRawInputDevices.c)
 *     ?RegisterTabletButtonHandler@@YAXXZ @ 0x1C010C2C4 (-RegisterTabletButtonHandler@@YAXXZ.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1C01D557C (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01D58D0 (UnregisterModernAppThreadForRawKeyboard.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C0089530 (-HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_IN.c)
 *     ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x1C00896D0 (-SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0089760 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C0089A48 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x1C0089F68 (-IsLegacyDevice@@YAHGG@Z.c)
 *     ?HidDeviceStartStop@@YAXXZ @ 0x1C0089F88 (-HidDeviceStartStop@@YAXXZ.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C0089FF4 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     FreeHidProcessRequest @ 0x1C008A2BC (FreeHidProcessRequest.c)
 *     AllocateProcessHidTable @ 0x1C010A7B8 (AllocateProcessHidTable.c)
 */

__int64 __fastcall RegisterRawInputDevices(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v7; // rax
  unsigned int v8; // edi
  __int128 *v9; // rsi
  __int64 v10; // rdx
  unsigned int v11; // esi
  _DWORD *v12; // rdi
  struct tagPROCESS_HID_REQUEST *v13; // rax
  unsigned int v14; // edi
  __int64 v15; // rbx
  __int64 v16; // r10
  __int64 i; // r8
  __int64 ProcessHidTable; // rax
  __int64 *v20; // r8
  __int16 v21; // r11
  __int64 *j; // rax
  bool v23; // zf
  int v24; // eax
  __int128 v25; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v26; // [rsp+78h] [rbp+10h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  EnterDeviceInfoListCrit_();
  v7 = *(_QWORD *)(CurrentProcessWin32Process + 784);
  if ( v7 )
  {
    *(_QWORD *)(v7 + 88) = 0LL;
    *(_DWORD *)(v7 + 96) = 0;
  }
  v8 = 0;
  if ( a2 )
  {
    v9 = (__int128 *)a1;
    do
    {
      v10 = *(_QWORD *)(CurrentProcessWin32Process + 784);
      v25 = *v9;
      if ( !(unsigned int)HidRequestValidityCheck(&v25, v10, a3) )
        goto LABEL_23;
      ++v8;
      ++v9;
    }
    while ( v8 < a2 );
  }
  if ( !*(_QWORD *)(CurrentProcessWin32Process + 784) )
  {
    ProcessHidTable = AllocateProcessHidTable();
    *(_QWORD *)(CurrentProcessWin32Process + 784) = ProcessHidTable;
    if ( !ProcessHidTable )
    {
      UserSetLastError(8);
LABEL_23:
      v14 = 0;
      goto LABEL_14;
    }
  }
  v11 = 0;
  if ( a2 )
  {
    v12 = (_DWORD *)(a1 + 4);
    do
    {
      v13 = SearchProcessHidRequest(
              (struct tagPROCESSINFO *)CurrentProcessWin32Process,
              *((_WORD *)v12 - 2),
              *((_WORD *)v12 - 1),
              &v26);
      if ( (*v12 & 1) != 0 )
      {
        if ( v13 )
          FreeHidProcessRequest(v13);
      }
      else if ( !(unsigned int)SetProcDeviceRequest(CurrentProcessWin32Process, a1 + 16LL * v11, v13, v26, a3) )
      {
        goto LABEL_23;
      }
      ++v11;
      v12 += 4;
    }
    while ( v11 < a2 );
  }
  v14 = 1;
LABEL_14:
  if ( *(_QWORD *)(CurrentProcessWin32Process + 784) )
  {
    AdjustLegacyDeviceFlags((struct tagPROCESSINFO *)CurrentProcessWin32Process);
    v15 = *(_QWORD *)(CurrentProcessWin32Process + 784);
    v16 = v15 + 48;
    for ( i = *(_QWORD *)(v15 + 48); i != v16; i = *v20 )
    {
      if ( !(unsigned int)IsLegacyDevice(*(_WORD *)(i + 16), *(_WORD *)(i + 18)) )
      {
        for ( j = *(__int64 **)(v15 + 32); j != (__int64 *)(v15 + 32); j = (__int64 *)*j )
        {
          if ( *((_WORD *)j + 8) == v21 )
            goto LABEL_30;
        }
        j = 0LL;
LABEL_30:
        v23 = j == 0LL;
        v24 = *((_DWORD *)v20 + 5);
        if ( v23 )
        {
          if ( (v24 & 8) == 0 )
          {
            ++*(_DWORD *)(v20[3] + 36);
            *((_DWORD *)v20 + 5) |= 8u;
          }
        }
        else if ( (v24 & 8) != 0 )
        {
          --*(_DWORD *)(v20[3] + 36);
          *((_DWORD *)v20 + 5) &= ~8u;
        }
      }
    }
    CleanupFreedTLCInfo();
    HidDeviceStartStop();
  }
  LeaveDeviceInfoListCrit_();
  return v14;
}

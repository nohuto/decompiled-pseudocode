/*
 * XREFs of _RegisterRawInputDevices @ 0x1C00E1818
 * Callers:
 *     ?RegisterTabletButtonHandler@@YAXXZ @ 0x1C00D5778 (-RegisterTabletButtonHandler@@YAXXZ.c)
 *     NtUserRegisterRawInputDevices @ 0x1C00E1FC0 (NtUserRegisterRawInputDevices.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1C01CC74C (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01CC7F0 (UnregisterModernAppThreadForRawKeyboard.c)
 * Callees:
 *     ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x1C0009F60 (-FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C00E1A48 (-HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_IN.c)
 *     ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x1C00E1BEC (-SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00E1C7C (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?HidDeviceStartStop@@YAXXZ @ 0x1C00E1F58 (-HidDeviceStartStop@@YAXXZ.c)
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C00E2170 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x1C00E2690 (-IsLegacyDevice@@YAHGG@Z.c)
 *     FreeHidProcessRequest @ 0x1C00E26B0 (FreeHidProcessRequest.c)
 */

__int64 __fastcall RegisterRawInputDevices(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebp
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // edi
  __int128 *v10; // rsi
  __int64 v11; // rdx
  unsigned int v12; // esi
  _DWORD *v13; // rdi
  struct tagPROCESS_HID_REQUEST *v14; // rax
  unsigned int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // r10
  __int64 i; // r8
  __int64 v20; // r8
  _QWORD *v21; // rbx
  _QWORD *v22; // rcx
  struct tagHID_PAGEONLY_REQUEST *v23; // rbx
  struct tagHID_PAGEONLY_REQUEST *v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 *v31; // r8
  __int16 v32; // r11
  __int64 *j; // rax
  bool v34; // zf
  int v35; // eax
  __int128 v36; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v37; // [rsp+78h] [rbp+10h] BYREF

  v4 = a2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  EnterDeviceInfoListCrit_(v7);
  v8 = *(_QWORD *)(CurrentProcessWin32Process + 776);
  if ( v8 )
  {
    *(_QWORD *)(v8 + 88) = 0LL;
    *(_DWORD *)(v8 + 96) = 0;
  }
  v9 = 0;
  if ( v4 )
  {
    v10 = (__int128 *)a1;
    do
    {
      v11 = *(_QWORD *)(CurrentProcessWin32Process + 776);
      v36 = *v10;
      if ( !(unsigned int)HidRequestValidityCheck(&v36, v11, a3) )
        goto LABEL_35;
      ++v9;
      ++v10;
    }
    while ( v9 < v4 );
  }
  if ( !*(_QWORD *)(CurrentProcessWin32Process + 776) )
  {
    v26 = Win32AllocPoolWithQuotaZInit(104LL, 1953002325LL);
    v27 = (_QWORD *)v26;
    if ( v26 )
    {
      v28 = (_QWORD *)(v26 + 16);
      v28[1] = v28;
      *v28 = v28;
      v27[5] = v27 + 4;
      v27[4] = v27 + 4;
      v27[7] = v27 + 6;
      v27[6] = v27 + 6;
      v29 = &RawInputManagerObject::gHidRequestTable[4];
      v30 = RawInputManagerObject::gHidRequestTable[4];
      if ( *(_QWORD **)(v30 + 8) != &RawInputManagerObject::gHidRequestTable[4] )
        __fastfail(3u);
      ++gnHidProcess;
      *v27 = v30;
      v27[1] = v29;
      *(_QWORD *)(v30 + 8) = v27;
      *v29 = v27;
    }
    else
    {
      v27 = 0LL;
    }
    *(_QWORD *)(CurrentProcessWin32Process + 776) = v27;
    if ( !v27 )
    {
      UserSetLastError(8LL);
LABEL_35:
      v15 = 0;
      goto LABEL_14;
    }
  }
  v12 = 0;
  if ( v4 )
  {
    v13 = (_DWORD *)(a1 + 4);
    do
    {
      v14 = SearchProcessHidRequest(
              (struct tagPROCESSINFO *)CurrentProcessWin32Process,
              *((_WORD *)v13 - 2),
              *((_WORD *)v13 - 1),
              &v37);
      if ( (*v13 & 1) != 0 )
      {
        if ( v14 )
          FreeHidProcessRequest(v14);
      }
      else if ( !(unsigned int)SetProcDeviceRequest(CurrentProcessWin32Process, a1 + 16LL * v12, v14, v37, a3) )
      {
        goto LABEL_35;
      }
      ++v12;
      v13 += 4;
    }
    while ( v12 < v4 );
  }
  v15 = 1;
LABEL_14:
  if ( *(_QWORD *)(CurrentProcessWin32Process + 776) )
  {
    AdjustLegacyDeviceFlags((struct tagPROCESSINFO *)CurrentProcessWin32Process);
    v17 = *(_QWORD *)(CurrentProcessWin32Process + 776);
    v18 = v17 + 48;
    for ( i = *(_QWORD *)(v17 + 48); i != v18; i = *v31 )
    {
      if ( !(unsigned int)IsLegacyDevice(*(_WORD *)(i + 16), *(_WORD *)(i + 18)) )
      {
        for ( j = *(__int64 **)(v17 + 32); j != (__int64 *)(v17 + 32); j = (__int64 *)*j )
        {
          if ( *((_WORD *)j + 8) == v32 )
            goto LABEL_44;
        }
        j = 0LL;
LABEL_44:
        v34 = j == 0LL;
        v35 = *((_DWORD *)v31 + 5);
        if ( v34 )
        {
          if ( (v35 & 8) == 0 )
          {
            ++*(_DWORD *)(v31[3] + 36);
            *((_DWORD *)v31 + 5) |= 8u;
          }
        }
        else if ( (v35 & 8) != 0 )
        {
          --*(_DWORD *)(v31[3] + 36);
          *((_DWORD *)v31 + 5) &= ~8u;
        }
      }
    }
    v20 = RawInputManagerObject::gHidRequestTable[0];
    v21 = (_QWORD *)RawInputManagerObject::gHidRequestTable[0];
    while ( v21 != (_QWORD *)v20 )
    {
      v22 = v21;
      v21 = (_QWORD *)*v21;
      v16 = *((_DWORD *)v22 + 5) | *((_DWORD *)v22 + 6) | (unsigned int)(*((_DWORD *)v22 + 7) | *((_DWORD *)v22 + 8));
      if ( !(*((_DWORD *)v22 + 5) | *((_DWORD *)v22 + 6) | *((_DWORD *)v22 + 7) | *((_DWORD *)v22 + 8)) )
      {
        FreeHidPageOnlyRequest((struct tagHID_PAGEONLY_REQUEST *)v22, v16, v20);
        v20 = RawInputManagerObject::gHidRequestTable[0];
      }
    }
    v23 = *(struct tagHID_PAGEONLY_REQUEST **)(v20 + 16);
    while ( v23 != (struct tagHID_PAGEONLY_REQUEST *)(v20 + 16) )
    {
      v25 = v23;
      v23 = *(struct tagHID_PAGEONLY_REQUEST **)v23;
      if ( !*((_DWORD *)v25 + 5) )
      {
        FreeHidPageOnlyRequest(v25, v16, v20);
        v20 = RawInputManagerObject::gHidRequestTable[0];
      }
    }
    HidDeviceStartStop();
  }
  LeaveDeviceInfoListCrit_();
  return v15;
}

/*
 * XREFs of _RegisterRawInputDevices @ 0x1C0078618
 * Callers:
 *     NtUserRegisterRawInputDevices @ 0x1C0078480 (NtUserRegisterRawInputDevices.c)
 *     ?RegisterTabletButtonHandler@@YAXXZ @ 0x1C015AD94 (-RegisterTabletButtonHandler@@YAXXZ.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     FreeHidProcessRequest @ 0x1C00783D4 (FreeHidProcessRequest.c)
 *     ?HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@H@Z @ 0x1C007878C (-HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@H@Z.c)
 *     ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x1C00788D0 (-SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0078960 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?HidDeviceStartStop@@YAXXZ @ 0x1C0078C78 (-HidDeviceStartStop@@YAXXZ.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C0078CE4 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x1C0078D88 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x1C0079288 (-IsLegacyDevice@@YAHGG@Z.c)
 *     AllocateProcessHidTable @ 0x1C00795A0 (AllocateProcessHidTable.c)
 */

__int64 __fastcall RegisterRawInputDevices(__int64 a1, unsigned int a2, int a3)
{
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // edi
  __int128 *v11; // rsi
  unsigned int v12; // esi
  unsigned int *v13; // rdi
  struct tagPROCESS_HID_REQUEST *v14; // rax
  unsigned int v15; // edi
  __int64 v16; // rbx
  __int64 v17; // r10
  __int64 i; // r8
  __int64 ProcessHidTable; // rax
  __int64 *v21; // r8
  __int16 v22; // r11
  __int64 *j; // rax
  bool v24; // zf
  int v25; // eax
  __int128 v26; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v27; // [rsp+78h] [rbp+10h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  EnterDeviceInfoListCrit_(v7);
  v9 = *(_QWORD *)(CurrentProcessWin32Process + 784);
  if ( v9 )
  {
    *(_QWORD *)(v9 + 88) = 0LL;
    *(_DWORD *)(v9 + 96) = 0;
  }
  v10 = 0;
  if ( a2 )
  {
    v11 = (__int128 *)a1;
    do
    {
      v26 = *v11;
      if ( !(unsigned int)HidRequestValidityCheck((struct tagRAWINPUTDEVICE *const)&v26, a3) )
        goto LABEL_23;
      ++v10;
      ++v11;
    }
    while ( v10 < a2 );
  }
  if ( !*(_QWORD *)(CurrentProcessWin32Process + 784) )
  {
    ProcessHidTable = AllocateProcessHidTable();
    *(_QWORD *)(CurrentProcessWin32Process + 784) = ProcessHidTable;
    if ( !ProcessHidTable )
    {
      UserSetLastError(8);
LABEL_23:
      v15 = 0;
      goto LABEL_14;
    }
  }
  v12 = 0;
  if ( a2 )
  {
    v13 = (unsigned int *)(a1 + 4);
    do
    {
      v14 = SearchProcessHidRequest(
              (struct tagPROCESSINFO *)CurrentProcessWin32Process,
              *((_WORD *)v13 - 2),
              *((_WORD *)v13 - 1),
              &v27);
      v8 = *v13;
      if ( (v8 & 1) != 0 )
      {
        if ( v14 )
          FreeHidProcessRequest(v14, v27, *(struct tagPROCESS_HID_TABLE **)(CurrentProcessWin32Process + 784));
      }
      else if ( !(unsigned int)SetProcDeviceRequest(
                                 (struct tagPROCESSINFO *)CurrentProcessWin32Process,
                                 (struct tagRAWINPUTDEVICE *)(a1 + 16LL * v12),
                                 v14,
                                 v27,
                                 a3) )
      {
        goto LABEL_23;
      }
      ++v12;
      v13 += 4;
    }
    while ( v12 < a2 );
  }
  v15 = 1;
LABEL_14:
  if ( *(_QWORD *)(CurrentProcessWin32Process + 784) )
  {
    AdjustLegacyDeviceFlags((struct tagPROCESSINFO *)CurrentProcessWin32Process);
    v16 = *(_QWORD *)(CurrentProcessWin32Process + 784);
    v17 = v16 + 48;
    for ( i = *(_QWORD *)(v16 + 48); i != v17; i = *v21 )
    {
      if ( !(unsigned int)IsLegacyDevice(*(_WORD *)(i + 16), *(_WORD *)(i + 18)) )
      {
        for ( j = *(__int64 **)(v16 + 32); j != (__int64 *)(v16 + 32); j = (__int64 *)*j )
        {
          if ( *((_WORD *)j + 8) == v22 )
            goto LABEL_30;
        }
        j = 0LL;
LABEL_30:
        v24 = j == 0LL;
        v25 = *((_DWORD *)v21 + 5);
        if ( v24 )
        {
          if ( (v25 & 8) == 0 )
          {
            ++*(_DWORD *)(v21[3] + 36);
            *((_DWORD *)v21 + 5) |= 8u;
          }
        }
        else if ( (v25 & 8) != 0 )
        {
          --*(_DWORD *)(v21[3] + 36);
          *((_DWORD *)v21 + 5) &= ~8u;
        }
      }
    }
    CleanupFreedTLCInfo();
    HidDeviceStartStop();
  }
  LeaveDeviceInfoListCrit_(v8);
  return v15;
}

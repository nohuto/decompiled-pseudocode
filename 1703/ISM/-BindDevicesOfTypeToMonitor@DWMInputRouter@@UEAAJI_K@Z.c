/*
 * XREFs of ?BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z @ 0x1800136A0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?BindDevicesOfTypeToDisplayBinding@DWMInputRouter@@IEAAJII_N@Z @ 0x180016A5C (-BindDevicesOfTypeToDisplayBinding@DWMInputRouter@@IEAAJII_N@Z.c)
 *     ?GetDisplayBindingFromId@DWMInputRouter@@IEAAJIPEAPEAVDisplayBinding@@@Z @ 0x180016D7C (-GetDisplayBindingFromId@DWMInputRouter@@IEAAJIPEAPEAVDisplayBinding@@@Z.c)
 *     ?Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z @ 0x18001B2DC (-Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z.c)
 *     ?SetInputDisplay@DisplayBinding@@QEAAJPEAUIInputDisplay@@@Z @ 0x18001C6A4 (-SetInputDisplay@DisplayBinding@@QEAAJPEAUIInputDisplay@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DWMInputRouter::BindDevicesOfTypeToMonitor(DWMInputRouter *this, unsigned int a2, HMONITOR a3)
{
  unsigned int v6; // ebx
  int DisplayBindingFromId; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  int v10; // r9d
  struct IInputDisplay *v11; // rbx
  struct DisplayBinding *v12; // rcx
  struct IInputDisplay *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v21; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v22[3]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v23; // [rsp+50h] [rbp-10h] BYREF
  struct IInputDisplay *v24; // [rsp+90h] [rbp+30h] BYREF
  struct DisplayBinding *v25; // [rsp+A8h] [rbp+48h] BYREF

  v22[1] = -2LL;
  v21 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v6 = _InterlockedIncrement(&DisplayBinding::s_currentId);
  if ( v6 == -1 )
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v23 = DWM_COMPOSITOR_ID;
  DisplayBindingFromId = (*(__int64 (__fastcall **)(char *, _QWORD, __int128 *, _QWORD))(*((_QWORD *)this + 5) + 40LL))(
                           (char *)this + 40,
                           v6,
                           &v23,
                           0LL);
  v9 = DisplayBindingFromId;
  if ( DisplayBindingFromId < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
    {
LABEL_9:
      v11 = v24;
      goto LABEL_34;
    }
    v10 = 602;
LABEL_8:
    Template_qqq(v8, &MinInput_Warning_CheckResult, 0, v10, DisplayBindingFromId);
    goto LABEL_9;
  }
  v12 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(struct DisplayBinding *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  DisplayBindingFromId = DWMInputRouter::GetDisplayBindingFromId((DWMInputRouter *)((char *)this - 8), v6, &v25);
  v9 = DisplayBindingFromId;
  if ( DisplayBindingFromId < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_9;
    v10 = 604;
    goto LABEL_8;
  }
  v13 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  DisplayBindingFromId = DWMInputDisplay::Create(a3, &v24);
  v9 = DisplayBindingFromId;
  if ( DisplayBindingFromId < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_9;
    v10 = 606;
    goto LABEL_8;
  }
  v11 = v24;
  if ( v24 )
  {
    v14 = DisplayBinding::SetInputDisplay(v25, v24);
    v9 = v14;
    if ( v14 >= 0 )
    {
      v16 = (*(__int64 (__fastcall **)(struct DisplayBinding *))(*(_QWORD *)v25 + 24LL))(v25);
      v17 = DWMInputRouter::BindDevicesOfTypeToDisplayBinding((DWMInputRouter *)((char *)this - 8), a2, v16, 1);
      v9 = v17;
      if ( v17 >= 0 )
      {
        if ( a2 == 34
          && (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 27))(
               *((_QWORD *)this + 27),
               &GUID_58302172_c7b9_4de9_a24d_49b016c768e8,
               &v21) >= 0 )
        {
          v22[0] = 0LL;
          (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v21 + 24LL))(v21, v22);
          if ( v22[0] )
            (*(void (__fastcall **)(_QWORD, struct IInputDisplay *))(*(_QWORD *)v22[0] + 32LL))(v22[0], v11);
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        Template_qqq(v18, &MinInput_Warning_CheckResult, 0, 618, v17);
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v15, &MinInput_Warning_CheckResult, 0, 613, v14);
    }
  }
  else
  {
    v9 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v8, &MinInput_Warning_CheckResult, 0, 610, 14);
  }
LABEL_34:
  if ( v11 )
    (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v25 )
    (*(void (__fastcall **)(struct DisplayBinding *))(*(_QWORD *)v25 + 16LL))(v25);
  v19 = v21;
  v21 = 0LL;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  return v9;
}

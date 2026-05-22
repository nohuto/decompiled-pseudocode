/*
 * XREFs of ?GetDisplayForDevice@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAPEAUIInputDisplay@@@Z @ 0x180015110
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??0DisplayBinding@@QEAA@XZ @ 0x180019608 (--0DisplayBinding@@QEAA@XZ.c)
 *     ?Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z @ 0x18001B2DC (-Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z.c)
 *     ?RuntimeClassInitialize@DisplayBinding@@QEAAJIU_GUID@@W4Dimension@@@Z @ 0x18001BE80 (-RuntimeClassInitialize@DisplayBinding@@QEAAJIU_GUID@@W4Dimension@@@Z.c)
 *     ?SetInputDisplay@DisplayBinding@@QEAAJPEAUIInputDisplay@@@Z @ 0x18001C6A4 (-SetInputDisplay@DisplayBinding@@QEAAJPEAUIInputDisplay@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall DWMInputRouter::GetDisplayForDevice(
        DWMInputRouter *this,
        struct DeviceInfo *a2,
        struct IInputDisplay **a3)
{
  unsigned int v6; // eax
  int v7; // edx
  _DWORD *v8; // rcx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, struct IInputDisplay **); // rcx
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  struct IInputDisplay *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  unsigned __int32 v19; // ebx
  DisplayBinding *v20; // rax
  __int64 v21; // rcx
  int v22; // ebx
  DisplayBinding *v23; // rdi
  int v24; // r9d
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  struct IInputDisplay *v28; // rbx
  int v29; // eax
  __int64 v30; // rcx
  int v31; // r9d
  struct IInputDisplay *v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  struct IInputDisplay *v35; // rax
  struct IInputDisplay *v36; // rcx
  struct IInputDisplay *v38; // [rsp+30h] [rbp-40h] BYREF
  __int64 v39; // [rsp+38h] [rbp-38h] BYREF
  DisplayBinding *v40; // [rsp+40h] [rbp-30h]
  DisplayBinding *v41; // [rsp+48h] [rbp-28h]
  __int64 v42; // [rsp+50h] [rbp-20h]
  DisplayBinding *v43; // [rsp+58h] [rbp-18h]
  __int128 v44; // [rsp+60h] [rbp-10h] BYREF
  DisplayBinding *v45; // [rsp+B0h] [rbp+40h]
  struct IInputDisplay *v46; // [rsp+B8h] [rbp+48h] BYREF

  v42 = -2LL;
  v46 = 0LL;
  if ( a3 && a2 )
  {
    v6 = 0;
    v7 = *((_DWORD *)a2 + 1);
    v8 = (_DWORD *)((char *)this + 252);
    do
    {
      if ( (v7 & *v8) != 0 )
      {
        v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IInputDisplay **))*((_QWORD *)this + 11 * (int)v6 + 38);
        v10 = (**v9)(v9, &GUID_3a9285d1_c1ae_4ebb_9422_bf3257847754, &v46);
        v12 = v10;
        if ( v10 >= 0 )
          goto LABEL_68;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v11, &MinInput_Warning_CheckResult, 0, 1471, v10);
        goto LABEL_71;
      }
      ++v6;
      v8 += 22;
    }
    while ( v6 < 5 );
    v13 = *((_QWORD *)this + 101);
    if ( *((_QWORD *)a2 + 2) )
    {
      v39 = 0LL;
      v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v13 + 8) + 24LL))(v13 + 8, &v39);
      v12 = v14;
      if ( v14 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v15, &MinInput_Warning_CheckResult, 0, 1478, v14);
        goto LABEL_71;
      }
      if ( *((_QWORD *)a2 + 2) == v39 )
      {
        v16 = v46;
        if ( v46 )
        {
          v46 = 0LL;
          (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v16 + 16LL))(v16);
        }
        v17 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IInputDisplay **))this + 101))(
                *((_QWORD *)this + 101),
                &GUID_3a9285d1_c1ae_4ebb_9422_bf3257847754,
                &v46);
        v12 = v17;
        if ( v17 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            Template_qqq(v18, &MinInput_Warning_CheckResult, 0, 1482, v17);
          goto LABEL_71;
        }
LABEL_68:
        v35 = v46;
        v46 = 0LL;
        *a3 = v35;
        goto LABEL_71;
      }
      v38 = 0LL;
      v19 = _InterlockedIncrement(&DisplayBinding::s_currentId);
      if ( v19 == -1 )
      {
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
      v45 = 0LL;
      v40 = 0LL;
      v20 = (DisplayBinding *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
      v41 = v20;
      v43 = v20;
      if ( !v20 )
      {
        LOBYTE(v22) = 14;
        v12 = -2147024882;
        goto LABEL_35;
      }
      *(_QWORD *)&v44 = v20;
      v23 = DisplayBinding::DisplayBinding(v20);
      v40 = v23;
      v41 = 0LL;
      v44 = DWM_COMPOSITOR_ID;
      v22 = DisplayBinding::RuntimeClassInitialize(v23, v19, &v44, 0LL);
      if ( v22 >= 0 )
      {
        if ( v23 )
          (*(void (__fastcall **)(DisplayBinding *))(*(_QWORD *)v23 + 8LL))(v23);
        v45 = v23;
        if ( v23 )
          (*(void (__fastcall **)(DisplayBinding *))(*(_QWORD *)v23 + 16LL))(v23);
        v22 = 0;
      }
      else if ( v23 )
      {
        (*(void (__fastcall **)(DisplayBinding *))(*(_QWORD *)v23 + 16LL))(v23);
      }
      v12 = v22;
      if ( v22 < 0 )
      {
LABEL_35:
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v24 = 1493;
          goto LABEL_37;
        }
        goto LABEL_38;
      }
      if ( !v45 )
      {
        LOBYTE(v22) = 14;
        v12 = -2147024882;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v24 = 1497;
LABEL_37:
          Template_qqq(v21, &MinInput_Warning_CheckResult, 0, v24, v22);
        }
LABEL_38:
        if ( v38 )
        {
          v25 = *(_QWORD *)v38;
          goto LABEL_40;
        }
        goto LABEL_41;
      }
      v26 = DWMInputDisplay::Create(*((HMONITOR *)a2 + 2), &v38);
      v12 = v26;
      if ( v26 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v27, &MinInput_Warning_CheckResult, 0, 1503, v26);
        goto LABEL_38;
      }
      v28 = v38;
      if ( !v38 )
      {
        v12 = -2147024882;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v27, &MinInput_Warning_CheckResult, 0, 1507, 14);
        goto LABEL_41;
      }
      v29 = DisplayBinding::SetInputDisplay(v45, v38);
      v12 = v29;
      if ( v29 >= 0 )
      {
        v32 = v46;
        if ( v46 )
        {
          v46 = 0LL;
          (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v32 + 16LL))(v32);
        }
        v29 = (**(__int64 (__fastcall ***)(DisplayBinding *, GUID *, struct IInputDisplay **))v45)(
                v45,
                &GUID_3a9285d1_c1ae_4ebb_9422_bf3257847754,
                &v46);
        v12 = v29;
        if ( v29 >= 0 )
        {
          (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v28 + 16LL))(v28);
          if ( v45 )
            (*(void (__fastcall **)(DisplayBinding *))(*(_QWORD *)v45 + 16LL))(v45);
          goto LABEL_68;
        }
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v31 = 1511;
LABEL_56:
          Template_qqq(v30, &MinInput_Warning_CheckResult, 0, v31, v29);
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v31 = 1510;
        goto LABEL_56;
      }
      v25 = *(_QWORD *)v28;
LABEL_40:
      (*(void (**)(void))(v25 + 16))();
LABEL_41:
      if ( v45 )
        (*(void (__fastcall **)(DisplayBinding *))(*(_QWORD *)v45 + 16LL))(v45);
      goto LABEL_71;
    }
    v33 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IInputDisplay **))v13)(
            v13,
            &GUID_3a9285d1_c1ae_4ebb_9422_bf3257847754,
            &v46);
    v12 = v33;
    if ( v33 >= 0 )
      goto LABEL_68;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v34, &MinInput_Warning_CheckResult, 0, 1516, v33);
  }
  else
  {
    v12 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 1455, 87);
  }
LABEL_71:
  v36 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v36 + 16LL))(v36);
  }
  return v12;
}

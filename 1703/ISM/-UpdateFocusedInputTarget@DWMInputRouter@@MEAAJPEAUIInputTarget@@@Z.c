/*
 * XREFs of ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180015A40
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x1800846E0 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z @ 0x180084C7C (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetServerWindowForViewId@ViewHelper@@SAJKPEAPEAUIServerWindow@Server@Navigation@@@Z @ 0x18002B5E0 (-GetServerWindowForViewId@ViewHelper@@SAJKPEAPEAUIServerWindow@Server@Navigation@@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DWMInputRouter::UpdateFocusedInputTarget(DWMInputRouter *this, struct IInputTarget *a2)
{
  unsigned int v4; // esi
  struct Navigation::Server::IServerWindow *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r12
  unsigned int v8; // r13d
  int v9; // eax
  __int64 v10; // rcx
  int v11; // r9d
  int ServerWindowForViewId; // eax
  struct Navigation::Server::IServerWindow *v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v23; // [rsp+38h] [rbp-69h] BYREF
  __int64 v24; // [rsp+40h] [rbp-61h] BYREF
  unsigned int v25; // [rsp+48h] [rbp-59h] BYREF
  unsigned int v26; // [rsp+4Ch] [rbp-55h] BYREF
  struct Navigation::Server::IServerWindow *v27[3]; // [rsp+50h] [rbp-51h] BYREF
  _BYTE v28[40]; // [rsp+68h] [rbp-39h] BYREF
  _BYTE v29[40]; // [rsp+90h] [rbp-11h] BYREF

  v27[1] = (struct Navigation::Server::IServerWindow *)-2LL;
  v4 = 0;
  v5 = (struct Navigation::Server::IServerWindow *)*((_QWORD *)this + 29);
  v27[2] = v5;
  if ( v5 )
    (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v5 + 8LL))(v5);
  if ( a2 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
  v6 = *((_QWORD *)this + 29);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  *((_QWORD *)this + 29) = a2;
  if ( (gdwMitConfig & 1) != 0 && ((1LL << gdwDeviceFamily) & 0x1DB5) != 0 )
  {
    v7 = 0LL;
    memset(v28, 0, sizeof(v28));
    v8 = 0;
    if ( !a2 )
    {
LABEL_38:
      MITSetForegroundRoutingInfo(v7, v28, v8);
      goto LABEL_39;
    }
    v23 = 0LL;
    if ( (**(int (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2)(
           a2,
           &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
           &v23) < 0 )
    {
      v4 = 0;
LABEL_36:
      v18 = v23;
      v23 = 0LL;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      goto LABEL_38;
    }
    v24 = 0LL;
    v9 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2)(
           a2,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           &v24);
    if ( v9 >= 0 )
    {
      v25 = 0;
      v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v24 + 48LL))(v24, &v25);
      v4 = v9;
      if ( v9 >= 0 )
      {
        if ( v25 )
        {
          v27[0] = 0LL;
          ServerWindowForViewId = ViewHelper::GetServerWindowForViewId(v25, v27);
          v13 = v27[0];
          if ( ServerWindowForViewId >= 0 )
          {
            v14 = (*(__int64 (__fastcall **)(struct Navigation::Server::IServerWindow *, unsigned int *))(*(_QWORD *)v27[0] + 24LL))(
                    v27[0],
                    &v26);
            v4 = v14;
            if ( v14 < 0 )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                Template_qqq(v15, &MinInput_Warning_CheckResult, 0, 1759, v14);
              if ( IsDebuggerPresent() )
                __debugbreak();
              __fastfail(7u);
            }
            v7 = v26;
            v16 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v23 + 96LL))(v23, v29);
            *(_OWORD *)v28 = *(_OWORD *)v16;
            *(_OWORD *)&v28[16] = *(_OWORD *)(v16 + 16);
            *(_QWORD *)&v28[32] = *(_QWORD *)(v16 + 32);
            v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 72LL))(v23);
          }
          else
          {
            v4 = 0;
          }
          if ( v13 )
            (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v13 + 16LL))(v13);
        }
        v17 = v24;
        v24 = 0LL;
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        goto LABEL_36;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      {
LABEL_16:
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
      v11 = 1739;
    }
    else
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_16;
      v11 = 1736;
    }
    Template_qqq(v10, &MinInput_Warning_CheckResult, 0, v11, v9);
    goto LABEL_16;
  }
LABEL_39:
  v19 = *((_QWORD *)this + 30);
  if ( v19 )
  {
    v20 = (*(__int64 (__fastcall **)(__int64, struct Navigation::Server::IServerWindow *, struct IInputTarget *))(*(_QWORD *)v19 + 24LL))(
            v19,
            v5,
            a2);
    v4 = v20;
    if ( v20 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v21, &MinInput_Warning_CheckResult, 0, 1779, v20);
  }
  if ( v5 )
    (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v5 + 16LL))(v5);
  return v4;
}

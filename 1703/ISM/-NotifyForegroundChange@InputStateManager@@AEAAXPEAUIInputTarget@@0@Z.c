/*
 * XREFs of ?NotifyForegroundChange@InputStateManager@@AEAAXPEAUIInputTarget@@0@Z @ 0x180006BA8
 * Callers:
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180006A00 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetServerWindowForViewId@ViewHelper@@SAJKPEAPEAUIServerWindow@Server@Navigation@@@Z @ 0x18002B5E0 (-GetServerWindowForViewId@ViewHelper@@SAJKPEAPEAUIServerWindow@Server@Navigation@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall InputStateManager::NotifyForegroundChange(
        InputStateManager *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  struct IInputTarget *v4; // r9
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rcx
  int v9; // r9d
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // r9d
  int ServerWindowForViewId; // eax
  struct Navigation::Server::IServerWindow *v16; // rbx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // r9d
  int v20; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+38h] [rbp-28h] BYREF
  struct Navigation::Server::IServerWindow *v22; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v23[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v24; // [rsp+90h] [rbp+30h] BYREF
  unsigned int v25; // [rsp+98h] [rbp+38h] BYREF
  unsigned int v26; // [rsp+A8h] [rbp+48h] BYREF

  v23[1] = -2LL;
  v4 = a2;
  v26 = 0;
  v25 = 0;
  v6 = 0LL;
  *((_DWORD *)this + 2077) = -1;
  if ( a2 )
  {
    v24 = 0LL;
    v7 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2)(
           a2,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           &v24);
    if ( v7 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      {
LABEL_6:
        v10 = v24;
        v24 = 0LL;
        goto LABEL_37;
      }
      v9 = 565;
LABEL_5:
      Template_qqq(v8, &MinInput_Warning_CheckResult, 1, v9, v7);
      goto LABEL_6;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v24 + 32LL))(v24, &v26);
    if ( v7 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_6;
      v9 = 566;
      goto LABEL_5;
    }
    v11 = v24;
    v24 = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( !a3 )
    goto LABEL_39;
  LODWORD(v24) = 0;
  v21 = 0LL;
  v12 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *, struct IInputTarget *))a3)(
          a3,
          &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
          &v21,
          v4);
  if ( v12 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 32LL))(v21, &v25);
    if ( v12 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_36;
      v14 = 580;
      goto LABEL_16;
    }
    v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 48LL))(v21, &v24);
    if ( v12 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_36;
      v14 = 581;
      goto LABEL_16;
    }
    if ( !(_DWORD)v24 )
      goto LABEL_36;
    v22 = 0LL;
    ServerWindowForViewId = ViewHelper::GetServerWindowForViewId(v24, &v22);
    v16 = v22;
    if ( ServerWindowForViewId >= 0 )
    {
      v17 = (*(__int64 (__fastcall **)(struct Navigation::Server::IServerWindow *, _QWORD *))(*(_QWORD *)v22 + 96LL))(
              v22,
              v23);
      if ( v17 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v19 = 601;
LABEL_28:
          Template_qqq(v18, &MinInput_Warning_CheckResult, 1, v19, v17);
        }
LABEL_35:
        (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v16 + 16LL))(v16);
        goto LABEL_36;
      }
      v6 = v23[0];
      v17 = (*(__int64 (__fastcall **)(struct Navigation::Server::IServerWindow *, int *))(*(_QWORD *)v16 + 120LL))(
              v16,
              &v20);
      if ( v17 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_35;
        v19 = 605;
        goto LABEL_28;
      }
      *((_DWORD *)this + 2077) = v20;
    }
    if ( !v16 )
      goto LABEL_36;
    goto LABEL_35;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v14 = 578;
LABEL_16:
    Template_qqq(v13, &MinInput_Warning_CheckResult, 1, v14, v12);
  }
LABEL_36:
  v10 = v21;
  v21 = 0LL;
LABEL_37:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_39:
  CompositorNotifyForegroundChanged(v26, v25, v6, v4);
}

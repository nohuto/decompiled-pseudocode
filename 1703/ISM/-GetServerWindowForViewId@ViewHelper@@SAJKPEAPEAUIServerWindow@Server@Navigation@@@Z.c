/*
 * XREFs of ?GetServerWindowForViewId@ViewHelper@@SAJKPEAPEAUIServerWindow@Server@Navigation@@@Z @ 0x18002B5E0
 * Callers:
 *     ?NotifyForegroundChange@InputStateManager@@AEAAXPEAUIInputTarget@@0@Z @ 0x180006BA8 (-NotifyForegroundChange@InputStateManager@@AEAAXPEAUIInputTarget@@0@Z.c)
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180015A40 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@ViewHeirarchy@@SA?AV?$ComPtr@UIViewHeirarchy@@@WRL@Microsoft@@XZ @ 0x18006D108 (-Create@ViewHeirarchy@@SA-AV-$ComPtr@UIViewHeirarchy@@@WRL@Microsoft@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewHelper::GetServerWindowForViewId(unsigned int a1, struct Navigation::Server::IServerWindow **a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  int v9; // eax
  unsigned int v10; // edi
  struct Navigation::Server::IServerWindow *v11; // rcx
  struct Navigation::Server::IServerWindow *v12; // rcx
  int (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // rcx
  struct Navigation::Server::IServerWindow *v14; // rcx
  int (__fastcall ***v15)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v16; // rcx
  struct Navigation::Server::IServerWindow *v18; // [rsp+20h] [rbp-30h] BYREF
  __int64 v19; // [rsp+28h] [rbp-28h] BYREF
  int (__fastcall ***v20)(_QWORD, GUID *, struct Navigation::Server::IServerWindow **); // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v24; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v25; // [rsp+88h] [rbp+38h] BYREF

  v22[1] = -2LL;
  ViewHeirarchy::Create(v22);
  v4 = v22[0];
  (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(*(_QWORD *)v22[0] + 32LL))(v22[0], &v21, a1);
  v5 = v21;
  if ( !v21 )
    goto LABEL_34;
  v19 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 128LL))(v21, &v19);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = v19;
  if ( v19 )
  {
    v24 = 0;
    v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 48LL))(v19, &v24);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x2D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
    v10 = 0;
    if ( v24 > 0 )
    {
      while ( 1 )
      {
        v20 = 0LL;
        v18 = 0LL;
        if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v19 + 56LL))(v19, v10, &v20) >= 0 )
        {
          v11 = v18;
          if ( v18 )
          {
            v18 = 0LL;
            (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v11 + 16LL))(v11);
          }
          if ( (**v20)(v20, &GUID_8b494dca_e0e9_479a_adf3_023a8da54cb7, &v18) >= 0
            && (*(int (__fastcall **)(struct Navigation::Server::IServerWindow *, unsigned int *))(*(_QWORD *)v18 + 88LL))(
                 v18,
                 &v25) >= 0
            && v25 <= 1 )
          {
            break;
          }
        }
        v12 = v18;
        if ( v18 )
        {
          v18 = 0LL;
          (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v12 + 16LL))(v12);
        }
        v13 = (int (__fastcall ***)(_QWORD, GUID *, _QWORD *))v20;
        if ( v20 )
        {
          v20 = 0LL;
          ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v13)[2])(v13);
        }
        if ( (int)++v10 >= v24 )
          goto LABEL_31;
      }
      v14 = v18;
      if ( v18 )
      {
        (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v18 + 8LL))(v18);
        v14 = v18;
      }
      *a2 = v14;
      v8 = 0;
      if ( v14 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v14 + 16LL))(v14);
      }
      v15 = (int (__fastcall ***)(_QWORD, GUID *, _QWORD *))v20;
      if ( v20 )
      {
        v20 = 0LL;
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v15)[2])(v15);
      }
      v7 = v19;
      goto LABEL_28;
    }
LABEL_31:
    v16 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v5 = v21;
LABEL_34:
    v8 = -2147467259;
    goto LABEL_35;
  }
  v8 = -2147467259;
LABEL_28:
  if ( v7 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v5 = v21;
LABEL_35:
  if ( v5 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v8;
}

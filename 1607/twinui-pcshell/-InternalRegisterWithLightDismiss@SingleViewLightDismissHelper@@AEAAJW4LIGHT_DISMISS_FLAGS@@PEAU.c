/*
 * XREFs of ?InternalRegisterWithLightDismiss@SingleViewLightDismissHelper@@AEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@Z @ 0x1800287A8
 * Callers:
 *     ?RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ @ 0x180012348 (-RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001134 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180026C94 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@Z @ 0x1800270A0 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x180028A08 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SingleViewLightDismissHelper::InternalRegisterWithLightDismiss(
        SingleViewLightDismissHelper *a1,
        unsigned int a2,
        __int64 a3,
        ExperienceManagerUtils *a4)
{
  struct Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewWrapper *v8; // rdx
  HRESULT v9; // eax
  int v10; // ebx
  LPVOID v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  LPVOID v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // r9
  __int64 v19; // rax
  int v20; // eax
  const struct _TlgProvider_t *v21; // rax
  LPVOID ppv; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v24[3]; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-11h] BYREF
  LPVOID *p_ppv; // [rsp+78h] [rbp+Fh]
  int v27; // [rsp+80h] [rbp+17h]
  int v28; // [rsp+84h] [rbp+1Bh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v24[2] = -2LL;
  SingleViewLightDismissHelper::UnregisterWithLightDismiss(a1);
  if ( *(_QWORD *)a1 )
    goto LABEL_21;
  ppv = 0LL;
  v9 = CoCreateInstance(
         &GUID_228826af_02e1_4226_a9e0_99a855e455a6,
         0LL,
         4u,
         &GUID_9767060c_9476_42e2_8f7b_2f10fd13765c,
         &ppv);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\lightdismisshelper.cpp",
      (const char *)(unsigned int)v9);
LABEL_4:
    v11 = ppv;
    if ( ppv )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v11 + 16LL))(v11);
    }
    goto LABEL_17;
  }
  v24[0] = 0LL;
  v12 = (*(__int64 (__fastcall **)(LPVOID, _QWORD *))(*(_QWORD *)ppv + 24LL))(ppv, v24);
  v10 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\lightdismisshelper.cpp",
      (const char *)(unsigned int)v12);
    v13 = v24[0];
    if ( v24[0] )
    {
      v24[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    goto LABEL_4;
  }
  v14 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v14 = v24[0];
  }
  else
  {
    *(_QWORD *)a1 = v24[0];
    v24[0] = 0LL;
  }
  if ( v14 )
  {
    v24[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v10 = 0;
LABEL_17:
  if ( v10 < 0 )
  {
    v16 = 75LL;
LABEL_19:
    v17 = (unsigned int)v10;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\lightdismisshelper.cpp",
      (const char *)v17);
    return (unsigned int)v10;
  }
LABEL_21:
  v19 = ExperienceManagerUtils::WindowFromViewWrapper(a4, v8);
  if ( !v19 )
  {
    v10 = -2147467259;
    v16 = 78LL;
    goto LABEL_19;
  }
  v24[0] = a2;
  v24[1] = v19;
  v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64, unsigned int *))(**(_QWORD **)a1 + 24LL))(
          *(_QWORD *)a1,
          v24,
          a3,
          &v23);
  v10 = v20;
  if ( v20 < 0 )
  {
    v17 = (unsigned int)v20;
    v16 = 83LL;
    goto LABEL_20;
  }
  v21 = SingleViewExperienceLogging::Provider();
  if ( *(_DWORD *)v21 > 5u )
  {
    LODWORD(ppv) = v23;
    p_ppv = &ppv;
    v27 = 4;
    v28 = 0;
    TlgWrite(v21, &unk_180044BE3, 0LL, 0LL, 3u, &pData);
  }
  if ( *((_DWORD *)a1 + 2) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)a1 + 40LL))(*(_QWORD *)a1, v23);
  else
    *((_DWORD *)a1 + 2) = v23;
  return 0LL;
}

/*
 * XREFs of ?OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x18001CC24
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18001C808 (-OnViewStateChanged@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000C888 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResetViews@CSingleViewShellExperience@@AEAAXXZ @ 0x18001C7AC (-ResetViews@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x18001CE88 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSingleViewShellExperience::OnViewCreatedBase(CSingleViewShellExperience *this, char *a2)
{
  int v4; // esi
  int v5; // ebp
  int v6; // eax
  _QWORD *v7; // rsi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r8
  unsigned int v11; // ebp
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // edi
  int v16; // eax
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  int v19; // esi
  int v20; // eax
  int v21; // edi
  int v22; // eax
  int v23; // eax
  int v24; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v26; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 4) )
  {
    v4 = *((_DWORD *)this + 18);
    v5 = *((_DWORD *)this + 19);
    *((_DWORD *)this + 18) = 0;
    *((_DWORD *)this + 19) = 0;
    v6 = CSingleViewShellExperience::DestroyView(this);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x206,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v6);
    *((_DWORD *)this + 18) = v4;
    *((_DWORD *)this + 19) = v5;
  }
  v7 = (_QWORD *)((char *)this + 24);
  v8 = *((_QWORD *)this + 3);
  if ( v8 )
  {
    *v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, char *))a2)(
         *(_QWORD *)a2,
         &GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f,
         (char *)this + 24);
  v11 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20C,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v9);
    return v11;
  }
  v13 = 0LL;
  if ( &v26 != a2 )
  {
    v13 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v14 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = v13;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( *((_DWORD *)this + 18) == 2 )
  {
    v15 = -2147023673;
    goto LABEL_32;
  }
  if ( !*((_DWORD *)this + 17)
    || (v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 40LL))(*v7), v15 = v16, v16 >= 0) )
  {
    if ( *((_BYTE *)this + 61) )
    {
      v19 = *((_DWORD *)this + 21);
      if ( v19 )
      {
        v20 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 120LL))(*((_QWORD *)this + 4), 1LL);
        v21 = v20;
        if ( v20 >= 0 )
        {
          *((_DWORD *)this + 21) = 1;
          v21 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5D,
            (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
            (const char *)(unsigned int)v20);
        }
        if ( v21 >= 0 )
          *((_DWORD *)this + 20) = v19;
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x9F,
            (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
            (const char *)(unsigned int)v21);
      }
      LOBYTE(v10) = *((_BYTE *)this + 61);
      v22 = (*(__int64 (__fastcall **)(_QWORD, CSingleViewShellExperience *, __int64))(**((_QWORD **)this + 11) + 96LL))(
              *((_QWORD *)this + 11),
              this,
              v10);
      if ( v22 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x227,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v22);
    }
    if ( !*((_QWORD *)this + 4) )
    {
      v15 = -2147023673;
      v18 = 562LL;
LABEL_37:
      v17 = v15;
      goto LABEL_38;
    }
    v23 = (***((__int64 (__fastcall ****)(_QWORD, CSingleViewShellExperience *))this + 11))(
            *((_QWORD *)this + 11),
            this);
    v15 = v23;
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x22E,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v23);
    if ( (v15 & 0x80000000) == 0 )
      return v15;
LABEL_32:
    v24 = CSingleViewShellExperience::DestroyView(this);
    if ( v24 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x238,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v24);
    *((_DWORD *)this + 18) = 0;
    *((_DWORD *)this + 19) = 0;
    CSingleViewShellExperience::ResetViews(this);
    v18 = 573LL;
    goto LABEL_37;
  }
  v17 = (unsigned int)v16;
  v18 = 540LL;
LABEL_38:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)v17);
  return v15;
}

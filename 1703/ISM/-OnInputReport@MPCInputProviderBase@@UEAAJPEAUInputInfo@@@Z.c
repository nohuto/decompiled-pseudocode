/*
 * XREFs of ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x18004EE10
 * Callers:
 *     ?SendInputDetectedIfController@MPCClickerProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x18004A010 (-SendInputDetectedIfController@MPCClickerProcessor@@AEAAXPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043938 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004AC9C (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCInputProviderBase::OnInputReport(MPCInputProviderBase *this, struct InputInfo *a2)
{
  __int64 v4; // rax
  char *v5; // rbx
  __int64 v6; // rax
  const char *v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  MPCHolographicInputManager::GetInstance();
  if ( !*(_QWORD *)(v4 + 2152) )
  {
    v5 = (char *)this + 16;
    if ( (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this + 2) + 112LL))((char *)this + 16) == 1
      && *((_DWORD *)a2 + 176) == 8 )
    {
      MPCHolographicInputManager::GetInstance();
      v8 = v6;
      if ( *(_QWORD *)(v6 + 2152) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x67,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\inc\\mpcholographicinputmanager.h",
          v7);
        __debugbreak();
      }
      if ( *(char **)(v6 + 2152) != v5 )
      {
        if ( this != (MPCInputProviderBase *)-16LL )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))((char *)this + 16);
        v9 = *(_QWORD *)(v8 + 2152);
        *(_QWORD *)(v8 + 2152) = v5;
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
  }
  MPCHolographicInputManager::GetInstance();
  if ( *(_BYTE *)(v10 + 2160) && (MPCHolographicInputManager::GetInstance(), *(_QWORD *)(v11 + 2152)) )
  {
    v12 = (*(__int64 (__fastcall **)(char *, struct InputInfo *))(*((_QWORD *)this + 2) + 232LL))((char *)this + 16, a2);
    if ( v12 < 0 )
    {
      v13 = 256LL;
LABEL_16:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v13,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
        (const char *)(unsigned int)v12);
    }
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(char *, struct InputInfo *))(*((_QWORD *)this + 2) + 240LL))((char *)this + 16, a2);
    if ( v12 < 0 )
    {
      v13 = 261LL;
      goto LABEL_16;
    }
  }
  return 0LL;
}

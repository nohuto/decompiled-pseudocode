/*
 * XREFs of ?GetDeferral@?$DeferrableEventArgs@UITargetedContentUpdatedEventArgs@TargetedContent@ContentManagement@@VUpdatedEventArgsImpl@23@@WRL@Microsoft@@UEAAJPEAPEAUIDeferral@Foundation@Windows@@@Z @ 0x180042610
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002E04 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003A04 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$Callback@UIDeferralCompletedHandler@Foundation@Windows@@V_lambda_cea97c4441210eed0902fb5310eddefb_@@@WRL@Microsoft@@YA?AV?$ComPtr@UIDeferralCompletedHandler@Foundation@Windows@@@01@V_lambda_cea97c4441210eed0902fb5310eddefb_@@@Z @ 0x180043D10 (--$Callback@UIDeferralCompletedHandler@Foundation@Windows@@V_lambda_cea97c4441210eed0902fb5310ed.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::DeferrableEventArgs<ContentManagement::TargetedContent::ITargetedContentUpdatedEventArgs,ContentManagement::TargetedContent::UpdatedEventArgsImpl>::GetDeferral(
        __int64 *a1,
        _QWORD *a2)
{
  int ActivationFactory; // edi
  HRESULT v5; // eax
  RTL_SRWLOCK v6; // rax
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-50h] BYREF
  __int64 v13; // [rsp+28h] [rbp-48h] BYREF
  __int64 *v14; // [rsp+30h] [rbp-40h] BYREF
  __int64 v15; // [rsp+38h] [rbp-38h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF

  *a2 = 0LL;
  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)a1 + 1, &SRWLock);
  if ( *((_BYTE *)a1 + 16) )
  {
    ActivationFactory = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
  }
  else
  {
    v12 = 0LL;
    string = 0LL;
    v5 = WindowsCreateStringReference(L"Windows.Foundation.Deferral", 0x1Bu, &hstringHeader, &string);
    if ( v5 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
      JUMPOUT(0x1800427DELL);
    }
    ActivationFactory = RoGetActivationFactory(string, &GUID_65a1ecc5_3fb5_4832_8ca9_f061b281d13a, &v12);
    if ( ActivationFactory >= 0 )
    {
      (*(void (__fastcall **)(__int64 *))(*a1 + 8))(a1);
      v6.Ptr = (PVOID)*a1;
      v14 = a1;
      (*((void (__fastcall **)(__int64 *))v6.Ptr + 1))(a1);
      Microsoft::WRL::Callback<Windows::Foundation::IDeferralCompletedHandler,_lambda_cea97c4441210eed0902fb5310eddefb_>(
        &v15,
        &v14);
      v7 = v15;
      if ( v15 )
      {
        v13 = 0LL;
        v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v12 + 48LL))(v12, v15, &v13);
        v9 = v13;
        ActivationFactory = v8;
        if ( v8 >= 0 )
        {
          ++*((_DWORD *)a1 + 5);
          if ( v9 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
            v9 = v13;
          }
          *a2 = v9;
          ActivationFactory = 0;
        }
        if ( v9 )
        {
          v13 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      else
      {
        ActivationFactory = -2147024882;
      }
      (*(void (__fastcall **)(__int64 *))(*a1 + 16))(a1);
    }
    v10 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return (unsigned int)ActivationFactory;
}

/*
 * XREFs of ??_E?$InvokeHelper@UIDeferralCompletedHandler@Foundation@Windows@@V_lambda_cea97c4441210eed0902fb5310eddefb_@@$0A@@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180017150
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::InvokeHelper<Windows::Foundation::IDeferralCompletedHandler,_lambda_cea97c4441210eed0902fb5310eddefb_,0>::`vector deleting destructor'(
        __int64 a1,
        char a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *(_DWORD *)(a1 + 12) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete((void *)a1);
  return a1;
}

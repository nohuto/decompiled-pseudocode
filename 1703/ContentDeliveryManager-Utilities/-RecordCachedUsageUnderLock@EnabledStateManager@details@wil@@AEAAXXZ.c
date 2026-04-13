/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18000A7D8
 * Callers:
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x180011F2C (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     _lambda_3a8e20f2e77891984b45453b80f2a737_::_lambda_invoker_cdecl_ @ 0x180013DC0 (_lambda_3a8e20f2e77891984b45453b80f2a737_--_lambda_invoker_cdecl_.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x180075710 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     _lambda_a6162ed205bf533298d20564adf5c8f3_::_lambda_invoker_cdecl_ @ 0x180013D94 (_lambda_a6162ed205bf533298d20564adf5c8f3_--_lambda_invoker_cdecl_.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18006F9A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(wil::details::EnabledStateManager *this)
{
  unsigned int *v2; // rbx
  __int64 v3; // rax
  volatile signed __int32 *v4; // rsi
  signed __int32 v5; // r14d
  void (*v6)(unsigned int, unsigned int, unsigned int, const char *); // r11
  unsigned int *v7; // rsi
  void (*v8)(unsigned int, unsigned int, unsigned int, const char *); // r10
  __int64 v9; // r8
  volatile signed __int32 v10; // [rsp+30h] [rbp-39h] BYREF
  char v11; // [rsp+34h] [rbp-35h]
  __int64 v12; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v13[3]; // [rsp+40h] [rbp-29h] BYREF
  unsigned int *v14; // [rsp+58h] [rbp-11h]
  _BYTE v15[64]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+37h] BYREF

  if ( *((_QWORD *)this + 6) - *((_QWORD *)this + 5) >= 0x10uLL )
  {
    v2 = (unsigned int *)*((_QWORD *)this + 5);
    v3 = *((_QWORD *)this + 6) - (_QWORD)v2;
    v13[2] = v2;
    v14 = (unsigned int *)((char *)v2 + (v3 & 0xFFFFFFFFFFFFFFF0uLL));
    if ( v2 != v14 )
    {
      while ( 1 )
      {
        memset_0(v15, 0, sizeof(v15));
        v12 = 0LL;
        v4 = (volatile signed __int32 *)*((_QWORD *)v2 + 1);
        v13[0] = &v12;
        v13[1] = v15;
        v11 = 0;
        do
        {
          v10 = *v4;
          v10 = *v4;
          v5 = v10;
        }
        while ( (unsigned int)lambda_a6162ed205bf533298d20564adf5c8f3_::_lambda_invoker_cdecl_(&v10, v13)
             && v5 != _InterlockedCompareExchange(v4, v10, v5) );
        v6 = g_wil_details_internalRecordFeatureUsage;
        v7 = (unsigned int *)v15;
        v8 = g_wil_details_apiRecordFeatureUsage;
        do
        {
          v9 = v7[1];
          if ( !(_DWORD)v9 )
            goto LABEL_13;
          if ( v6 )
          {
            ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))v6)(*v2, *v7, v9, 0LL);
          }
          else
          {
            if ( !v8 )
              goto LABEL_13;
            ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))v8)(*v2, *v7, v9, 0LL);
          }
          v8 = g_wil_details_apiRecordFeatureUsage;
          v6 = g_wil_details_internalRecordFeatureUsage;
LABEL_13:
          v7 += 2;
        }
        while ( v7 != (unsigned int *)&v16 );
        v2 += 4;
        if ( v2 == v14 )
          goto LABEL_17;
      }
    }
    v6 = g_wil_details_internalRecordFeatureUsage;
    v8 = g_wil_details_apiRecordFeatureUsage;
LABEL_17:
    *((_QWORD *)this + 6) = *((_QWORD *)this + 5);
    if ( v6 )
    {
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))v6)(0LL, 254LL, 0LL, 0LL);
    }
    else if ( v8 )
    {
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))v8)(0LL, 254LL, 0LL, 0LL);
    }
  }
}

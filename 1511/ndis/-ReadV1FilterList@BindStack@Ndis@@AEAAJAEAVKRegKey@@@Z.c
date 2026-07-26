/*
 * XREFs of ?ReadV1FilterList@BindStack@Ndis@@AEAAJAEAVKRegKey@@@Z @ 0x1C00DD8D8
 * Callers:
 *     ?ReadV1InterfaceBindings@BindStack@Ndis@@AEAA_NPEAU_DEVICE_OBJECT@@@Z @ 0x1C00DD958 (-ReadV1InterfaceBindings@BindStack@Ndis@@AEAA_NPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ??$QueryValueMultisz@V_lambda_7b34f67d2fe748a9991e85b83cffda76_@@V_lambda_7db8344f8beb56adaa003951e6a1fc8c_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_7b34f67d2fe748a9991e85b83cffda76_@@V_lambda_7db8344f8beb56adaa003951e6a1fc8c_@@@Z @ 0x1C00DD264 (--$QueryValueMultisz@V_lambda_7b34f67d2fe748a9991e85b83cffda76_@@V_lambda_7db8344f8beb56adaa0039.c)
 */

__int64 __fastcall Ndis::BindStack::ReadV1FilterList(Ndis::BindStack *this, struct KRegKey *a2)
{
  __int64 v2; // rax
  const wchar_t *v3; // r8
  __int64 result; // rax
  _UNICODE_STRING v5; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)&v5.Length = 0;
  v5.Buffer = 0LL;
  v2 = 0x7FFFLL;
  v3 = L"FilterList";
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v2;
  }
  while ( v2 );
  if ( !v2 )
    return 3221225485LL;
  v5.Buffer = L"FilterList";
  v5.Length = 2 * (0x7FFF - v2);
  v5.MaximumLength = v5.Length + 2;
  result = KRegKey::QueryValueMultisz<_lambda_7b34f67d2fe748a9991e85b83cffda76_,_lambda_7db8344f8beb56adaa003951e6a1fc8c_>(
             (HANDLE *)&a2->_p,
             &v5,
             (__int64)this,
             this);
  if ( (_DWORD)result == -1073741772 )
    return 0LL;
  return result;
}

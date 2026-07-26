/*
 * XREFs of ??$QueryValueMultisz@V_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a145f888ea93e43ede63b27154_@@@KRegKey@@QEAAJPEBGV_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a145f888ea93e43ede63b27154_@@@Z @ 0x1C00CBFFC
 * Callers:
 *     ?ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETERS@@@Z @ 0x1C00CC2C4 (-ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETE.c)
 * Callees:
 *     ??$QueryValueMultisz@V_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a145f888ea93e43ede63b27154_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a145f888ea93e43ede63b27154_@@@Z @ 0x1C00CC074 (--$QueryValueMultisz@V_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a14_ea_1C00CC074.c)
 */

__int64 __fastcall KRegKey::QueryValueMultisz<_lambda_96cc44e42cdf8d0bb97f810167971fd3_,_lambda_5efab4a145f888ea93e43ede63b27154_>(
        __int64 a1)
{
  __int64 v1; // rax
  const wchar_t *v2; // rdx
  int v4; // [rsp+20h] [rbp-18h] BYREF
  const wchar_t *v5; // [rsp+28h] [rbp-10h]

  v4 = 0;
  v5 = 0LL;
  v1 = 0x7FFFLL;
  v2 = L"Export";
  do
  {
    if ( !*v2 )
      break;
    ++v2;
    --v1;
  }
  while ( v1 );
  if ( !v1 )
    return 3221225485LL;
  v5 = L"Export";
  LOWORD(v4) = 2 * (0x7FFF - v1);
  HIWORD(v4) = v4 + 2;
  return KRegKey::QueryValueMultisz<_lambda_96cc44e42cdf8d0bb97f810167971fd3_,_lambda_5efab4a145f888ea93e43ede63b27154_>(
           a1,
           &v4);
}

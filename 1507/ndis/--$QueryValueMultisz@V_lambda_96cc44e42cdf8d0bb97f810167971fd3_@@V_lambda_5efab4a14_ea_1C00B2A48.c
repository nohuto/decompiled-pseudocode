/*
 * XREFs of ??$QueryValueMultisz@V_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a145f888ea93e43ede63b27154_@@@KRegKey@@QEAAJPEBGV_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a145f888ea93e43ede63b27154_@@@Z @ 0x1C00B2A48
 * Callers:
 *     ?ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETERS@@@Z @ 0x1C00B2338 (-ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETE.c)
 * Callees:
 *     ??$QueryValueMultisz@V_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a145f888ea93e43ede63b27154_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a145f888ea93e43ede63b27154_@@@Z @ 0x1C00B271C (--$QueryValueMultisz@V_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a145f888ea93e43e.c)
 */

__int64 __fastcall KRegKey::QueryValueMultisz<_lambda_96cc44e42cdf8d0bb97f810167971fd3_,_lambda_5efab4a145f888ea93e43ede63b27154_>(
        HANDLE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  const wchar_t *v5; // rdx
  _UNICODE_STRING v7; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)&v7.Length = 0;
  v7.Buffer = 0LL;
  v4 = 0x7FFFLL;
  v5 = L"Export";
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  if ( !v4 )
    return 3221225485LL;
  v7.Buffer = L"Export";
  v7.Length = 2 * (0x7FFF - v4);
  v7.MaximumLength = v7.Length + 2;
  return KRegKey::QueryValueMultisz<_lambda_96cc44e42cdf8d0bb97f810167971fd3_,_lambda_5efab4a145f888ea93e43ede63b27154_>(
           a1,
           &v7,
           a3,
           a4);
}

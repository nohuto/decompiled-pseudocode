/*
 * XREFs of ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C0085C28
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0055974 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 * Callees:
 *     sub_1C004CED0 @ 0x1C004CED0 (sub_1C004CED0.c)
 *     ?ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z @ 0x1C0085D14 (-ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

void __fastcall GetRemoteScaleOverrideTestHook(const unsigned __int16 *a1, __int64 a2, struct _DPI_INFORMATION *a3)
{
  __int64 v5; // r8
  __int64 v6; // rcx
  _WORD *v7; // rax
  unsigned int *v8; // r8
  unsigned __int16 v9[8]; // [rsp+30h] [rbp-88h] BYREF
  _OWORD v10[6]; // [rsp+40h] [rbp-78h] BYREF

  if ( gbOSTestSigningEnabled )
  {
    v10[0] = *(_OWORD *)L"REMOTE_MONITOR_";
    v10[1] = *(_OWORD *)L"ONITOR_";
    memset(&v10[2], 0, 0x3EuLL);
    v6 = 47LL;
    v7 = v10;
    do
    {
      if ( !*v7 )
        break;
      ++v7;
      --v6;
    }
    while ( v6 );
    if ( v6 && (int)sub_1C004CED0((_WORD *)v10 + 47 - v6, v6, v5, (__int64)a1, 2147483646LL) >= 0 )
    {
      DpiInternal::ScaleOverrideTestHookCore((DpiInternal *)v10, v9, v8);
      if ( *(_DWORD *)v9 )
      {
        *((_DWORD *)a3 + 2) = *(_DWORD *)v9;
        *((_DWORD *)a3 + 21) = 1234567;
      }
    }
  }
}

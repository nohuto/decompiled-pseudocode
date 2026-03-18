/*
 * XREFs of ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C006DC3C
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0062A9C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C001F560 (RtlStringCopyWorkerW.c)
 *     ?ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z @ 0x1C006DD28 (-ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

void __fastcall GetRemoteScaleOverrideTestHook(STRSAFE_PCNZWCH pszSrc, __int64 a2, struct _DPI_INFORMATION *a3)
{
  size_t *v5; // r8
  size_t v6; // rcx
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
    if ( v6 && RtlStringCopyWorkerW((NTSTRSAFE_PWSTR)v10 + 47 - v6, v6, v5, pszSrc, 0x7FFFFFFEuLL) >= 0 )
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

/*
 * XREFs of ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C0087494
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00671D4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 * Callees:
 *     ?ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z @ 0x1C008753C (-ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z.c)
 *     ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C0087764 (-RtlStringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

void __fastcall GetRemoteScaleOverrideTestHook(const unsigned __int16 *a1, __int64 a2, struct _DPI_INFORMATION *a3)
{
  unsigned int *v5; // r8
  unsigned __int16 v6[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int16 v7[8]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v8; // [rsp+40h] [rbp-68h]
  _BYTE v9[62]; // [rsp+50h] [rbp-58h] BYREF

  if ( gbOSTestSigningEnabled )
  {
    *(_OWORD *)v7 = *(_OWORD *)L"REMOTE_MONITOR_";
    v8 = *(_OWORD *)L"ONITOR_";
    memset(v9, 0, sizeof(v9));
    if ( RtlStringCchCatW(v7, 0x2FuLL, a1) >= 0 )
    {
      DpiInternal::ScaleOverrideTestHookCore((DpiInternal *)v7, v6, v5);
      if ( *(_DWORD *)v6 )
      {
        *((_DWORD *)a3 + 2) = *(_DWORD *)v6;
        *((_DWORD *)a3 + 21) = 1234567;
      }
    }
  }
}

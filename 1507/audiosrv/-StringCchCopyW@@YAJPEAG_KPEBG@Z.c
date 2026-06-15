/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002E51C
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800190D0 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAG@Z @ 0x18001EFC0 (-GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?Initialize@CAudioSessionStore@@QEAAJPEBG@Z @ 0x180035CF8 (-Initialize@CAudioSessionStore@@QEAAJPEBG@Z.c)
 *     ??0CSaDeviceInstance@@IEAA@PEBGW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HU_GUID@@K_KPEAJ@Z @ 0x18007365C (--0CSaDeviceInstance@@IEAA@PEBGW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ServiceDeviceEventCallback @ 0x18009DEC0 (ServiceDeviceEventCallback.c)
 * Callees:
 *     StringCopyWorkerW_0 @ 0x18002E560 (StringCopyWorkerW_0.c)
 */

__int64 __fastcall StringCchCopyW(unsigned __int16 *a1, size_t a2, size_t *a3)
{
  int v3; // r9d
  size_t v5; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( a2 - 1 > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)StringCopyWorkerW_0(a1, a2, a3, (STRSAFE_PCNZWCH)a3, v5);
  }
  return (unsigned int)v3;
}

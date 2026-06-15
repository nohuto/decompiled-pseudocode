/*
 * XREFs of ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x18007003C
 * Callers:
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180069B84 (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18006A020 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18006A538 (-DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_a.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ValidateAPOInputFormat(struct IAudioMediaType *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  double v3; // xmm1_8

  v1 = 0;
  v2 = ((__int64 (__fastcall *)(struct IAudioMediaType *))a1->lpVtbl->GetAudioFormat)(a1);
  if ( !v2
    || (v3 = (double)*(int *)(v2 + 4), v3 > 384000.0)
    || v3 < 10.0
    || *(_WORD *)(v2 + 2) > 0x1000u
    || !*(_WORD *)(v2 + 2) )
  {
    v1 = -2004287480;
    AudSrvTraceLoggingErrorHelper("ValidateAPOInputFormat", 1071, -2004287480);
  }
  return v1;
}

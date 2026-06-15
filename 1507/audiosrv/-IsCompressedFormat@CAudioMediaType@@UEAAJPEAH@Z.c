/*
 * XREFs of ?IsCompressedFormat@CAudioMediaType@@UEAAJPEAH@Z @ 0x180037D60
 * Callers:
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800330E8 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioMediaType::IsCompressedFormat(CAudioMediaType *this, int *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147942487LL;
  *a2 = *((_DWORD *)this + 3);
  return result;
}

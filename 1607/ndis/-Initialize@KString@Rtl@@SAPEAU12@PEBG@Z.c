/*
 * XREFs of ?Initialize@KString@Rtl@@SAPEAU12@PEBG@Z @ 0x1C00AA3C8
 * Callers:
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C00AAE98 (ndisIfReadInterfaceAddDeviceParameters.c)
 *     ??$QueryValueMultisz@V_lambda_ab37ff936e37ec89cf58545827f832d7_@@V_lambda_b9d9cb4442cf1f3c11bfda5894fd36a4_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_ab37ff936e37ec89cf58545827f832d7_@@V_lambda_b9d9cb4442cf1f3c11bfda5894fd36a4_@@@Z @ 0x1C00D1D44 (--$QueryValueMultisz@V_lambda_ab37ff936e37ec89cf58545827f832d7_@@V_lambda_b9d9cb444_ea_1C00D1D44.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E93B4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C00A8134 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 */

struct Rtl::KString *__fastcall Rtl::KString::Initialize(wchar_t *a1)
{
  struct Rtl::KString *result; // rax
  wchar_t *v2; // rdx
  struct _UNICODE_STRING v3; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)&v3.Length = 0;
  v3.Buffer = 0LL;
  if ( !a1 )
    return Rtl::KString::Initialize(&v3);
  result = (struct Rtl::KString *)0x7FFF;
  v2 = a1;
  do
  {
    if ( !*v2 )
      break;
    ++v2;
    result = (struct Rtl::KString *)((char *)result - 1);
  }
  while ( result );
  if ( result )
  {
    v3.Buffer = a1;
    v3.Length = 2 * (0x7FFF - (_WORD)result);
    v3.MaximumLength = v3.Length + 2;
    return Rtl::KString::Initialize(&v3);
  }
  return result;
}

/*
 * XREFs of ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@@Z @ 0x1C00A7F90
 * Callers:
 *     ?ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ @ 0x1C00A15A8 (-ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     ?reset@?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@QEAAXPEAUKString@Rtl@@@Z @ 0x1C00A80D4 (-reset@-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@QEAAXPEAUKString@Rtl@@@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C00A8134 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 */

NTSTATUS __fastcall KRegKey::GetSubkeyName(void **a1, ULONG a2, _QWORD *a3)
{
  void *v3; // rcx
  NTSTATUS result; // eax
  struct Rtl::KString *v6; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-258h] BYREF
  struct _UNICODE_STRING v8; // [rsp+38h] [rbp-250h] BYREF
  _BYTE KeyInformation[12]; // [rsp+50h] [rbp-238h] BYREF
  unsigned int v10; // [rsp+5Ch] [rbp-22Ch]
  _WORD v11[264]; // [rsp+60h] [rbp-228h] BYREF

  v3 = *a1;
  ResultLength = 0;
  result = ZwEnumerateKey(v3, a2, KeyBasicInformation, KeyInformation, 0x218u, &ResultLength);
  if ( result >= 0 )
  {
    if ( v10 > 0x200 )
    {
      return -1073741562;
    }
    else
    {
      v11[(unsigned __int64)v10 >> 1] = 0;
      v8.Length = v10;
      v8.MaximumLength = v10 + 2;
      v8.Buffer = v11;
      v6 = Rtl::KString::Initialize(&v8);
      KPtr<Rtl::KString,KDeletePtr<Rtl::KString>>::reset(a3, v6);
      return *a3 == 0LL ? 0xC000009A : 0;
    }
  }
  return result;
}

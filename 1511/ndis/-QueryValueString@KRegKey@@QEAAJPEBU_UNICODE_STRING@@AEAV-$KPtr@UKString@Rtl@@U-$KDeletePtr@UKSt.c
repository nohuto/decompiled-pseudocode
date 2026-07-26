/*
 * XREFs of ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@@Z @ 0x1C00A1BAC
 * Callers:
 *     ?QueryValueString@KRegKey@@QEAAJPEBGAEAV?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@@Z @ 0x1C00A1EE0 (-QueryValueString@KRegKey@@QEAAJPEBGAEAV-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     ?reset@?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@QEAAXPEAUKString@Rtl@@@Z @ 0x1C00A210C (-reset@-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@QEAAXPEAUKString@Rtl@@@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C00A216C (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     ?reset@?$KPtr@EU?$KDeleteArray@E@@@@QEAAXPEAE@Z @ 0x1C00BF740 (-reset@-$KPtr@EU-$KDeleteArray@E@@@@QEAAXPEAE@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueString(HANDLE *a1, _UNICODE_STRING *a2, _QWORD *a3)
{
  HANDLE v5; // rcx
  _BYTE *v6; // rbx
  _BYTE *v8; // rsi
  NTSTATUS v9; // eax
  NTSTATUS v10; // edi
  int v11; // eax
  wchar_t *v12; // rsi
  unsigned __int16 v13; // cx
  struct Rtl::KString *v14; // rax
  PVOID PoolWithTag; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING v18; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+50h] [rbp-B0h] BYREF

  v5 = *a1;
  v6 = 0LL;
  *(_QWORD *)&v18.Length = 0LL;
  v8 = KeyValueInformation;
  v9 = ZwQueryValueKey(v5, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  v10 = v9;
  if ( v9 != -2147483643 )
  {
    if ( v9 < 0 )
      goto LABEL_10;
    goto LABEL_3;
  }
  if ( ResultLength > 0x100000 )
  {
    v10 = -1073740757;
    goto LABEL_10;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x72745352u);
  KPtr<unsigned char,KDeleteArray<unsigned char>>::reset(&v18, PoolWithTag);
  v6 = *(_BYTE **)&v18.Length;
  if ( !*(_QWORD *)&v18.Length )
  {
    v10 = -1073741670;
    goto LABEL_10;
  }
  v10 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, *(PVOID *)&v18.Length, ResultLength, &ResultLength);
  if ( v10 >= 0 )
  {
    v8 = v6;
LABEL_3:
    if ( *((_DWORD *)v8 + 1) == 1 )
    {
      v11 = *((_DWORD *)v8 + 2);
      if ( (v11 & 1) != 0 )
      {
        v10 = -1073741811;
      }
      else
      {
        v12 = (wchar_t *)(v8 + 12);
        v18.Length = v11;
        v18.MaximumLength = v11;
        v13 = v11;
        v18.Buffer = v12;
        if ( (unsigned __int16)v11 >= 2u )
        {
          do
          {
            if ( v12[((unsigned __int64)v13 >> 1) - 1] )
              break;
            v13 -= 2;
          }
          while ( v13 >= 2u );
          v18.Length = v13;
        }
        v14 = Rtl::KString::Initialize(&v18);
        KPtr<Rtl::KString,KDeletePtr<Rtl::KString>>::reset(a3, v14);
        v10 = -1073741670;
        if ( *a3 )
          v10 = 0;
      }
    }
    else
    {
      v10 = -1073741788;
    }
  }
LABEL_10:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v10;
}

/*
 * XREFs of ndisIfReadInterfaceAddDeviceParameters @ 0x1C00AF218
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00AEEAC (ndisPnPAddDevice.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C001D6A4 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     ?reset@?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@QEAAXPEAUKString@Rtl@@@Z @ 0x1C00A0598 (-reset@-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@QEAAXPEAUKString@Rtl@@@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z @ 0x1C00A54F8 (-QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z.c)
 *     ?ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z @ 0x1C00AF474 (-ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBG@Z @ 0x1C00AF570 (-Initialize@KString@Rtl@@SAPEAU12@PEBG@Z.c)
 */

__int64 __fastcall ndisIfReadInterfaceAddDeviceParameters(unsigned int *a1)
{
  int v2; // ebx
  unsigned int v4; // ecx
  struct Rtl::KString *v5; // rax
  int v6; // [rsp+20h] [rbp-89h]
  int v7; // [rsp+28h] [rbp-81h]
  int v8; // [rsp+30h] [rbp-79h]
  int v9; // [rsp+38h] [rbp-71h]
  int v10; // [rsp+40h] [rbp-69h]
  int v11; // [rsp+48h] [rbp-61h]
  int v12; // [rsp+50h] [rbp-59h]
  int v13; // [rsp+58h] [rbp-51h]
  int v14; // [rsp+60h] [rbp-49h]
  int v15; // [rsp+68h] [rbp-41h]
  HANDLE Handle; // [rsp+70h] [rbp-39h] BYREF
  unsigned int v17; // [rsp+78h] [rbp-31h] BYREF
  unsigned int v18; // [rsp+7Ch] [rbp-2Dh] BYREF
  wchar_t Dest[48]; // [rsp+80h] [rbp-29h] BYREF

  Handle = 0LL;
  v2 = ndisIfOpenInterfacePersistedStorage((const struct _GUID *)a1, (struct KRegKey *)&Handle, 1u);
  if ( v2 >= 0 )
  {
    v17 = 0;
    if ( KRegKey::QueryValueUlong((KRegKey *)&Handle, (wchar_t *)L"NetLuidIndex", &v17) < 0
      || (v18 = 0, KRegKey::QueryValueUlong((KRegKey *)&Handle, (wchar_t *)L"IfType", &v18) < 0)
      || (v4 = v17,
          *((_WORD *)a1 + 11) = v18,
          *((_QWORD *)a1 + 2) = *((_QWORD *)a1 + 2) & 0xFFFF000000000000uLL | ((unsigned __int64)(v4 & 0xFFFFFF) << 24),
          KRegKey::QueryValueUlong((KRegKey *)&Handle, (wchar_t *)L"PhysicalMediaType", a1 + 7) < 0)
      || (*((_BYTE *)a1 + 24) = 1,
          KRegKey::QueryValueUlong((KRegKey *)&Handle, (wchar_t *)L"Characteristics", a1 + 15) < 0) )
    {
      v2 = -1073741491;
    }
    else
    {
      v15 = *((unsigned __int8 *)a1 + 15);
      v14 = *((unsigned __int8 *)a1 + 14);
      v13 = *((unsigned __int8 *)a1 + 13);
      v12 = *((unsigned __int8 *)a1 + 12);
      v11 = *((unsigned __int8 *)a1 + 11);
      v10 = *((unsigned __int8 *)a1 + 10);
      v9 = *((unsigned __int8 *)a1 + 9);
      v8 = *((unsigned __int8 *)a1 + 8);
      v7 = *((unsigned __int16 *)a1 + 3);
      v6 = *((unsigned __int16 *)a1 + 2);
      v2 = RtlStringCchPrintfW(
             Dest,
             48LL,
             L"\\Device\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
             *a1,
             v6,
             v7,
             v8,
             v9,
             v10,
             v11,
             v12,
             v13,
             v14,
             v15);
      if ( v2 >= 0 )
      {
        v5 = Rtl::KString::Initialize(Dest);
        KPtr<Rtl::KString,KDeletePtr<Rtl::KString>>::reset((void **)a1 + 5, v5);
        if ( *((_QWORD *)a1 + 5) )
          v2 = 0;
        else
          v2 = -1073741670;
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v2;
}

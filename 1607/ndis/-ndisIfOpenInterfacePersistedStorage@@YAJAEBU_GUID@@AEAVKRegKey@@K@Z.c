/*
 * XREFs of ?ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z @ 0x1C00AB064
 * Callers:
 *     ndisIfCreateOrUpdateInterface @ 0x1C0011C80 (ndisIfCreateOrUpdateInterface.c)
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C00AAE98 (ndisIfReadInterfaceAddDeviceParameters.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00C3E60 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0017A44 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF__guid_d @ 0x1C0042E80 (WPP_SF__guid_d.c)
 *     ?Open@KRegKey@@QEAAJKPEBGPEAX@Z @ 0x1C00A8060 (-Open@KRegKey@@QEAAJKPEBGPEAX@Z.c)
 */

__int64 __fastcall ndisIfOpenInterfacePersistedStorage(const struct _GUID *a1, struct KRegKey *a2, ACCESS_MASK a3)
{
  __int64 result; // rax
  int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  int Data2; // [rsp+20h] [rbp-288h]
  int Data3; // [rsp+28h] [rbp-280h]
  int v12; // [rsp+30h] [rbp-278h]
  int v13; // [rsp+38h] [rbp-270h]
  int v14; // [rsp+40h] [rbp-268h]
  int v15; // [rsp+48h] [rbp-260h]
  int v16; // [rsp+50h] [rbp-258h]
  int v17; // [rsp+58h] [rbp-250h]
  int v18; // [rsp+60h] [rbp-248h]
  int v19; // [rsp+68h] [rbp-240h]
  wchar_t Dest[256]; // [rsp+70h] [rbp-238h] BYREF

  v19 = a1->Data4[7];
  v18 = a1->Data4[6];
  v17 = a1->Data4[5];
  v16 = a1->Data4[4];
  v15 = a1->Data4[3];
  v14 = a1->Data4[2];
  v13 = a1->Data4[1];
  v12 = a1->Data4[0];
  Data3 = a1->Data3;
  Data2 = a1->Data2;
  result = RtlStringCchPrintfW(
             Dest,
             256LL,
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Interfaces\\{%08x-%04x-%04x-%02x%02"
              "x-%02x%02x%02x%02x%02x%02x}\\Kernel",
             a1->Data1,
             Data2,
             Data3,
             v12,
             v13,
             v14,
             v15,
             v16,
             v17,
             v18,
             v19);
  if ( (int)result >= 0 )
  {
    v7 = KRegKey::Open(a2, a3, Dest, 0LL);
    v9 = v7;
    if ( v7 < 0 )
    {
      if ( (unsigned __int8)byte_1C00895DD >= 3u )
        WPP_SF__guid_d(0xADu, v8, (__int64)a1, v7);
      return v9;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}

/*
 * XREFs of sub_14067792C @ 0x14067792C
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfW @ 0x14009C26C (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     sub_1404577BC @ 0x1404577BC (sub_1404577BC.c)
 *     sub_1404964E4 @ 0x1404964E4 (sub_1404964E4.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x14069EB98 (PnpGetDeviceInstanceRegistryValue.c)
 */

__int64 __fastcall sub_14067792C(__int64 a1, UNICODE_STRING *a2, __int64 a3, int a4)
{
  PVOID v4; // rbx
  wchar_t *v5; // rdi
  unsigned int v6; // esi
  NTSTATUS DeviceInstanceRegistryValue; // eax
  unsigned int v10; // edi
  __int64 v12; // [rsp+20h] [rbp-E0h]
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v14[10]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v15[8]; // [rsp+70h] [rbp-90h] BYREF
  int v16; // [rsp+78h] [rbp-88h]
  unsigned __int16 v17; // [rsp+7Ch] [rbp-84h]
  wchar_t pszDest[16]; // [rsp+1A0h] [rbp+A0h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  P = 0LL;
  if ( a2 )
  {
    if ( (int)sub_1404964E4(a2, 0x410000u, 0LL, 0, v15, 0x124u, 0LL, 0LL) < 0 )
      goto LABEL_14;
    LODWORD(v12) = v16;
    DeviceInstanceRegistryValue = RtlStringCbPrintfW(pszDest, 0x1AuLL, L"%04x%08x", v17, v12);
    if ( DeviceInstanceRegistryValue < 0 )
      goto LABEL_14;
    v5 = pszDest;
    v6 = 26;
  }
  else
  {
    DeviceInstanceRegistryValue = PnpGetDeviceInstanceRegistryValue(*(_QWORD *)(a3 + 8), 0, a3, a4, (__int64)&P);
    v4 = P;
    if ( DeviceInstanceRegistryValue < 0 )
    {
LABEL_14:
      v10 = 0;
      goto LABEL_15;
    }
    if ( *((_DWORD *)P + 1) == 1 && *((_DWORD *)P + 3) <= 0x1Au )
    {
      v6 = *((_DWORD *)P + 3);
      v5 = (wchar_t *)((char *)P + *((unsigned int *)P + 2));
    }
    else
    {
      DeviceInstanceRegistryValue = -1073741823;
    }
  }
  if ( DeviceInstanceRegistryValue < 0 )
    goto LABEL_14;
  if ( !*(_BYTE *)(a1 + 12) )
  {
    memset(v14, 0, 0x20uLL);
    HIWORD(v14[1]) = *(_WORD *)(a3 + 32);
    BYTE1(v14[1]) = *(_BYTE *)(a3 + 34);
    v14[2] = *(_DWORD *)(a3 + 36);
    LOBYTE(v14[1]) = 2;
    *(GUID *)&v14[3] = GUID_BTHPORT_DEVICE_INTERFACE;
  }
  v10 = sub_1404577BC(a1, (__int64)v14, v5, v6);
LABEL_15:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v10;
}

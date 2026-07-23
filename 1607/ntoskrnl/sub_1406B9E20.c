/*
 * XREFs of sub_1406B9E20 @ 0x1406B9E20
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExpHwidAppendDeviceInfoBlock @ 0x1404D8AA8 (ExpHwidAppendDeviceInfoBlock.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140500D54 (ExpHwidSendSynchronousIrpToDevice.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x1406E5C2C (PnpGetDeviceInstanceRegistryValue.c)
 */

__int64 __fastcall sub_1406B9E20(__int64 a1, UNICODE_STRING *a2, __int64 a3, int a4)
{
  PVOID v4; // rbx
  wchar_t *v5; // rdi
  unsigned int v6; // esi
  NTSTATUS DeviceInstanceRegistryValue; // eax
  unsigned int appended; // edi
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
    if ( (int)ExpHwidSendSynchronousIrpToDevice(a2, 0x410000u, 0LL, 0, v15, 0x124u, 0LL, 0LL) < 0 )
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
      appended = 0;
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
  appended = ExpHwidAppendDeviceInfoBlock(a1, (__int64)v14, v5, v6);
LABEL_15:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return appended;
}

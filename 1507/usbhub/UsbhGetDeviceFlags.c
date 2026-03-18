/*
 * XREFs of UsbhGetDeviceFlags @ 0x1C0006AA0
 * Callers:
 *     UsbhCheckDeviceErrata @ 0x1C0005778 (UsbhCheckDeviceErrata.c)
 *     UsbhCheckHubErrata @ 0x1C000671C (UsbhCheckHubErrata.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C0006BC0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall UsbhGetDeviceFlags(unsigned __int16 *a1, _QWORD *a2, char a3)
{
  const wchar_t *v4; // r8
  NTSTATUS result; // eax
  const wchar_t *v8; // r8
  int v9; // [rsp+20h] [rbp-88h]
  __int64 v10; // [rsp+20h] [rbp-88h]
  int v11; // [rsp+28h] [rbp-80h]
  __int128 v12; // [rsp+30h] [rbp-78h] BYREF
  wchar_t pszDest[40]; // [rsp+40h] [rbp-68h] BYREF

  *a2 = 0LL;
  v12 = 0uLL;
  v4 = L"USB:ROOT_HUB\\VID_%04X&PID_%04X&REV_%04X";
  if ( a3 != 1 )
    v4 = L"USB:USB\\VID_%04X&PID_%04X&REV_%04X";
  v11 = a1[6];
  v9 = a1[5];
  result = RtlStringCbPrintfW(pszDest, 0x50uLL, v4, a1[4], v9, v11);
  if ( result < 0 )
    goto LABEL_8;
  KseQueryDeviceFlags(pszDest, L"USB", (char *)&v12 + 8);
  v8 = L"USB:ROOT_HUB\\VID_%04X&PID_%04X";
  if ( a3 != 1 )
    v8 = L"USB:USB\\VID_%04X&PID_%04X";
  LODWORD(v10) = a1[5];
  result = RtlStringCbPrintfW(pszDest, 0x50uLL, v8, a1[4], v10);
  if ( result < 0 )
  {
LABEL_8:
    *a2 = 0LL;
  }
  else
  {
    KseQueryDeviceFlags(pszDest, L"USB", &v12);
    result = v12 | DWORD2(v12);
    *a2 = v12 | *((_QWORD *)&v12 + 1);
  }
  return result;
}

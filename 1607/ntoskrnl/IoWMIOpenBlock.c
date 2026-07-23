/*
 * XREFs of IoWMIOpenBlock @ 0x140545C0C
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x14007F58C (RtlStringCchPrintfW.c)
 *     RtlStringCchCopyW @ 0x14010B1EC (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     WmipOpenBlock @ 0x1404733AC (WmipOpenBlock.c)
 */

NTSTATUS __stdcall IoWMIOpenBlock(LPCGUID Guid, ULONG DesiredAccess, PVOID *DataBlockObject)
{
  int v6; // ecx
  NTSTATUS result; // eax
  int Data2; // [rsp+20h] [rbp-E0h]
  int Data3; // [rsp+28h] [rbp-D8h]
  int v10; // [rsp+30h] [rbp-D0h]
  int v11; // [rsp+38h] [rbp-C8h]
  int v12; // [rsp+40h] [rbp-C0h]
  int v13; // [rsp+48h] [rbp-B8h]
  int v14; // [rsp+50h] [rbp-B0h]
  int v15; // [rsp+58h] [rbp-A8h]
  int v16; // [rsp+60h] [rbp-A0h]
  int v17; // [rsp+68h] [rbp-98h]
  void *v18; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v20[7]; // [rsp+88h] [rbp-78h] BYREF
  wchar_t pszDest[9]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t v22[39]; // [rsp+D2h] [rbp-2Eh] BYREF

  RtlStringCchCopyW(pszDest, 0x2EuLL, L"\\WmiGuid\\");
  v17 = Guid->Data4[7];
  v16 = Guid->Data4[6];
  v15 = Guid->Data4[5];
  v14 = Guid->Data4[4];
  v13 = Guid->Data4[3];
  v12 = Guid->Data4[2];
  v11 = Guid->Data4[1];
  v10 = Guid->Data4[0];
  Data3 = Guid->Data3;
  Data2 = Guid->Data2;
  RtlStringCchPrintfW(
    v22,
    0x25uLL,
    L"%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",
    Guid->Data1,
    Data2,
    Data3,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  RtlInitUnicodeString(&DestinationString, pszDest);
  memset(v20, 0, 0x30uLL);
  LODWORD(v20[0]) = 48;
  v20[2] = &DestinationString;
  LODWORD(v20[3]) = 512;
  if ( (DesiredAccess & 4) != 0 )
    v6 = 2244928;
  else
    v6 = (DesiredAccess & 0x40000) != 0 ? 2244872 : 2244924;
  result = WmipOpenBlock(v6, 0LL, (__int64)v20, DesiredAccess, &v18);
  if ( result >= 0 )
  {
    *DataBlockObject = v18;
    return 0;
  }
  return result;
}

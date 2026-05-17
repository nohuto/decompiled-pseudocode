/*
 * XREFs of RtlCreateBootStatusDataFile @ 0x1800E2A00
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlGetNtProductType @ 0x1800743D0 (RtlGetNtProductType.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     wcscpy_s @ 0x1800A10C0 (wcscpy_s.c)
 *     NtWriteFile @ 0x1800A51C0 (NtWriteFile.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwCreateFile @ 0x1800A5B60 (ZwCreateFile.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlCreateBootStatusDataFile(wchar_t *a1)
{
  wchar_t *v1; // rdx
  __int64 result; // rax
  int v3; // ebx
  HANDLE Handle; // [rsp+70h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  int v6; // [rsp+98h] [rbp-68h]
  __int64 v7; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING *p_DestinationString; // [rsp+A8h] [rbp-58h]
  int v9; // [rsp+B0h] [rbp-50h]
  __int128 v10; // [rsp+B8h] [rbp-48h]
  _DWORD v11[16]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t Destination[264]; // [rsp+110h] [rbp+10h] BYREF

  if ( a1 )
  {
    v1 = a1;
  }
  else
  {
    wcscpy_s(Destination, 0x101uLL, L"\\SystemRoot\\bootstat.dat");
    v1 = Destination;
  }
  RtlInitUnicodeString(&DestinationString, v1);
  v7 = 0LL;
  p_DestinationString = &DestinationString;
  v6 = 48;
  v9 = 64;
  v10 = 0LL;
  result = ZwCreateFile();
  if ( (int)result >= 0 )
  {
    v3 = NtWriteFile();
    if ( v3 >= 0 )
    {
      memset(v11, 0, sizeof(v11));
      v11[0] = 64;
      RtlGetNtProductType(&v11[1]);
      *(_WORD *)((char *)&v11[2] + 1) = 286;
      BYTE1(v11[12]) = 1;
      v3 = NtWriteFile();
    }
    NtClose(Handle);
    return (unsigned int)v3;
  }
  return result;
}

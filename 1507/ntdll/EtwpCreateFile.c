/*
 * XREFs of EtwpCreateFile @ 0x1800787B8
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x18000C5FC (EtwpAddLogHeaderToLogFile.c)
 * Callees:
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x18001C280 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     RtlFreeAnsiString @ 0x180027410 (RtlFreeAnsiString.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwSetInformationFile @ 0x180093B70 (ZwSetInformationFile.c)
 *     ZwCreateFile @ 0x180093E50 (ZwCreateFile.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall EtwpCreateFile(PCWSTR SourceString, __int64 a2, __int64 a3, _BYTE *a4, int a5, _QWORD *a6)
{
  int v8; // r15d
  bool v9; // di
  int v10; // ebx
  __int64 v12; // [rsp+60h] [rbp-79h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-71h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-61h] BYREF
  _BYTE v15[8]; // [rsp+88h] [rbp-51h] BYREF
  __int64 v16; // [rsp+90h] [rbp-49h]
  int v17; // [rsp+98h] [rbp-41h] BYREF
  __int64 v18; // [rsp+A0h] [rbp-39h]
  UNICODE_STRING *p_UnicodeString; // [rsp+A8h] [rbp-31h]
  int v20; // [rsp+B0h] [rbp-29h]
  __int128 v21; // [rsp+B8h] [rbp-21h]
  _DWORD v22[10]; // [rsp+C8h] [rbp-11h] BYREF

  *a6 = 0LL;
  v8 = 5;
  if ( *a4 == 1 )
    v8 = 3;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v9 = 0;
  if ( DestinationString.Length > 1u )
    v9 = SourceString[((unsigned __int64)DestinationString.Length >> 1) - 1] == 92;
  v10 = RtlDosPathNameToNtPathName_U_WithStatus((int)DestinationString.Buffer, (int)&UnicodeString, 0LL, 0LL);
  if ( v10 >= 0 )
  {
    v18 = 0LL;
    v17 = 48;
    v20 = 64;
    p_UnicodeString = &UnicodeString;
    v21 = 0LL;
    v10 = ZwCreateFile(&v12, 3222274176LL, &v17, v15, 0LL, 128, 5, v8, 104, 0LL, 0);
    if ( v10 >= 0 )
    {
      if ( *a4 == 1 && v16 == 2 )
        *a4 = 0;
      if ( !v9 )
      {
        memset(v22, 0, sizeof(v22));
        v22[8] = 0x2000;
        v10 = ZwSetInformationFile(v12, v15, v22, 40LL, 4);
      }
      *a6 = v12;
    }
  }
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v10;
}

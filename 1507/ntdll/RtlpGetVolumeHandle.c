/*
 * XREFs of RtlpGetVolumeHandle @ 0x180081340
 * Callers:
 *     RtlpDiskSpeedInitialize @ 0x180081220 (RtlpDiskSpeedInitialize.c)
 * Callees:
 *     StringCbPrintfW @ 0x18000392C (StringCbPrintfW.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwCreateFile @ 0x180093E50 (ZwCreateFile.c)
 */

NTSTATUS __fastcall RtlpGetVolumeHandle(unsigned __int16 *a1, HANDLE *a2)
{
  __int64 v2; // r9
  __int64 v4; // rax
  wchar_t *v5; // rcx
  NTSTATUS result; // eax
  int v7; // [rsp+60h] [rbp-29h] BYREF
  wchar_t *v8; // [rsp+68h] [rbp-21h]
  HANDLE FileHandle; // [rsp+70h] [rbp-19h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-11h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp+1Fh] BYREF
  wchar_t pszDest[12]; // [rsp+B8h] [rbp+2Fh] BYREF

  v2 = *a1;
  FileHandle = 0LL;
  StringCbPrintfW(pszDest, 0x14uLL, L"\\??\\%C:", v2);
  v7 = 0;
  v4 = 0x7FFFLL;
  v8 = 0LL;
  v5 = pszDest;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  if ( v4 )
  {
    LOWORD(v7) = 2 * (0x7FFF - v4);
    HIWORD(v7) = v7 + 2;
    v8 = pszDest;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v7;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x20u, 0LL, 0);
  if ( result >= 0 )
  {
    *a2 = FileHandle;
    return 0;
  }
  return result;
}

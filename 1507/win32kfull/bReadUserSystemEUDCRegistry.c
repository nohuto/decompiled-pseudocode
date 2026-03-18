/*
 * XREFs of bReadUserSystemEUDCRegistry @ 0x1C013D870
 * Callers:
 *     bAddAllFlEntry @ 0x1C013DE28 (bAddAllFlEntry.c)
 * Callees:
 *     GetUserEUDCRegistryPath @ 0x1C013CB34 (GetUserEUDCRegistryPath.c)
 *     bNotIsKeySymbolicLink @ 0x1C013CBD4 (bNotIsKeySymbolicLink.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C013F8A4 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C028B364 (bWriteUserSystemEUDCRegistry.c)
 */

__int64 __fastcall bReadUserSystemEUDCRegistry(wchar_t *Dst)
{
  WCHAR *v2; // rdi
  WCHAR *v3; // rbx
  WCHAR *v4; // rcx
  int UserEUDCRegistryPath; // esi
  unsigned int v6; // r14d
  wchar_t *v8; // rax
  wchar_t *v9; // rsi
  __int64 v10; // rax
  PCWSTR Path; // [rsp+30h] [rbp-20h] BYREF
  WCHAR *v12; // [rsp+38h] [rbp-18h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+50h] BYREF
  HANDLE v15; // [rsp+A8h] [rbp+58h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v12, 0x208u);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Path, 0x208u);
  v2 = v12;
  v3 = (WCHAR *)Path;
  if ( !v12 || !Path )
    goto LABEL_10;
  Handle = 0LL;
  v4 = (WCHAR *)Path;
  v15 = 0LL;
  *v12 = 0;
  *v3 = 0;
  *(_DWORD *)&DestinationString.Length = 17039360;
  DestinationString.Buffer = v2;
  UserEUDCRegistryPath = GetUserEUDCRegistryPath(v4);
  if ( UserEUDCRegistryPath >= 0 )
  {
    bNotIsKeySymbolicLink(v3, &Handle, &v15);
    UserEUDCRegistryPath = -1073741824;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v15 )
    ZwClose(v15);
  v6 = 1;
  if ( UserEUDCRegistryPath != -1073741772 )
    goto LABEL_10;
  v8 = wcsrchr(v3, 0x5Cu);
  v9 = v8;
  if ( !v8 )
    goto LABEL_10;
  if ( _wcsicmp(v8 + 1, word_1C0328980) )
    goto LABEL_10;
  *v9 = 0;
  RtlCreateRegistryKey(0, v3);
  *v9 = 92;
  RtlCreateRegistryKey(0, v3);
  v10 = -1LL;
  do
    ++v10;
  while ( ValueData[v10] );
  if ( !(unsigned int)bWriteUserSystemEUDCRegistry((PVOID)L"EUDC.TTE")
    || (RtlInitUnicodeString(&DestinationString, L"EUDC.TTE"),
        wcsncpy_s(Dst, 0x104uLL, DestinationString.Buffer, DestinationString.Length)) )
  {
LABEL_10:
    v6 = 0;
  }
  if ( v3 )
    Win32FreePool(v3);
  if ( v2 )
    Win32FreePool(v2);
  return v6;
}

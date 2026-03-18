/*
 * XREFs of bReadUserSystemEUDCRegistry @ 0x1400CAFA4
 * Callers:
 *     bAddAllFlEntry @ 0x1400CAAB4 (bAddAllFlEntry.c)
 * Callees:
 *     GetUserEUDCRegistryPath @ 0x1400CB2E4 (GetUserEUDCRegistryPath.c)
 *     bNotIsKeySymbolicLink @ 0x1400CB428 (bNotIsKeySymbolicLink.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x140187408 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     bWriteUserSystemEUDCRegistry @ 0x140324B28 (bWriteUserSystemEUDCRegistry.c)
 */

__int64 __fastcall bReadUserSystemEUDCRegistry(wchar_t *Dst)
{
  WCHAR *v2; // rdi
  WCHAR *v3; // rbx
  int UserEUDCRegistryPath; // esi
  void *v5; // rcx
  wchar_t *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 SessionState; // rax
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  WCHAR *v13; // [rsp+38h] [rbp-18h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+50h] BYREF
  HANDLE v16; // [rsp+A8h] [rbp+58h] BYREF

  v13 = (WCHAR *)Win32AllocPoolZInit(520LL, 1886221383LL);
  v2 = v13;
  if ( !v13 )
    EngSetLastError(8u);
  v12 = Win32AllocPoolZInit(520LL, 1886221383LL);
  v3 = (WCHAR *)v12;
  if ( !v12 )
    EngSetLastError(8u);
  if ( !v13 )
  {
    if ( !v12 )
      return 0LL;
    v5 = (void *)v12;
LABEL_16:
    Win32FreePool(v5);
    return 0LL;
  }
  if ( !v12 )
  {
LABEL_15:
    v5 = v2;
    goto LABEL_16;
  }
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  Handle = 0LL;
  v16 = 0LL;
  *v13 = 0;
  *v3 = 0;
  *(_DWORD *)&DestinationString.Length = 17039360;
  DestinationString.Buffer = v2;
  UserEUDCRegistryPath = GetUserEUDCRegistryPath(v3);
  if ( UserEUDCRegistryPath >= 0 )
  {
    bNotIsKeySymbolicLink(v3, &Handle, &v16);
    UserEUDCRegistryPath = -1073741824;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v16 )
    ZwClose(v16);
  if ( UserEUDCRegistryPath != -1073741772
    || (v7 = wcsrchr(v3, 0x5Cu), SessionState = W32GetSessionState(v9, v8, v10), !v7)
    || _wcsicmp(v7 + 1, (const wchar_t *)(*(_QWORD *)(SessionState + 96) + 14144LL))
    || (*v7 = 0,
        RtlCreateRegistryKey(0, v3),
        *v7 = 92,
        RtlCreateRegistryKey(0, v3),
        !(unsigned int)bWriteUserSystemEUDCRegistry((PVOID)L"EUDC.TTE"))
    || (RtlInitUnicodeString(&DestinationString, L"EUDC.TTE"),
        wcsncpy_s(Dst, 0x104uLL, DestinationString.Buffer, DestinationString.Length)) )
  {
    Win32FreePool(v3);
    goto LABEL_15;
  }
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v12);
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v13);
  return 1LL;
}

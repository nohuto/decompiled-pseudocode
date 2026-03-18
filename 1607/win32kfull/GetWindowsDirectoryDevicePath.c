/*
 * XREFs of GetWindowsDirectoryDevicePath @ 0x1C00E6E38
 * Callers:
 *     ?ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z @ 0x1C00E6C0C (-ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z.c)
 * Callees:
 *     ?GetSymbolicLink@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C00E6F60 (-GetSymbolicLink@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 */

__int64 __fastcall GetWindowsDirectoryDevicePath(PUNICODE_STRING DestinationString)
{
  WCHAR *v2; // rsi
  WCHAR *v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  WCHAR *v7; // rdi
  int SymbolicLink; // ebx
  WCHAR *v9; // rbx
  wchar_t *v10; // rax
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-20h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-10h] BYREF

  v2 = 0LL;
  v3 = (WCHAR *)Win32AllocPool(520LL, 1651209045LL);
  v4 = Win32AllocPool(520LL, 1651209045LL);
  v7 = (WCHAR *)v4;
  if ( v3 && v4 )
  {
    SourceString.Buffer = v3;
    *(_DWORD *)&SourceString.Length = 34078720;
    SymbolicLink = GetSymbolicLink(&SourceString, L"\\SystemRoot");
    if ( SymbolicLink >= 0 )
    {
      Destination.Buffer = v7;
      *(_DWORD *)&Destination.Length = 34078720;
      while ( 1 )
      {
        v9 = v2;
        v10 = wcsrchr(SourceString.Buffer, 0x5Cu);
        v2 = v10;
        if ( v9 )
          *v9 = 92;
        if ( !v10 )
          break;
        *v10 = 0;
        SymbolicLink = GetSymbolicLink(&Destination, SourceString.Buffer);
        if ( SymbolicLink >= 0 )
        {
          *v2 = 92;
          RtlAppendUnicodeToString(&Destination, v2);
          RtlCopyUnicodeString(DestinationString, &Destination);
          goto LABEL_10;
        }
      }
      RtlCopyUnicodeString(DestinationString, &SourceString);
      SymbolicLink = 0;
    }
  }
  else
  {
    SymbolicLink = -1073741801;
  }
LABEL_10:
  if ( v3 )
    Win32FreePool(v3, v5, v6);
  if ( v7 )
    Win32FreePool(v7, v5, v6);
  return (unsigned int)SymbolicLink;
}

/*
 * XREFs of LdrpFindLoadedDllInternal @ 0x1800123E8
 * Callers:
 *     LdrpFindLoadedDll @ 0x180012320 (LdrpFindLoadedDll.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800094D0 (NtdllpFreeStringRoutine.c)
 *     LdrpFreeUnicodeString @ 0x18000E8EC (LdrpFreeUnicodeString.c)
 *     LdrpSearchPath @ 0x18000EBE0 (LdrpSearchPath.c)
 *     LdrpResolveDllName @ 0x18000FA84 (LdrpResolveDllName.c)
 *     LdrpFindLoadedDllByName @ 0x18001A3CC (LdrpFindLoadedDllByName.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18007832C (LdrpFindLoadedDllByMappingFile.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpFindLoadedDllInternal(UNICODE_STRING *a1, __int64 a2, _QWORD *a3, __int64 a4, __int16 a5)
{
  unsigned int LoadedDllByName; // ebx
  int v9; // eax
  _UNICODE_STRING SourceString; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING String1; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING v12; // [rsp+70h] [rbp-90h] BYREF
  _WORD v13[128]; // [rsp+80h] [rbp-80h] BYREF

  *a3 = 0LL;
  if ( (a5 & 0x20) != 0 )
  {
    LoadedDllByName = LdrpFindLoadedDllByName(a1, 0LL, a4);
  }
  else
  {
    *(_DWORD *)&v12.Length = 0x1000000;
    v12.Buffer = v13;
    v13[0] = 0;
    *(_QWORD *)&SourceString.Length = 0LL;
    SourceString.Buffer = 0LL;
    if ( (a5 & 0x200) != 0 )
      v9 = LdrpResolveDllName(a1, &v12, &String1, &SourceString, 0LL, a5);
    else
      v9 = LdrpSearchPath(a1, a2, 0, 0LL, &v12, (__int64)&String1, &SourceString, 0LL, 0LL);
    LoadedDllByName = v9;
    if ( v9 >= 0 )
    {
      LoadedDllByName = LdrpFindLoadedDllByName(&String1, &SourceString, a4);
      if ( LoadedDllByName == -1073741515 )
        LoadedDllByName = LdrpFindLoadedDllByMappingFile(&v12, a3, a4);
    }
    LdrpFreeUnicodeString((__int64)&SourceString);
    if ( v13 != v12.Buffer )
      NtdllpFreeStringRoutine(v12.Buffer);
    *(_DWORD *)&v12.Length = 0x1000000;
    v12.Buffer = v13;
    v13[0] = 0;
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      457,
      (unsigned int)"LdrpFindLoadedDllInternal",
      4,
      (__int64)"Status: 0x%08lx\n",
      LoadedDllByName);
  return LoadedDllByName;
}

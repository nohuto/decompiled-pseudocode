/*
 * XREFs of LdrpFindLoadedDllInternal @ 0x1800187EC
 * Callers:
 *     LdrpFindLoadedDll @ 0x18001870C (LdrpFindLoadedDll.c)
 * Callees:
 *     LdrpFindLoadedDllByName @ 0x18002467C (LdrpFindLoadedDllByName.c)
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 *     LdrpSearchPath @ 0x18003F450 (LdrpSearchPath.c)
 *     LdrpResolveDllName @ 0x18003F930 (LdrpResolveDllName.c)
 *     LdrpFreeUnicodeString @ 0x180042C80 (LdrpFreeUnicodeString.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18006BFC4 (LdrpFindLoadedDllByMappingFile.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpFindLoadedDllInternal(_UNICODE_STRING *a1, int a2, _QWORD *a3, __int64 a4, int a5)
{
  unsigned int LoadedDllByName; // ebx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  _UNICODE_STRING v12; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING String1; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+70h] [rbp-90h] BYREF
  _WORD *v15; // [rsp+78h] [rbp-88h]
  _WORD v16[128]; // [rsp+80h] [rbp-80h] BYREF

  *a3 = 0LL;
  if ( (a5 & 0x20) != 0 )
  {
    LoadedDllByName = LdrpFindLoadedDllByName(a1, 0LL, a4);
  }
  else
  {
    v14 = 0x1000000;
    v15 = v16;
    v16[0] = 0;
    *(_QWORD *)&v12.Length = 0LL;
    v12.Buffer = 0LL;
    if ( (a5 & 0x200) != 0 )
      v9 = LdrpResolveDllName(a1, &v14, &String1, &v12, 0LL, a5);
    else
      v9 = LdrpSearchPath((_DWORD)a1, a2, 0, 0, (__int64)&v14, (__int64)&String1, (__int64)&v12, 0LL, 0LL);
    LoadedDllByName = v9;
    if ( v9 >= 0 )
    {
      LoadedDllByName = LdrpFindLoadedDllByName(&String1, &v12, a4);
      if ( LoadedDllByName == -1073741515 )
        LoadedDllByName = LdrpFindLoadedDllByMappingFile(&v14, a3, a4);
    }
    LdrpFreeUnicodeString(&v12);
    if ( v16 != v15 )
      NtdllpFreeStringRoutine(v15, v10, v11);
    v14 = 0x1000000;
    v15 = v16;
    v16[0] = 0;
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      462,
      (unsigned int)"LdrpFindLoadedDllInternal",
      4,
      (__int64)"Status: 0x%08lx\n",
      LoadedDllByName);
  return LoadedDllByName;
}

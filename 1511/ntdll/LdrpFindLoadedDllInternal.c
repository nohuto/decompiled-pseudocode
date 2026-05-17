/*
 * XREFs of LdrpFindLoadedDllInternal @ 0x18001138C
 * Callers:
 *     LdrpFindLoadedDll @ 0x1800112C4 (LdrpFindLoadedDll.c)
 * Callees:
 *     LdrpFreeUnicodeString @ 0x18000A308 (LdrpFreeUnicodeString.c)
 *     LdrpSearchPath @ 0x18000BF00 (LdrpSearchPath.c)
 *     LdrpResolveDllName @ 0x18000CFF8 (LdrpResolveDllName.c)
 *     LdrpFindLoadedDllByName @ 0x180015388 (LdrpFindLoadedDllByName.c)
 *     NtdllpFreeStringRoutine @ 0x1800207A0 (NtdllpFreeStringRoutine.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x180076AA0 (LdrpFindLoadedDllByMappingFile.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpFindLoadedDllInternal(__int128 *a1, __int16 **a2, _QWORD *a3, __int64 a4, int a5)
{
  unsigned int LoadedDllByName; // ebx
  int v9; // eax
  __int128 v10; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v11[16]; // [rsp+60h] [rbp-A0h] BYREF
  int v12; // [rsp+70h] [rbp-90h] BYREF
  _WORD *v13; // [rsp+78h] [rbp-88h]
  _WORD v14[128]; // [rsp+80h] [rbp-80h] BYREF

  *a3 = 0LL;
  if ( (a5 & 0x20) != 0 )
  {
    LoadedDllByName = LdrpFindLoadedDllByName((_DWORD)a1, 0, a5, (_DWORD)a3, a4);
  }
  else
  {
    v12 = 0x1000000;
    v13 = v14;
    v14[0] = 0;
    v10 = 0uLL;
    if ( (a5 & 0x200) != 0 )
      v9 = LdrpResolveDllName(a1, (__int64)&v12, (__int64)v11, &v10, 0LL, a5);
    else
      v9 = LdrpSearchPath((unsigned __int16 *)a1, a2, 0, 0LL, &v12, (__int64)v11, (unsigned __int16 *)&v10, 0LL, 0LL);
    LoadedDllByName = v9;
    if ( v9 >= 0 )
    {
      LoadedDllByName = LdrpFindLoadedDllByName((unsigned int)v11, (unsigned int)&v10, a5, (_DWORD)a3, a4);
      if ( LoadedDllByName == -1073741515 )
        LoadedDllByName = LdrpFindLoadedDllByMappingFile(&v12, a3, a4);
    }
    LdrpFreeUnicodeString((__int64)&v10);
    if ( v14 != v13 )
      NtdllpFreeStringRoutine();
    v12 = 0x1000000;
    v13 = v14;
    v14[0] = 0;
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      462,
      (unsigned int)"LdrpFindLoadedDllInternal",
      4,
      (__int64)"Status: 0x%08lx\n");
  return LoadedDllByName;
}

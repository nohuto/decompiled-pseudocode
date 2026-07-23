/*
 * XREFs of LdrpPreprocessDllName @ 0x1800121A0
 * Callers:
 *     LdrpLoadForwardedDll @ 0x180010DF8 (LdrpLoadForwardedDll.c)
 *     LdrpFindLoadedDll @ 0x1800112C4 (LdrpFindLoadedDll.c)
 *     LdrpLoadDll @ 0x18001190C (LdrpLoadDll.c)
 * Callees:
 *     LdrpGetFullPath @ 0x18000C3E0 (LdrpGetFullPath.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180012044 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpApplyFileNameRedirection @ 0x180012354 (LdrpApplyFileNameRedirection.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180017C70 (RtlDetermineDosPathNameType_Ustr.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpPreprocessDllName(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3, _BYTE *a4)
{
  bool v5; // zf
  int appended; // ebx
  char v9; // r14
  unsigned __int16 *v10; // r15
  unsigned __int64 v11; // rdx
  _WORD *i; // rcx
  unsigned __int64 v13; // rdx
  _WORD *j; // rcx
  unsigned __int64 v15; // rdx
  _WORD *k; // rcx
  char v18; // [rsp+88h] [rbp+20h] BYREF

  v5 = (*a4 & 8) == 0;
  v18 = 0;
  appended = 0;
  v9 = 0;
  if ( v5 )
  {
    appended = LdrpApplyFileNameRedirection(a3, a1, a3, a2, &v18);
    if ( appended < 0 )
    {
LABEL_34:
      if ( (LdrpDebugFlags & 3) != 0 )
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          2653,
          (unsigned int)"LdrpPreprocessDllName",
          0,
          (__int64)"LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n");
      if ( (LdrpDebugFlags & 0x10) != 0 )
        __debugbreak();
      return (unsigned int)appended;
    }
    v9 = v18;
  }
  v10 = a1;
  if ( *a2 )
  {
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        2598,
        (unsigned int)"LdrpPreprocessDllName",
        2,
        (__int64)"DLL %wZ was redirected to %wZ by %s\n");
    *(_DWORD *)a4 |= 0x200u;
    if ( v9 )
      *(_DWORD *)a4 |= 4u;
    v10 = a2;
    goto LABEL_12;
  }
  v11 = *((_QWORD *)a1 + 1);
  for ( i = (_WORD *)(*a1 + v11 - 2); ; --i )
  {
    if ( (unsigned __int64)i < v11 )
    {
      *(_DWORD *)a4 |= 0x20u;
LABEL_11:
      appended = LdrpAppendUnicodeStringToFilenameBuffer(a2, a1);
      goto LABEL_12;
    }
    if ( *i == 92 || *i == 47 )
      break;
  }
  if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(a1) == 5 )
    goto LABEL_11;
  appended = LdrpGetFullPath((__int64)a1, (__int64)a2);
  if ( appended < 0 )
    goto LABEL_34;
  *(_DWORD *)a4 |= 0x600u;
LABEL_12:
  if ( appended < 0 )
    goto LABEL_34;
  v13 = *((_QWORD *)v10 + 1);
  for ( j = (_WORD *)(*v10 + v13 - 2); ; --j )
  {
    if ( (unsigned __int64)j < v13 )
    {
LABEL_30:
      appended = LdrpAppendUnicodeStringToFilenameBuffer(a2, &LdrpDefaultExtension.Length);
      goto LABEL_23;
    }
    if ( *j == 46 )
      break;
    if ( *j == 92 || *j == 47 )
      goto LABEL_30;
  }
  v15 = *((_QWORD *)a2 + 1);
  for ( k = (_WORD *)(*a2 + v15 - 2); (unsigned __int64)k >= v15 && *k == 46; --k )
    *a2 -= 2;
  k[1] = 0;
LABEL_23:
  if ( appended < 0 )
    goto LABEL_34;
  return (unsigned int)appended;
}

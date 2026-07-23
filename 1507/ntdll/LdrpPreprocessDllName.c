/*
 * XREFs of LdrpPreprocessDllName @ 0x180020EEC
 * Callers:
 *     LdrpFindLoadedDll @ 0x18001870C (LdrpFindLoadedDll.c)
 *     LdrpLoadDll @ 0x1800207D8 (LdrpLoadDll.c)
 *     LdrpLoadForwardedDll @ 0x18007A1FC (LdrpLoadForwardedDll.c)
 * Callees:
 *     LdrpApplyFileNameRedirection @ 0x18002108C (LdrpApplyFileNameRedirection.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180021564 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180026DE4 (RtlDetermineDosPathNameType_Ustr.c)
 *     LdrpGetFullPath @ 0x18003FC30 (LdrpGetFullPath.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpPreprocessDllName(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3, _BYTE *a4)
{
  bool v5; // zf
  int appended; // ebx
  char v9; // r14
  unsigned __int64 v10; // rdx
  _WORD *i; // rcx
  unsigned __int64 v12; // rdx
  _WORD *v13; // rcx
  _WORD *v14; // rax
  const char *v16; // rax
  __int64 v17; // [rsp+30h] [rbp-28h]
  char v18; // [rsp+78h] [rbp+20h] BYREF

  v5 = (*a4 & 8) == 0;
  v18 = 0;
  appended = 0;
  v9 = 0;
  if ( v5 )
  {
    appended = LdrpApplyFileNameRedirection(a3, a1, a3, a2, &v18);
    if ( appended < 0 )
    {
LABEL_30:
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LODWORD(v17) = appended;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          2644,
          (unsigned int)"LdrpPreprocessDllName",
          0,
          (__int64)"LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
          a1,
          v17);
      }
      if ( (LdrpDebugFlags & 0x10) != 0 )
        __debugbreak();
      return (unsigned int)appended;
    }
    v9 = v18;
  }
  if ( *a2 )
  {
    if ( (LdrpDebugFlags & 5) != 0 )
    {
      v16 = "SxS";
      if ( !v9 )
        v16 = "API set";
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        2595,
        (unsigned int)"LdrpPreprocessDllName",
        2,
        (__int64)"DLL %wZ was redirected to %wZ by %s\n",
        a1,
        a2,
        v16);
    }
    *(_DWORD *)a4 |= 0x200u;
    if ( v9 )
      *(_DWORD *)a4 |= 4u;
    goto LABEL_12;
  }
  v10 = *((_QWORD *)a1 + 1);
  for ( i = (_WORD *)(*a1 + v10 - 2); ; --i )
  {
    if ( (unsigned __int64)i < v10 )
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
  appended = LdrpGetFullPath(a1, a2);
  if ( appended < 0 )
    goto LABEL_30;
  *(_DWORD *)a4 |= 0x600u;
LABEL_12:
  if ( appended < 0 )
    goto LABEL_30;
  v12 = *((_QWORD *)a2 + 1);
  v13 = (_WORD *)(v12 + *a2 - 2LL);
  v14 = v13;
  if ( (unsigned __int64)v13 < v12 )
  {
LABEL_18:
    appended = LdrpAppendUnicodeStringToFilenameBuffer(a2, &LdrpDefaultExtension);
  }
  else
  {
    while ( *v14 != 46 )
    {
      if ( *v14 != 92 && *v14 != 47 && (unsigned __int64)--v14 >= v12 )
        continue;
      goto LABEL_18;
    }
    while ( (unsigned __int64)v13 >= v12 && *v13 == 46 )
    {
      *a2 -= 2;
      --v13;
    }
    v13[1] = 0;
  }
  if ( appended < 0 )
    goto LABEL_30;
  return (unsigned int)appended;
}

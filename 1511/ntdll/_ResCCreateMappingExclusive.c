/*
 * XREFs of _ResCCreateMappingExclusive @ 0x1800F8BE4
 * Callers:
 *     ResCSegmentCreateMapping @ 0x1800F8090 (ResCSegmentCreateMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     _CreateSecureFileMapping @ 0x1800F8AF0 (_CreateSecureFileMapping.c)
 *     _ResCloseHandle @ 0x1800F914C (_ResCloseHandle.c)
 *     _ResCreateFile @ 0x1800F91EC (_ResCreateFile.c)
 *     _ResGetFileSizeEx @ 0x1800FA194 (_ResGetFileSizeEx.c)
 *     _ResMapViewOfFile @ 0x1800FA208 (_ResMapViewOfFile.c)
 *     _ResReadFile @ 0x1800FA374 (_ResReadFile.c)
 *     _ResUnmapViewOfFile @ 0x1800FA430 (_ResUnmapViewOfFile.c)
 *     ResCSegmentCreateAndPopulate @ 0x1800FB6F0 (ResCSegmentCreateAndPopulate.c)
 */

__int64 __fastcall ResCCreateMappingExclusive(
        const WCHAR *a1,
        const WCHAR *a2,
        int a3,
        char a4,
        ULONG_PTR a5,
        __int64 *a6,
        _QWORD *a7)
{
  void *v8; // rsi
  unsigned int v9; // r12d
  int v10; // ebx
  unsigned int v11; // r13d
  __int64 *v12; // r15
  __int64 File; // rax
  char *v14; // rdi
  __int64 v15; // r8
  ULONG v16; // r14d
  const WCHAR *v17; // r13
  __int64 v18; // rax
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rbx
  void *v22; // rax
  __int64 SecureFileMapping; // rax
  int v24; // r8d
  int v25; // r9d
  __int64 result; // rax

  a5 = 0LL;
  v8 = 0LL;
  v9 = 1;
  v10 = a4 & 1;
  v11 = v10 != 0 ? 0xFFFFFFFE : 0;
  if ( (a4 & 4) != 0 && !a7 )
    goto LABEL_10;
  v12 = a6;
  if ( a6 )
    *a6 = 0LL;
  if ( (a4 & 1) != 0 )
    v9 = 3;
  if ( a2 )
    v9 |= 8u;
  if ( !a1 )
  {
LABEL_10:
    RtlSetLastWin32Error(87);
    return 0LL;
  }
  File = ResCreateFile(a1);
  v14 = (char *)File;
  if ( File == -1 || !(unsigned int)ResGetFileSizeEx(File, &a5) )
    goto LABEL_43;
  if ( HIDWORD(a5) )
  {
    RtlSetLastWin32Error(536937984);
    goto LABEL_43;
  }
  v16 = a5;
  if ( (a4 & 2) == 0 )
  {
    SecureFileMapping = CreateSecureFileMapping(v14, v10 != 0 ? 4 : 2, v15, 0, a2);
    v21 = SecureFileMapping;
    if ( SecureFileMapping )
    {
      if ( SecureFileMapping == -1
        || ResCSegmentCreateAndPopulate
        && (v8 = (void *)ResMapViewOfFile(SecureFileMapping, v11 + 4, v24, v25, 0LL)) == 0LL )
      {
LABEL_41:
        if ( (unsigned __int64)(v21 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          ResCloseHandle(v21);
        goto LABEL_43;
      }
      v17 = a2;
      goto LABEL_30;
    }
LABEL_43:
    if ( (unsigned __int64)(v14 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      ResCloseHandle(v14);
    return 0LL;
  }
  v17 = a2;
  if ( (_DWORD)a5 )
    LODWORD(v8) = a5;
  v18 = CreateSecureFileMapping((HANDLE)0xFFFFFFFFFFFFFFFFLL, 4LL, v15, (int)v8, a2);
  v21 = v18;
  if ( !v18 )
    goto LABEL_43;
  if ( v18 == -1 )
    goto LABEL_41;
  v22 = (void *)ResMapViewOfFile(v18, 2, v19, v20, (unsigned int)v8);
  v8 = v22;
  if ( !v22 )
    goto LABEL_41;
  if ( !(unsigned int)ResReadFile(v14, v22, v16) || a3 != v16 )
    goto LABEL_39;
  if ( !ResCSegmentCreateAndPopulate )
  {
    ResUnmapViewOfFile(v8);
    v8 = 0LL;
  }
LABEL_30:
  if ( v12 && v17 )
  {
    *v12 = v21;
  }
  else
  {
    ResCloseHandle(v21);
    v21 = 0LL;
  }
  if ( a7 )
    *a7 = v14;
  else
    ResCloseHandle(v14);
  v14 = 0LL;
  if ( !ResCSegmentCreateAndPopulate )
    return -1LL;
  result = ResCSegmentCreateAndPopulate(v8, v16, v9);
  if ( !result )
  {
LABEL_39:
    if ( v8 )
      ResUnmapViewOfFile(v8);
    goto LABEL_41;
  }
  return result;
}

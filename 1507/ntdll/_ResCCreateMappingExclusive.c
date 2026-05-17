/*
 * XREFs of _ResCCreateMappingExclusive @ 0x1800F92CC
 * Callers:
 *     ResCSegmentCreateMapping @ 0x1800F8574 (ResCSegmentCreateMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     _CreateSecureFileMapping @ 0x1800F91D8 (_CreateSecureFileMapping.c)
 *     _ResCloseHandle @ 0x1800F9834 (_ResCloseHandle.c)
 *     _ResCreateFile @ 0x1800F98D4 (_ResCreateFile.c)
 *     _ResGetFileSizeEx @ 0x1800FA87C (_ResGetFileSizeEx.c)
 *     _ResMapViewOfFile @ 0x1800FA8F0 (_ResMapViewOfFile.c)
 *     _ResReadFile @ 0x1800FAA5C (_ResReadFile.c)
 *     _ResUnmapViewOfFile @ 0x1800FAB18 (_ResUnmapViewOfFile.c)
 *     ResCSegmentCreateAndPopulate @ 0x1800FC3C0 (ResCSegmentCreateAndPopulate.c)
 */

__int64 __fastcall ResCCreateMappingExclusive(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        char a4,
        __int64 a5,
        __int64 *a6,
        _QWORD *a7)
{
  __int64 v8; // rsi
  unsigned int v9; // r12d
  int v10; // ebx
  __int64 v11; // r8
  unsigned int v12; // r13d
  __int64 *v13; // r15
  __int64 File; // rax
  char *v15; // rdi
  __int64 v16; // r8
  unsigned int v17; // r14d
  const WCHAR *v18; // r13
  __int64 v19; // rax
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rbx
  __int64 SecureFileMapping; // rax
  int v24; // r8d
  int v25; // r9d
  __int64 result; // rax

  a5 = 0LL;
  v8 = 0LL;
  v9 = 1;
  v10 = a4 & 1;
  v11 = 3LL;
  v12 = v10 != 0 ? 0xFFFFFFFE : 0;
  if ( (a4 & 4) != 0 )
  {
    if ( !a7 )
    {
LABEL_11:
      RtlSetLastWin32Error(0x57u);
      return 0LL;
    }
    v11 = 0LL;
  }
  v13 = a6;
  if ( a6 )
    *a6 = 0LL;
  if ( (a4 & 1) != 0 )
    v9 = 3;
  if ( a2 )
    v9 |= 8u;
  if ( !a1 )
    goto LABEL_11;
  File = ResCreateFile(a1, v10 != 0 ? -1073741824 : 0x80000000, v11);
  v15 = (char *)File;
  if ( File == -1 || !(unsigned int)ResGetFileSizeEx(File, &a5) )
    goto LABEL_44;
  if ( HIDWORD(a5) )
  {
    RtlSetLastWin32Error(0x20010600u);
    goto LABEL_44;
  }
  v17 = a5;
  if ( (a4 & 2) == 0 )
  {
    SecureFileMapping = CreateSecureFileMapping((int)v15, v10 != 0 ? 4 : 2, v16, 0, a2);
    v22 = SecureFileMapping;
    if ( SecureFileMapping )
    {
      if ( SecureFileMapping == -1
        || ResCSegmentCreateAndPopulate && (v8 = ResMapViewOfFile(SecureFileMapping, v12 + 4, v24, v25, 0LL)) == 0 )
      {
LABEL_42:
        if ( (unsigned __int64)(v22 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          ResCloseHandle(v22);
        goto LABEL_44;
      }
      v18 = a2;
      goto LABEL_31;
    }
LABEL_44:
    if ( (unsigned __int64)(v15 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      ResCloseHandle(v15);
    return 0LL;
  }
  v18 = a2;
  if ( (_DWORD)a5 )
    LODWORD(v8) = a5;
  v19 = CreateSecureFileMapping(-1, 4, v16, v8, a2);
  v22 = v19;
  if ( !v19 )
    goto LABEL_44;
  if ( v19 == -1 )
    goto LABEL_42;
  v8 = ResMapViewOfFile(v19, 2, v20, v21, (unsigned int)v8);
  if ( !v8 )
    goto LABEL_42;
  if ( !(unsigned int)ResReadFile(v15) || a3 != v17 )
    goto LABEL_40;
  if ( !ResCSegmentCreateAndPopulate )
  {
    ResUnmapViewOfFile(v8);
    v8 = 0LL;
  }
LABEL_31:
  if ( v13 && v18 )
  {
    *v13 = v22;
  }
  else
  {
    ResCloseHandle(v22);
    v22 = 0LL;
  }
  if ( a7 )
    *a7 = v15;
  else
    ResCloseHandle(v15);
  v15 = 0LL;
  if ( !ResCSegmentCreateAndPopulate )
    return -1LL;
  result = ResCSegmentCreateAndPopulate(v8, v17, v9);
  if ( !result )
  {
LABEL_40:
    if ( v8 )
      ResUnmapViewOfFile(v8);
    goto LABEL_42;
  }
  return result;
}

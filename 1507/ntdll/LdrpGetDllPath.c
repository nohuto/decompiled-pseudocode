/*
 * XREFs of LdrpGetDllPath @ 0x180036A08
 * Callers:
 *     LdrGetDllPath @ 0x1800369E0 (LdrGetDllPath.c)
 *     LdrpComputeLazyDllPath @ 0x180042FC0 (LdrpComputeLazyDllPath.c)
 * Callees:
 *     LdrpLogDllStateEx2 @ 0x180036BEC (LdrpLogDllStateEx2.c)
 *     RtlpGetCachedPath @ 0x180036C64 (RtlpGetCachedPath.c)
 *     RtlDetermineDosPathNameType_U @ 0x180057B40 (RtlDetermineDosPathNameType_U.c)
 */

__int64 __fastcall LdrpGetDllPath(
        PCWSTR DosFileName,
        int a2,
        _QWORD *a3,
        _QWORD *a4,
        _DWORD *a5,
        _OWORD *a6,
        _QWORD *a7)
{
  bool v8; // bp
  unsigned int v9; // edi
  char v13; // r12
  PCWSTR v14; // rax
  RTL_PATH_TYPE v15; // eax
  __int64 CachedPath; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax

  v8 = (a2 & 0x2000) != 0;
  v9 = a2 & 0xFFFFDFFF;
  if ( (a2 & 8) != 0 )
  {
    if ( v9 != 8 )
      return 3221225485LL;
    v9 = 0;
    v13 = 1;
  }
  else
  {
    v13 = 0;
    if ( v9 )
      goto LABEL_11;
  }
  if ( LdrpDefaultDllDirectories )
  {
    if ( (a2 & 0x2000) != 0 || (LdrpDefaultDllDirectories & 0x2000) != 0 )
      v8 = 1;
    v9 = LdrpDefaultDllDirectories & 0xFFFFDFFF;
  }
LABEL_11:
  v14 = 0LL;
  if ( (v9 & 0x100) != 0 || v13 )
  {
    if ( v9 )
    {
      v15 = RtlDetermineDosPathNameType_U(DosFileName);
      if ( (unsigned int)(v15 - 1) > 1
        && (v15 != RtlPathTypeLocalDevice
         || DosFileName[2] != 63
         || RtlDetermineDosPathNameType_U(DosFileName + 4) != RtlPathTypeDriveAbsolute) )
      {
        return 3221225485LL;
      }
    }
    v14 = DosFileName;
  }
  if ( v9 )
  {
    if ( (v9 & 0x1000) != 0 )
    {
      if ( LdrpAppPackagesPath.Buffer )
        v9 |= 0xA00u;
      else
        v9 |= 0xE00u;
    }
    if ( v13 )
      v9 |= 0x100u;
    CachedPath = RtlpGetCachedPath(&RtlpDllSearchPathWithOptions, RtlpComputeDllPathWithOptions, v9, v14);
    v17 = CachedPath;
    if ( !CachedPath )
      goto LABEL_30;
    *a7 = *(_QWORD *)(CachedPath + 88);
  }
  else
  {
    v18 = RtlpGetCachedPath(&RtlpDllSearchPath, RtlpComputeDllPath, v14, 0LL);
    *a7 = 0LL;
    v17 = v18;
  }
  if ( !v17 )
  {
LABEL_30:
    *a3 = 0LL;
    if ( a4 )
      *a4 = 0LL;
    *a7 = 0LL;
    return 3221225495LL;
  }
  if ( a6 )
  {
    *a6 = *(_OWORD *)v17;
    a6[1] = *(_OWORD *)(v17 + 16);
    a6[2] = *(_OWORD *)(v17 + 32);
    a6[3] = *(_OWORD *)(v17 + 48);
    a6[4] = *(_OWORD *)(v17 + 64);
  }
  *a3 = v17 + 112;
  if ( a4 )
  {
    if ( v8 )
      v19 = *(_QWORD *)(v17 + 104);
    else
      v19 = 0LL;
    *a4 = v19;
  }
  if ( a5 )
    *a5 = *(_DWORD *)(v17 + 96);
  LdrpLogDllStateEx2(a5, DosFileName, *a3, 5313LL);
  return 0LL;
}

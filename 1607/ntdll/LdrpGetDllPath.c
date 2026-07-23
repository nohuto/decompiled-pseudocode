/*
 * XREFs of LdrpGetDllPath @ 0x18000C7F8
 * Callers:
 *     LdrGetDllPath @ 0x18000C7D0 (LdrGetDllPath.c)
 *     LdrpComputeLazyDllPath @ 0x18000D36C (LdrpComputeLazyDllPath.c)
 * Callees:
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x180009280 (LdrpLogRelativePathWithAlteredSearchError.c)
 *     RtlDetermineDosPathNameType_U @ 0x1800095D0 (RtlDetermineDosPathNameType_U.c)
 *     LdrpLogDllStateEx2 @ 0x18000CA68 (LdrpLogDllStateEx2.c)
 *     RtlpGetCachedPath @ 0x18000CAE0 (RtlpGetCachedPath.c)
 */

__int64 __fastcall LdrpGetDllPath(__int64 a1, int a2, _QWORD *a3, _QWORD *a4, _DWORD *a5, _OWORD *a6, _QWORD *a7)
{
  bool v7; // bp
  char v8; // si
  unsigned int v9; // ebx
  char v11; // di
  __int64 v12; // r13
  __int64 CachedPath; // rax
  __int64 v14; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  RTL_PATH_TYPE v18; // eax

  v7 = (a2 & 0x2000) != 0;
  v8 = 0;
  v9 = a2 & 0xFFFFDFFF;
  if ( (a2 & 8) != 0 )
  {
    if ( v9 != 8 )
      return 3221225485LL;
    v9 = 0;
    v11 = 1;
  }
  else
  {
    v11 = 0;
    if ( v9 )
      goto LABEL_4;
  }
  if ( LdrpDefaultDllDirectories )
  {
    if ( (a2 & 0x2000) != 0 || (LdrpDefaultDllDirectories & 0x2000) != 0 )
      v7 = 1;
    v9 = LdrpDefaultDllDirectories & 0xFFFFDFFF;
  }
LABEL_4:
  v12 = 0LL;
  if ( (v9 & 0x100) != 0 || v11 )
  {
    v18 = RtlDetermineDosPathNameType_U((PCWSTR)a1);
    if ( (unsigned int)(v18 - 1) > 1
      && (v18 != RtlPathTypeLocalDevice
       || *(_WORD *)(a1 + 4) != 63
       || RtlDetermineDosPathNameType_U((PCWSTR)(a1 + 8)) != RtlPathTypeDriveAbsolute) )
    {
      v8 = 1;
    }
    v12 = a1;
    if ( v8 )
    {
      if ( v11 )
      {
        LdrpLogRelativePathWithAlteredSearchError((LPCWSTR)a1);
        if ( (LdrpPolicyBits & 0x40) != 0 )
        {
          v11 = 0;
          if ( (v9 & 0x100) != 0 )
          {
LABEL_28:
            if ( v9 )
              return 3221225485LL;
            goto LABEL_7;
          }
          v8 = 0;
        }
      }
      if ( v8 )
        goto LABEL_28;
    }
  }
  if ( !v9 )
  {
LABEL_7:
    CachedPath = RtlpGetCachedPath(&RtlpDllSearchPath, RtlpComputeDllPath, v12, 0LL);
    *a7 = 0LL;
    v14 = CachedPath;
    goto LABEL_8;
  }
  if ( (v9 & 0x1000) != 0 )
  {
    v9 |= 0xA00u;
    if ( (LdrpPolicyBits & 4) != 0 )
      v9 |= 0x400u;
  }
  if ( v11 )
    v9 |= 0x100u;
  v16 = RtlpGetCachedPath(&RtlpDllSearchPathWithOptions, RtlpComputeDllPathWithOptions, v9, v12);
  v14 = v16;
  if ( !v16 )
    goto LABEL_46;
  *a7 = *(_QWORD *)(v16 + 88);
LABEL_8:
  if ( v14 )
  {
    if ( a6 )
    {
      *a6 = *(_OWORD *)v14;
      a6[1] = *(_OWORD *)(v14 + 16);
      a6[2] = *(_OWORD *)(v14 + 32);
      a6[3] = *(_OWORD *)(v14 + 48);
      a6[4] = *(_OWORD *)(v14 + 64);
    }
    *a3 = v14 + 112;
    if ( a4 )
    {
      if ( v7 )
        v17 = *(_QWORD *)(v14 + 104);
      else
        v17 = 0LL;
      *a4 = v17;
    }
    if ( a5 )
      *a5 = *(_DWORD *)(v14 + 96);
    LdrpLogDllStateEx2(a5, a1, *a3, 5313LL);
    return 0LL;
  }
LABEL_46:
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  *a7 = 0LL;
  return 3221225495LL;
}

/*
 * XREFs of PspCaptureUserProcessParameters @ 0x140465500
 * Callers:
 *     PspCaptureProcessParameters @ 0x140465404 (PspCaptureProcessParameters.c)
 *     PsCaptureUserProcessParameters @ 0x1404C62D4 (PsCaptureUserProcessParameters.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PspValidateEnvironmentBlock @ 0x140465460 (PspValidateEnvironmentBlock.c)
 *     PspCopyUnicodeString @ 0x140465A28 (PspCopyUnicodeString.c)
 *     PspCaptureAndValidateUnicodeString @ 0x140465A94 (PspCaptureAndValidateUnicodeString.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspCaptureUserProcessParameters(_QWORD *a1, __int64 a2, char a3)
{
  _OWORD *v4; // r14
  unsigned int v5; // r12d
  char *v6; // rdi
  size_t v7; // rax
  __int64 result; // rax
  unsigned __int64 v9; // r15
  SIZE_T v10; // rdx
  int v11; // esi
  _OWORD *PoolWithQuotaTag; // rax
  _DWORD *v13; // rdi
  __int64 v14; // rcx
  int v15; // esi
  char *v16; // r14
  ULONG64 v17; // r8
  size_t v18; // r15
  void *v19[2]; // [rsp+20h] [rbp-E8h]
  size_t Size; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-D0h]
  void *Src; // [rsp+40h] [rbp-C8h]
  wchar_t *Buffer; // [rsp+48h] [rbp-C0h]
  _OWORD *v24; // [rsp+50h] [rbp-B8h]
  UNICODE_STRING v25; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v26; // [rsp+68h] [rbp-A0h]
  _BYTE v27[2]; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int16 v28; // [rsp+72h] [rbp-96h]
  _BYTE v29[2]; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int16 v30; // [rsp+82h] [rbp-86h]
  _BYTE v31[2]; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int16 v32; // [rsp+92h] [rbp-76h]
  _BYTE v33[2]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int16 v34; // [rsp+A2h] [rbp-66h]
  _BYTE v35[2]; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int16 v36; // [rsp+B2h] [rbp-56h]
  _BYTE v37[2]; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int16 v38; // [rsp+C2h] [rbp-46h]
  void *v40; // [rsp+128h] [rbp+20h] BYREF

  v4 = (_OWORD *)a2;
  if ( (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v5 = *(_DWORD *)(a2 + 8) & 0xFFFFBFFF;
  v21 = v5;
  if ( ((v5 ^ 1) & 0xFF810E11) != 0 )
    return 3221225485LL;
  if ( ((unsigned __int8)v5 & (unsigned __int8)((v5 & 0xE0) - 1) & 0x60) != 0 )
    return 3221225485LL;
  v6 = *(char **)(a2 + 128);
  Src = v6;
  Buffer = (wchar_t *)v6;
  v7 = *(_QWORD *)(a2 + 1008);
  Size = v7;
  if ( !v7 || (v7 & 1) != 0 )
    return 3221225485LL;
  if ( (unsigned __int64)&v6[v7] > MmUserProbeAddress || &v6[v7] < v6 )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( (a3 & 1) != 0 )
  {
    v25 = PsProtectedCurrentDirectory;
    *(_OWORD *)v19 = PspProtectedRuntimeData;
    if ( (a3 & 2) == 0 )
    {
      Src = PsProtectedEnvironment.Buffer;
      Buffer = PsProtectedEnvironment.Buffer;
      Size = PsProtectedEnvironment.MaximumLength;
    }
  }
  else
  {
    result = PspCaptureAndValidateUnicodeString(a2 + 56, &v25);
    if ( (int)result < 0 )
      return result;
    if ( v25.Length >= 0x208u )
      return 3221225485LL;
    v25.MaximumLength = 520;
    *(_OWORD *)v19 = v4[14];
    if ( v19[1] )
    {
      WORD1(v19[0]) = v4[14];
      if ( LOWORD(v19[0]) )
      {
        v17 = (ULONG64)v19[1] + LOWORD(v19[0]);
        if ( v17 > MmUserProbeAddress || (void *)v17 < v19[1] )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
    }
    else
    {
      if ( LOWORD(v19[0]) )
        return 3221225485LL;
      LODWORD(v19[0]) = 0;
    }
  }
  result = PspCaptureAndValidateUnicodeString(v4 + 5, v35);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v4 + 6, v31);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v4 + 7, v27);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v4 + 11, v29);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v4 + 12, v33);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v4 + 13, v37);
  if ( (int)result < 0 )
    return result;
  v9 = (WORD1(v19[0]) + v36 + v32 + v28 + v30 + v34 + (unsigned __int64)v38 + v25.MaximumLength + 1041LL) & 0xFFFFFFFFFFFFFFFEuLL;
  v26 = v9;
  v10 = v9 + Size;
  if ( v9 + Size < v9 )
  {
    v10 = -1LL;
    v11 = -1073741675;
  }
  else
  {
    v11 = 0;
  }
  if ( v11 < 0 )
    return 3221225485LL;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v10, 0x62507350u);
  v13 = PoolWithQuotaTag;
  v24 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225626LL;
  v14 = 8LL;
  do
  {
    *PoolWithQuotaTag = *v4;
    PoolWithQuotaTag[1] = v4[1];
    PoolWithQuotaTag[2] = v4[2];
    PoolWithQuotaTag[3] = v4[3];
    PoolWithQuotaTag[4] = v4[4];
    PoolWithQuotaTag[5] = v4[5];
    PoolWithQuotaTag[6] = v4[6];
    PoolWithQuotaTag += 8;
    *(PoolWithQuotaTag - 1) = v4[7];
    v4 += 8;
    --v14;
  }
  while ( v14 );
  *PoolWithQuotaTag = *v4;
  v13[2] = v5;
  v13[1] = v9;
  *v13 = v9;
  v40 = v13 + 260;
  v15 = PspCopyUnicodeString(&v25, v13 + 14, &v40);
  if ( v15 < 0 )
    goto LABEL_63;
  v15 = PspCopyUnicodeString(v35, v13 + 20, &v40);
  if ( v15 < 0 )
    goto LABEL_63;
  v15 = PspCopyUnicodeString(v31, v13 + 24, &v40);
  if ( v15 < 0 )
    goto LABEL_63;
  v15 = PspCopyUnicodeString(v27, v13 + 28, &v40);
  if ( v15 < 0 )
    goto LABEL_63;
  v15 = PspCopyUnicodeString(v29, v13 + 44, &v40);
  if ( v15 < 0 )
    goto LABEL_63;
  v15 = PspCopyUnicodeString(v33, v13 + 48, &v40);
  if ( v15 < 0 )
    goto LABEL_63;
  v15 = PspCopyUnicodeString(v37, v13 + 52, &v40);
  if ( v15 < 0 )
    goto LABEL_63;
  *((_OWORD *)v13 + 14) = *(_OWORD *)v19;
  v16 = (char *)v40;
  if ( v19[1] )
  {
    *((_QWORD *)v13 + 29) = v40;
    memmove(v16, v19[1], LOWORD(v19[0]));
    if ( v16 )
    {
      v16 += LOWORD(v19[0]);
      v40 = v16;
    }
    v18 = (char *)v13 - v16 + v9;
    if ( v18 )
    {
      memset(v16, 0, v18);
      if ( v16 )
      {
        v16 += v18;
        v40 = v16;
      }
    }
  }
  memmove(v16, Src, Size);
  if ( (a3 & 3) == 1 || (v15 = PspValidateEnvironmentBlock((__int16 *)v16, (__int64 *)&Size), v15 >= 0) )
  {
    if ( (a3 & 1) != 0 )
    {
      *((_QWORD *)v13 + 2) = 0LL;
      *((_QWORD *)v13 + 4) = 0LL;
      *((_QWORD *)v13 + 5) = 0LL;
      *((_QWORD *)v13 + 6) = 0LL;
    }
    *((_QWORD *)v13 + 16) = v16;
    *((_QWORD *)v13 + 126) = Size;
    *((_QWORD *)v13 + 127) = 0LL;
    *a1 = v13;
    return 0LL;
  }
  else
  {
LABEL_63:
    ExFreePoolWithTag(v13, 0);
    return (unsigned int)v15;
  }
}

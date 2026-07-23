/*
 * XREFs of PspCaptureUserProcessParameters @ 0x14049B8E4
 * Callers:
 *     PsCaptureUserProcessParameters @ 0x14049B884 (PsCaptureUserProcessParameters.c)
 *     PspCaptureProcessParameters @ 0x14049B890 (PspCaptureProcessParameters.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PspCopyUnicodeString @ 0x14049BE10 (PspCopyUnicodeString.c)
 *     PspCaptureAndValidateUnicodeString @ 0x14049BE7C (PspCaptureAndValidateUnicodeString.c)
 *     PspValidateEnvironmentBlock @ 0x14049BEF0 (PspValidateEnvironmentBlock.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspCaptureUserProcessParameters(_QWORD *a1, __int64 a2, char a3)
{
  _OWORD *v4; // r14
  unsigned int v5; // r13d
  wchar_t *v6; // rdi
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
  unsigned __int64 v17; // r8
  size_t v18; // r15
  void *v19[2]; // [rsp+20h] [rbp-E8h]
  wchar_t *Src; // [rsp+38h] [rbp-D0h]
  size_t Size; // [rsp+40h] [rbp-C8h] BYREF
  wchar_t *Buffer; // [rsp+48h] [rbp-C0h]
  _OWORD *v23; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v24; // [rsp+58h] [rbp-B0h]
  UNICODE_STRING v25; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v26[2]; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int16 v27; // [rsp+72h] [rbp-96h]
  _BYTE v28[2]; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int16 v29; // [rsp+82h] [rbp-86h]
  _BYTE v30[2]; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int16 v31; // [rsp+92h] [rbp-76h]
  _BYTE v32[2]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int16 v33; // [rsp+A2h] [rbp-66h]
  _BYTE v34[2]; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int16 v35; // [rsp+B2h] [rbp-56h]
  _BYTE v36[2]; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int16 v37; // [rsp+C2h] [rbp-46h]
  void *v39; // [rsp+128h] [rbp+20h] BYREF

  v4 = (_OWORD *)a2;
  if ( (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v5 = *(_DWORD *)(a2 + 8) & 0xFFFFBFFF;
  if ( ((v5 ^ 1) & 0xFF810E11) != 0 )
    return 3221225485LL;
  if ( (*(_BYTE *)(a2 + 8) & (unsigned __int8)((*(_BYTE *)(a2 + 8) & 0xE0) - 1) & 0x60) != 0 )
    return 3221225485LL;
  v6 = *(wchar_t **)(a2 + 128);
  Src = v6;
  Buffer = v6;
  v7 = *(_QWORD *)(a2 + 1008);
  Size = v7;
  if ( !v7 || (v7 & 1) != 0 )
    return 3221225485LL;
  if ( (unsigned __int64)v6 + v7 > 0x7FFFFFFF0000LL || (wchar_t *)((char *)v6 + v7) < v6 )
    MEMORY[0x7FFFFFFF0000] = 0;
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
        v17 = (unsigned __int64)v19[1] + LOWORD(v19[0]);
        if ( v17 > 0x7FFFFFFF0000LL || (void *)v17 < v19[1] )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      if ( LOWORD(v19[0]) )
        return 3221225485LL;
      LODWORD(v19[0]) = 0;
    }
  }
  result = PspCaptureAndValidateUnicodeString(v4 + 5, v26);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v4 + 6, v28);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v4 + 7, v30);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v4 + 11, v32);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v4 + 12, v34);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v4 + 13, v36);
  if ( (int)result < 0 )
    return result;
  v9 = (WORD1(v19[0]) + v27 + v29 + v31 + v33 + v35 + (unsigned __int64)v37 + v25.MaximumLength + 1041LL) & 0xFFFFFFFFFFFFFFFEuLL;
  v24 = v9;
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
  v23 = PoolWithQuotaTag;
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
  v39 = v13 + 260;
  v15 = PspCopyUnicodeString(&v25, v13 + 14, &v39);
  if ( v15 < 0 )
    goto LABEL_63;
  v15 = PspCopyUnicodeString(v26, v13 + 20, &v39);
  if ( v15 < 0 )
    goto LABEL_63;
  v15 = PspCopyUnicodeString(v28, v13 + 24, &v39);
  if ( v15 < 0 )
    goto LABEL_63;
  v15 = PspCopyUnicodeString(v30, v13 + 28, &v39);
  if ( v15 < 0 )
    goto LABEL_63;
  v15 = PspCopyUnicodeString(v32, v13 + 44, &v39);
  if ( v15 < 0 )
    goto LABEL_63;
  v15 = PspCopyUnicodeString(v34, v13 + 48, &v39);
  if ( v15 < 0 )
    goto LABEL_63;
  v15 = PspCopyUnicodeString(v36, v13 + 52, &v39);
  if ( v15 < 0 )
    goto LABEL_63;
  *((_OWORD *)v13 + 14) = *(_OWORD *)v19;
  v16 = (char *)v39;
  if ( v19[1] )
  {
    *((_QWORD *)v13 + 29) = v39;
    memmove(v16, v19[1], LOWORD(v19[0]));
    if ( v16 )
    {
      v16 += LOWORD(v19[0]);
      v39 = v16;
    }
    v18 = (char *)v13 - v16 + v9;
    if ( v18 )
    {
      memset(v16, 0, v18);
      if ( v16 )
      {
        v16 += v18;
        v39 = v16;
      }
    }
  }
  memmove(v16, Src, Size);
  if ( (a3 & 3) == 1 || (v15 = PspValidateEnvironmentBlock(v16, &Size), v15 >= 0) )
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

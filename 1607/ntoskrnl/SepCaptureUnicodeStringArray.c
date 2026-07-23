/*
 * XREFs of SepCaptureUnicodeStringArray @ 0x140410BD0
 * Callers:
 *     NtSetCachedSigningLevel2 @ 0x1403E21EC (NtSetCachedSigningLevel2.c)
 *     NtQuerySecurityAttributesToken @ 0x14040E2E0 (NtQuerySecurityAttributesToken.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x14047B324 (SepCaptureTokenSecurityAttributesInformation.c)
 *     NtQuerySecurityPolicy @ 0x14068C778 (NtQuerySecurityPolicy.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeCaptureUnicodeStringStructures @ 0x140410DD0 (SeCaptureUnicodeStringStructures.c)
 *     SeReleaseUnicodeStringStructures @ 0x140690C48 (SeReleaseUnicodeStringStructures.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepCaptureUnicodeStringArray(__int64 a1, unsigned int a2, unsigned __int8 a3, _QWORD *a4)
{
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 result; // rax
  __int64 v8; // rsi
  SIZE_T v9; // rdx
  unsigned int v10; // ecx
  unsigned __int16 *v11; // r15
  unsigned int v12; // r8d
  _QWORD *PoolWithTag; // rax
  _QWORD *v14; // r14
  char *v15; // rsi
  unsigned __int16 v16; // ax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  void *Src; // [rsp+28h] [rbp-50h] BYREF
  char *v20; // [rsp+30h] [rbp-48h]
  PVOID P; // [rsp+38h] [rbp-40h]

  v5 = a2;
  v6 = 0;
  Src = 0LL;
  *a4 = 0LL;
  if ( !a1 )
  {
    if ( !a2 )
      return 0LL;
    return 3221225485LL;
  }
  if ( !a2 )
    return 3221225485LL;
  if ( a3 )
  {
    result = SeCaptureUnicodeStringStructures(a1, a2, a3, &Src);
    if ( (int)result < 0 )
      return result;
    v8 = 16 * v5;
    if ( (unsigned __int64)(16 * v5) > 0xFFFFFFFF
      || (((unsigned int)v8 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) < (unsigned int)v8 )
    {
LABEL_30:
      SeReleaseUnicodeStringStructures(Src, a3);
      return 3221225621LL;
    }
    v9 = ((_DWORD)v8 + 1) & 0xFFFFFFFE;
    v10 = 0;
    v11 = (unsigned __int16 *)Src;
    while ( v10 < (unsigned int)v5 )
    {
      v12 = v9 + *((unsigned __int16 *)Src + 8 * v10);
      if ( v12 < (unsigned int)v9 )
        goto LABEL_30;
      v9 = v12;
      ++v10;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x74416553u);
    v14 = PoolWithTag;
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      SeReleaseUnicodeStringStructures(v11, a3);
      return 3221225626LL;
    }
    memmove(PoolWithTag, v11, 16 * v5);
    v15 = (char *)(((unsigned __int64)&v14[(unsigned __int64)v8 / 8] + 1) & 0xFFFFFFFFFFFFFFFEuLL);
    v20 = v15;
    while ( v6 < (unsigned int)v5 )
    {
      v16 = v11[8 * v6];
      if ( v16 )
      {
        v17 = *(_QWORD *)&v11[8 * v6 + 4];
        if ( (v17 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v18 = v17 + v16;
        if ( v18 > 0x7FFFFFFF0000LL || v18 < v17 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      memmove(v15, *(const void **)&v11[8 * v6 + 4], v11[8 * v6]);
      v14[2 * v6 + 1] = v15;
      WORD1(v14[2 * v6]) = v14[2 * v6];
      v15 += v11[8 * v6];
      v20 = v15;
      ++v6;
    }
    if ( a3 == 1 && v11 )
      ExFreePoolWithTag(v11, 0);
    *a4 = v14;
  }
  else
  {
    *a4 = a1;
  }
  return 0LL;
}

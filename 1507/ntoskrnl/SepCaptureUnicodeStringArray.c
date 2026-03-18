/*
 * XREFs of SepCaptureUnicodeStringArray @ 0x140485B70
 * Callers:
 *     NtQuerySecurityAttributesToken @ 0x140482AD0 (NtQuerySecurityAttributesToken.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140547CC4 (SepCaptureTokenSecurityAttributesInformation.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SeCaptureUnicodeStringStructures @ 0x140485DA0 (SeCaptureUnicodeStringStructures.c)
 *     SeReleaseUnicodeStringStructures @ 0x1406D3FDC (SeReleaseUnicodeStringStructures.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepCaptureUnicodeStringArray(__int64 a1, unsigned int a2, unsigned __int8 a3, _QWORD *a4)
{
  __int64 v5; // rsi
  unsigned int v6; // ebx
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // rdi
  unsigned int v10; // ecx
  unsigned __int16 *v11; // r15
  unsigned __int16 *v12; // rdx
  _QWORD *PoolWithTag; // rax
  __int64 v14; // r8
  _QWORD *v15; // r13
  char *v16; // r14
  unsigned __int16 v17; // ax
  ULONG64 v18; // rcx
  ULONG64 v19; // rdx
  void *Src; // [rsp+28h] [rbp-50h] BYREF
  char *v21; // [rsp+30h] [rbp-48h]
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
  if ( !a3 )
  {
    *a4 = a1;
    return 0LL;
  }
  result = SeCaptureUnicodeStringStructures(a1, a2, a3, &Src);
  if ( (int)result < 0 )
    return result;
  v9 = 16 * v5;
  if ( (unsigned __int64)(16 * v5) > 0xFFFFFFFF || (((unsigned int)v9 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) < (unsigned int)v9 )
  {
LABEL_10:
    SeReleaseUnicodeStringStructures(Src, a3, v8);
    return 3221225621LL;
  }
  v10 = (v9 + 1) & 0xFFFFFFFE;
  v8 = 0LL;
  v11 = (unsigned __int16 *)Src;
  if ( (_DWORD)v5 )
  {
    v12 = (unsigned __int16 *)Src;
    while ( v10 + *v12 >= v10 )
    {
      v10 += *v12;
      v8 = (unsigned int)(v8 + 1);
      v12 += 8;
      if ( (unsigned int)v8 >= (unsigned int)v5 )
        goto LABEL_18;
    }
    goto LABEL_10;
  }
LABEL_18:
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x74416553u);
  v15 = PoolWithTag;
  P = PoolWithTag;
  if ( !PoolWithTag )
  {
    SeReleaseUnicodeStringStructures(v11, a3, v14);
    return 3221225626LL;
  }
  memmove(PoolWithTag, v11, 16 * v5);
  v16 = (char *)(((unsigned __int64)&v15[(unsigned __int64)v9 / 8] + 1) & 0xFFFFFFFFFFFFFFFEuLL);
  v21 = v16;
  while ( v6 < (unsigned int)v5 )
  {
    v17 = v11[8 * v6];
    if ( v17 )
    {
      v18 = *(_QWORD *)&v11[8 * v6 + 4];
      if ( (v18 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = v18 + v17;
      if ( v19 > MmUserProbeAddress || v19 < v18 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v16, *(const void **)&v11[8 * v6 + 4], v11[8 * v6]);
    v15[2 * v6 + 1] = v16;
    WORD1(v15[2 * v6]) = v15[2 * v6];
    v16 += v11[8 * v6];
    v21 = v16;
    ++v6;
  }
  if ( a3 == 1 && v11 )
    ExFreePoolWithTag(v11, 0);
  *a4 = v15;
  return 0LL;
}

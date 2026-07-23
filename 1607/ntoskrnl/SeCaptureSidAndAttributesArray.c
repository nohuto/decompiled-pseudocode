/*
 * XREFs of SeCaptureSidAndAttributesArray @ 0x140477B10
 * Callers:
 *     NtAdjustGroupsToken @ 0x140476094 (NtAdjustGroupsToken.c)
 *     NtCreateTokenEx @ 0x140476AAC (NtCreateTokenEx.c)
 *     SepSetTokenCapabilities @ 0x14047791C (SepSetTokenCapabilities.c)
 *     SepLengthSidAndAttributesArray @ 0x140477A64 (SepLengthSidAndAttributesArray.c)
 *     SepCreateClaimAttributes @ 0x1404784D8 (SepCreateClaimAttributes.c)
 *     NtSetInformationToken @ 0x1404786A0 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x14047AAA8 (NtCreateLowBoxToken.c)
 *     NtFilterToken @ 0x14047BC68 (NtFilterToken.c)
 *     SepDuplicateClaimAttributes @ 0x140695B64 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     RtlLengthSid @ 0x14000BE2C (RtlLengthSid.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlValidSid @ 0x140420690 (RtlValidSid.c)
 *     RtlLengthRequiredSid @ 0x1404781C0 (RtlLengthRequiredSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeCaptureSidAndAttributesArray(
        char *Src,
        unsigned int a2,
        char a3,
        void *a4,
        unsigned int a5,
        int a6,
        int a7,
        void **a8,
        unsigned int *a9)
{
  void *v9; // r15
  char v10; // r14
  char *PoolWithTag; // r9
  int v14; // r13d
  unsigned int v15; // r12d
  unsigned int v16; // ebx
  unsigned int i; // ecx
  char *v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  ULONG v23; // eax
  char *v24; // rbx
  ULONG v25; // eax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  void **v28; // r13
  char *v29; // r14
  char *v30; // r14
  unsigned int v31; // ebx
  _QWORD *v32; // r12
  unsigned __int8 *v33; // rdx
  unsigned int v34; // r15d
  char *v35; // r15
  char *v36; // r15
  unsigned int v37; // esi
  _QWORD *v38; // r12
  unsigned int v39; // r14d
  void *v40; // rbx
  int v41; // eax
  PVOID v43; // rax
  int v44; // [rsp+24h] [rbp-54h]
  unsigned int v45; // [rsp+28h] [rbp-50h]
  char *P; // [rsp+30h] [rbp-48h]
  int v49; // [rsp+B0h] [rbp+38h]

  v9 = a4;
  v10 = a3;
  PoolWithTag = 0LL;
  P = 0LL;
  v14 = 0;
  v49 = 0;
  if ( !a2 )
  {
    *a8 = 0LL;
    *a9 = 0;
    return 0LL;
  }
  if ( a2 > 0x1000 )
    return 3221225485LL;
  v15 = 16 * a2;
  v16 = (16 * a2 + 3) & 0xFFFFFFFC;
  v45 = v16;
  if ( a3 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v16, 0x61546553u);
    P = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    if ( v15 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = &Src[v15];
      if ( (unsigned __int64)v18 > 0x7FFFFFFF0000LL || v18 < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v19 = 0;
    v44 = 0;
    while ( v19 < a2 )
    {
      v20 = 2LL * v19;
      v21 = *(_QWORD *)&Src[16 * v19];
      v22 = v21 + 1;
      if ( (unsigned __int64)(v21 + 1) >= 0x7FFFFFFF0000LL )
        v22 = 0x7FFFFFFF0000LL;
      v23 = *(unsigned __int8 *)v22;
      if ( v23 > 0xF )
      {
        v14 = -1073741704;
        v49 = -1073741704;
        v16 = v45;
        break;
      }
      v24 = &PoolWithTag[8 * v20];
      *(_QWORD *)v24 = v21;
      v25 = RtlLengthRequiredSid(v23);
      *((_DWORD *)v24 + 2) = v25;
      if ( v25 )
      {
        v26 = *(_QWORD *)v24;
        if ( (*(_QWORD *)v24 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v27 = v26 + v25;
        if ( v27 > 0x7FFFFFFF0000LL || v27 < v26 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v16 = ((*((_DWORD *)v24 + 2) + 3) & 0xFFFFFFFC) + v45;
      v45 = v16;
      v19 = ++v44;
      v14 = 0;
      v49 = 0;
      PoolWithTag = P;
    }
    if ( v14 < 0 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      return (unsigned int)v14;
    }
    v10 = a3;
    v9 = a4;
  }
  else
  {
    for ( i = 0; i < a2; ++i )
      v16 += (4 * *(unsigned __int8 *)(*(_QWORD *)&Src[16 * i] + 1LL) + 11) & 0xFFFFFFFC;
  }
  *a9 = v16;
  if ( !v9 )
  {
    v43 = ExAllocatePoolWithTag(PagedPool, v16, 0x61536553u);
    v28 = a8;
    *a8 = v43;
    if ( v43 )
      goto LABEL_33;
    if ( v10 )
      ExFreePoolWithTag(P, 0);
    return 3221225626LL;
  }
  if ( v16 > a5 )
  {
    if ( v10 )
      ExFreePoolWithTag(PoolWithTag, 0);
    return 3221225507LL;
  }
  v28 = a8;
  *a8 = v9;
LABEL_33:
  if ( v10 )
  {
    v35 = (char *)*v28;
    memmove(*v28, Src, v15);
    v36 = &v35[(v15 + 3) & 0xFFFFFFFC];
    v37 = 0;
    v38 = *v28;
    while ( 1 )
    {
      if ( v37 >= a2 || v49 )
        goto LABEL_47;
      memmove(v36, *(const void **)&P[16 * v37], *(unsigned int *)&P[16 * v37 + 8]);
      v38[2 * v37] = v36;
      v39 = *(_DWORD *)&P[16 * v37 + 8];
      v36 += (v39 + 3) & 0xFFFFFFFC;
      if ( (v38[2 * v37 + 1] & 0x1FFFFF80) != 0 )
        break;
      v40 = (void *)v38[2 * v37];
      if ( !RtlValidSid(v40) || RtlLengthSid(v40) != v39 )
      {
        v41 = -1073741704;
        goto LABEL_46;
      }
LABEL_43:
      ++v37;
    }
    v41 = -1073741811;
LABEL_46:
    v49 = v41;
    goto LABEL_43;
  }
  v29 = (char *)*v28;
  memmove(*v28, Src, v15);
  v30 = &v29[(v15 + 3) & 0xFFFFFFFC];
  v31 = 0;
  v32 = *v28;
  while ( v31 < a2 )
  {
    v33 = (unsigned __int8 *)v32[2 * v31];
    v34 = 4 * v33[1] + 8;
    memmove(v30, v33, v34);
    v32[2 * v31++] = v30;
    v30 += (v34 + 3) & 0xFFFFFFFC;
  }
LABEL_47:
  if ( a3 )
    ExFreePoolWithTag(P, 0);
  if ( !a4 && v49 < 0 )
  {
    ExFreePoolWithTag(*v28, 0);
    *v28 = 0LL;
  }
  return (unsigned int)v49;
}

/*
 * XREFs of SeCaptureSidAndAttributesArray @ 0x1404CCC50
 * Callers:
 *     NtFilterToken @ 0x14040F530 (NtFilterToken.c)
 *     NtCreateLowBoxToken @ 0x140412A24 (NtCreateLowBoxToken.c)
 *     SepSetTokenCapabilities @ 0x140436FA8 (SepSetTokenCapabilities.c)
 *     NtSetInformationToken @ 0x14046BEF8 (NtSetInformationToken.c)
 *     SepCreateClaimAttributes @ 0x14046E408 (SepCreateClaimAttributes.c)
 *     NtCreateTokenEx @ 0x14046EF1C (NtCreateTokenEx.c)
 *     SepLengthSidAndAttributesArray @ 0x1404D009C (SepLengthSidAndAttributesArray.c)
 *     NtAdjustGroupsToken @ 0x14053F940 (NtAdjustGroupsToken.c)
 *     SepDuplicateClaimAttributes @ 0x1406D8228 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     RtlLengthSid @ 0x1400CE984 (RtlLengthSid.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlValidSid @ 0x1404CA0C0 (RtlValidSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
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
  void *v9; // r13
  const void **PoolWithTag; // r15
  int v13; // r14d
  unsigned int v14; // r12d
  unsigned int v15; // ebx
  unsigned int i; // ecx
  char *v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rcx
  ULONG64 v20; // rdx
  unsigned __int8 *v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // eax
  ULONG64 v24; // r8
  void **v25; // r13
  char *v26; // r14
  char *v27; // r14
  unsigned int v28; // ebx
  _QWORD *v29; // r12
  unsigned __int8 *v30; // rdx
  unsigned int v31; // r15d
  PVOID v33; // rax
  char *v34; // r15
  char *v35; // r15
  unsigned int v36; // esi
  _QWORD *v37; // r12
  int v38; // r14d
  void *v39; // rbx
  int v40; // [rsp+24h] [rbp-54h]
  unsigned int v41; // [rsp+28h] [rbp-50h]
  const void **P; // [rsp+30h] [rbp-48h]
  char v43; // [rsp+90h] [rbp+18h]
  int v45; // [rsp+B0h] [rbp+38h]

  v43 = a3;
  v9 = a4;
  PoolWithTag = 0LL;
  P = 0LL;
  v13 = 0;
  v45 = 0;
  if ( !a2 )
  {
    *a8 = 0LL;
    *a9 = 0;
    return 0LL;
  }
  if ( a2 > 0x1000 )
    return 3221225485LL;
  v14 = 16 * a2;
  v15 = (16 * a2 + 3) & 0xFFFFFFFC;
  v41 = v15;
  if ( a3 )
  {
    PoolWithTag = (const void **)ExAllocatePoolWithTag(PagedPool, v15, 0x61546553u);
    P = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    if ( v14 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = &Src[v14];
      if ( (unsigned __int64)v17 > MmUserProbeAddress || v17 < Src )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v18 = 0;
    v40 = 0;
    while ( v18 < a2 )
    {
      v19 = 2LL * v18;
      v20 = *(_QWORD *)&Src[16 * v18];
      v21 = (unsigned __int8 *)(v20 + 1);
      if ( v20 + 1 >= MmUserProbeAddress )
        v21 = (unsigned __int8 *)MmUserProbeAddress;
      v22 = *v21;
      if ( v22 > 0xF )
      {
        v13 = -1073741704;
        v45 = -1073741704;
        v15 = v41;
        break;
      }
      PoolWithTag[v19] = (const void *)v20;
      v23 = 4 * v22 + 8;
      LODWORD(PoolWithTag[v19 + 1]) = v23;
      if ( v23 )
      {
        if ( (v20 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v24 = v20 + v23;
        if ( v24 > MmUserProbeAddress || v24 < v20 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      v15 = ((LODWORD(PoolWithTag[v19 + 1]) + 3) & 0xFFFFFFFC) + v41;
      v41 = v15;
      v18 = ++v40;
      v13 = 0;
      v45 = 0;
    }
    if ( v13 < 0 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      return (unsigned int)v13;
    }
    v9 = a4;
    a3 = v43;
  }
  else
  {
    for ( i = 0; i < a2; ++i )
      v15 += (4 * *(unsigned __int8 *)(*(_QWORD *)&Src[16 * i] + 1LL) + 11) & 0xFFFFFFFC;
  }
  *a9 = v15;
  if ( !v9 )
  {
    v33 = ExAllocatePoolWithTag(PagedPool, v15, 0x61536553u);
    v25 = a8;
    *a8 = v33;
    if ( v33 )
    {
      a3 = v43;
      goto LABEL_32;
    }
    if ( v43 )
      ExFreePoolWithTag(PoolWithTag, 0);
    return 3221225626LL;
  }
  if ( v15 <= a5 )
  {
    v25 = a8;
    *a8 = a4;
LABEL_32:
    if ( a3 )
    {
      v34 = (char *)*v25;
      memmove(*v25, Src, v14);
      v35 = &v34[(v14 + 3) & 0xFFFFFFFC];
      v36 = 0;
      v37 = *v25;
      while ( v36 < a2 && !v13 )
      {
        memmove(v35, P[2 * v36], LODWORD(P[2 * v36 + 1]));
        v37[2 * v36] = v35;
        v38 = (int)P[2 * v36 + 1];
        v35 += (v38 + 3) & 0xFFFFFFFC;
        if ( (v37[2 * v36 + 1] & 0x1FFFFF80) != 0 )
        {
          v13 = -1073741811;
          v45 = -1073741811;
        }
        else
        {
          v39 = (void *)v37[2 * v36];
          if ( RtlValidSid(v39) )
          {
            if ( RtlLengthSid(v39) == v38 )
            {
              v13 = v45;
            }
            else
            {
              v13 = -1073741704;
              v45 = -1073741704;
            }
          }
          else
          {
            v13 = -1073741704;
            v45 = -1073741704;
          }
        }
        ++v36;
      }
    }
    else
    {
      v26 = (char *)*v25;
      memmove(*v25, Src, v14);
      v27 = &v26[(v14 + 3) & 0xFFFFFFFC];
      v28 = 0;
      v29 = *v25;
      while ( v28 < a2 )
      {
        v30 = (unsigned __int8 *)v29[2 * v28];
        v31 = 4 * v30[1] + 8;
        memmove(v27, v30, v31);
        v29[2 * v28++] = v27;
        v27 += (v31 + 3) & 0xFFFFFFFC;
      }
      v13 = v45;
    }
    if ( v43 )
      ExFreePoolWithTag(P, 0);
    if ( !a4 && v13 < 0 )
    {
      ExFreePoolWithTag(*v25, 0);
      *v25 = 0LL;
    }
    return (unsigned int)v13;
  }
  if ( a3 )
    ExFreePoolWithTag(PoolWithTag, 0);
  return 3221225507LL;
}

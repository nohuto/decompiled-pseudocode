/*
 * XREFs of MiExtendSection @ 0x140504D14
 * Callers:
 *     MmExtendSection @ 0x14050494C (MmExtendSection.c)
 * Callees:
 *     MiRemoveViewsFromSectionWithPfn @ 0x14002228C (MiRemoveViewsFromSectionWithPfn.c)
 *     MiDecrementSubsectionViewCount @ 0x1400223E0 (MiDecrementSubsectionViewCount.c)
 *     MiAddViewsForSection @ 0x14002C210 (MiAddViewsForSection.c)
 *     MiIncrementSubsectionViewCount @ 0x14002CAA0 (MiIncrementSubsectionViewCount.c)
 *     MiDeleteSubsectionPages @ 0x1400617F0 (MiDeleteSubsectionPages.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     MiSetSubsectionBase @ 0x1400B29F0 (MiSetSubsectionBase.c)
 *     MiSubsectionUsingExtents @ 0x1400E5DB4 (MiSubsectionUsingExtents.c)
 *     MiAppendSubsectionChain @ 0x1400FAF08 (MiAppendSubsectionChain.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiGetSubsectionCharges @ 0x1401F4F24 (MiGetSubsectionCharges.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiInitializePrototypePtes @ 0x1404A2E54 (MiInitializePrototypePtes.c)
 *     MiAllocateFileExtents @ 0x14065A430 (MiAllocateFileExtents.c)
 *     MiDeleteFileOnlyPfns @ 0x14065ABC4 (MiDeleteFileOnlyPfns.c)
 */

__int64 __fastcall MiExtendSection(__int64 **BugCheckParameter2, _QWORD *a2, unsigned int a3, __int64 a4)
{
  __int128 v5; // xmm0
  unsigned __int64 v6; // r12
  __int128 v7; // xmm1
  __int128 *v8; // r13
  unsigned __int64 v9; // r15
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  unsigned __int64 v12; // rsi
  __int128 v13; // xmm1
  unsigned __int64 v14; // rbx
  unsigned int v15; // r14d
  __int64 **PoolWithTag; // rax
  __int64 v17; // r8
  __int64 **v18; // rsi
  __int64 v19; // r9
  unsigned int v20; // edx
  int v21; // ecx
  __int64 v22; // r14
  int v23; // eax
  __int64 v24; // rbx
  __int16 v25; // ax
  _WORD *v26; // rdx
  unsigned int v27; // r12d
  int appended; // eax
  __int64 v29; // rcx
  __int16 v30; // r8
  unsigned __int64 v31; // rdx
  PPRIVILEGE_SET v33; // rbx
  int v34; // r14d
  unsigned __int64 v35; // r12
  ULONG_PTR v36; // r14
  unsigned int v37; // eax
  unsigned __int64 v38; // rsi
  char *v39; // r13
  __int64 *v40; // rcx
  unsigned int v41; // esi
  __int64 v42; // r14
  char v43; // si
  struct _PRIVILEGE_SET *v44; // rdi
  void *Luid; // rcx
  int FileExtents; // [rsp+38h] [rbp-79h]
  unsigned int v47; // [rsp+3Ch] [rbp-75h]
  unsigned __int64 v48; // [rsp+40h] [rbp-71h]
  __int64 *v49; // [rsp+48h] [rbp-69h]
  __int64 v50; // [rsp+50h] [rbp-61h]
  __int128 v51; // [rsp+58h] [rbp-59h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+68h] [rbp-49h]
  __int128 v53; // [rsp+78h] [rbp-39h]
  __int128 v54; // [rsp+88h] [rbp-29h]
  __int128 v55; // [rsp+98h] [rbp-19h]
  __int128 v56; // [rsp+A8h] [rbp-9h]
  __int128 v57; // [rsp+B8h] [rbp+7h]
  __int64 v58; // [rsp+118h] [rbp+67h] BYREF
  _QWORD *v59; // [rsp+120h] [rbp+6Fh]
  unsigned int v60; // [rsp+128h] [rbp+77h]
  __int64 v61; // [rsp+130h] [rbp+7Fh]

  v61 = a4;
  v60 = a3;
  v59 = a2;
  v49 = *BugCheckParameter2;
  v50 = **BugCheckParameter2;
  _InterlockedCompareExchange64((volatile signed __int64 *)(v50 + 24), -1LL, -1LL);
  v5 = *(_OWORD *)BugCheckParameter2;
  v6 = 0LL;
  v7 = *((_OWORD *)BugCheckParameter2 + 1);
  v47 = 0;
  v8 = &v51;
  LODWORD(v58) = 0;
  v9 = 0LL;
  v51 = v5;
  v10 = *((_OWORD *)BugCheckParameter2 + 2);
  *(_OWORD *)Privileges = v7;
  v11 = *((_OWORD *)BugCheckParameter2 + 3);
  v12 = (8 * a4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v53 = v10;
  v54 = v11;
  v48 = v12;
  v13 = *((_OWORD *)BugCheckParameter2 + 5);
  v55 = *((_OWORD *)BugCheckParameter2 + 4);
  v56 = v13;
  v57 = *((_OWORD *)BugCheckParameter2 + 6);
  if ( a3 )
  {
    HIDWORD(v53) += a3;
    DWORD1(v54) ^= (DWORD1(v54) ^ (DWORD1(v54) - a3)) & 0x7FFFFFFF;
  }
  v14 = 0LL;
  do
  {
    if ( v12 - v6 > 0x100000 )
      v15 = 0x100000;
    else
      v15 = v12 - v6;
    PoolWithTag = (__int64 **)ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x64536D4Du);
    v18 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v41 = -1073741670;
      FileExtents = -1073741670;
      goto LABEL_61;
    }
    memset(PoolWithTag, 0, 0x70uLL);
    v19 = v61;
    v18[11] = (__int64 *)(v18 + 10);
    v18[10] = (__int64 *)(v18 + 10);
    *((_QWORD *)v8 + 2) = v18;
    *v18 = v49;
    v6 += v15;
    v20 = v15 >> 3;
    *((_DWORD *)v18 + 11) = v15 >> 3;
    if ( v6 > 8 * v19 )
    {
      v21 = (v6 >> 3) - v19;
      *((_DWORD *)v18 + 11) = v20 - v21;
      *((_DWORD *)v18 + 13) ^= (v21 ^ *((_DWORD *)v18 + 13)) & 0x7FFFFFFF;
    }
    v22 = v50;
    *((_WORD *)v18 + 16) = (_WORD)v18[4] & 0xFFC1 | (2 * ((*(_BYTE *)(v50 + 14) >> 1) & 0x1F));
    if ( v8 == &v51 )
    {
      v23 = *((_DWORD *)v8 + 11);
      v24 = *((unsigned __int16 *)v8 + 16);
      *((_WORD *)v8 + 17) &= 0xFu;
      *((_DWORD *)v8 + 10) = v23;
      v14 = *((unsigned int *)v8 + 9) | ((v24 & 0xFFFFFFFFFFFFFFC0uLL) << 26);
    }
    v14 += *((unsigned int *)v8 + 10);
    v25 = (_WORD)v18[4] & 0x3F;
    *((_DWORD *)v18 + 9) = v14;
    *((_WORD *)v18 + 16) = v25 | (WORD2(v14) << 6);
    if ( v6 < v48 )
    {
      *((_DWORD *)v18 + 10) = v20;
    }
    else
    {
      v26 = v59;
      *((_DWORD *)v18 + 10) = (*v59 >> 12) - v14;
      *((_WORD *)v18 + 17) = *((_WORD *)v18 + 17) & 0xF | (16 * *v26);
    }
    v8 = (__int128 *)v18;
    v12 = v48;
  }
  while ( v6 < v48 );
  v27 = v60;
  if ( v60 && (unsigned int)MiSubsectionUsingExtents((unsigned __int8 *)BugCheckParameter2) && BugCheckParameter2[1] )
  {
    if ( (int)MiAddViewsForSection(v40, *((unsigned int *)BugCheckParameter2 + 11), 2u) >= 0 )
    {
      FileExtents = MiAllocateFileExtents((ULONG_PTR)BugCheckParameter2, 0);
      v41 = FileExtents;
      if ( FileExtents < 0 )
      {
        MiRemoveViewsFromSectionWithPfn((__int64 *)BugCheckParameter2, *((unsigned int *)BugCheckParameter2 + 11));
LABEL_61:
        v33 = Privileges[0];
        goto LABEL_62;
      }
      v12 = v48;
    }
    v47 = v27;
  }
  appended = MiAppendSubsectionChain((__int64 *)BugCheckParameter2, (__int64)&v51, 0);
  if ( !appended )
  {
LABEL_16:
    v30 = *(_WORD *)(v22 + 12);
    v31 = (*(unsigned int *)(v22 + 8) | ((unsigned __int64)(v30 & 0x3FF) << 32)) + v61 + v27;
    *(_DWORD *)(v22 + 8) += v61 + v27;
    *(_WORD *)(v22 + 12) = v30 ^ (v30 ^ WORD2(v31)) & 0x3FF;
    if ( v47 )
      MiRemoveViewsFromSectionWithPfn((__int64 *)BugCheckParameter2, *((unsigned int *)BugCheckParameter2 + 11));
    return 0LL;
  }
  v33 = Privileges[0];
  v34 = v58;
LABEL_20:
  if ( (appended & 1) != 0 )
  {
    LODWORD(v58) = v34 | 1;
    v35 = 0LL;
    v36 = (ULONG_PTR)v33;
    while ( 1 )
    {
      v37 = v12 - v35 > 0x100000 ? 0x100000 : v12 - v35;
      v38 = v37;
      v35 += v37;
      v39 = (char *)ExAllocatePoolWithTag((POOL_TYPE)-2147483647, v37, 0x74536D4Du);
      if ( !v39 )
        break;
      MiInitializePrototypePtes(v39, v38 >> 3, (unsigned __int16 *)v36, (v49[7] & 0x40000000) == 0);
      if ( (v49[7] & 0x40000000) != 0 )
      {
        FileExtents = MiAllocateFileExtents(v36, 1);
        v41 = FileExtents;
        if ( FileExtents < 0 )
        {
          ExFreePoolWithTag(v39, 0);
          goto LABEL_56;
        }
      }
      else
      {
        if ( (v58 & 2) != 0 )
          MiDecrementSubsectionViewCount(v36, 0);
        MiSetSubsectionBase(v36, (__int64)v39);
      }
      v12 = v48;
      v36 = *(_QWORD *)(v36 + 16);
      if ( v35 >= v48 )
      {
        v27 = v60;
        goto LABEL_31;
      }
    }
    v41 = -1073741670;
    FileExtents = -1073741670;
  }
  else
  {
    LODWORD(v58) = v34 | 2;
    v42 = (__int64)v33;
    while ( 1 )
    {
      FileExtents = MiGetSubsectionCharges(v29, *(unsigned int *)(v42 + 44));
      v41 = FileExtents;
      if ( FileExtents < 0 )
        break;
      if ( (int)MiIncrementSubsectionViewCount(v42, 13LL) <= 1 )
      {
        v9 += *(unsigned int *)(v42 + 44);
        break;
      }
      v42 = *(_QWORD *)(v42 + 16);
      if ( !v42 )
      {
        if ( v27 )
        {
          FileExtents = MiGetSubsectionCharges(v29, v27);
          v41 = FileExtents;
          if ( FileExtents < 0 )
            break;
          v9 += v27;
        }
        v12 = v48;
LABEL_31:
        v34 = v58;
        appended = MiAppendSubsectionChain((__int64 *)BugCheckParameter2, (__int64)&v51, v58);
        if ( !appended )
        {
          v22 = v50;
          goto LABEL_16;
        }
        goto LABEL_20;
      }
    }
  }
LABEL_56:
  if ( v9 )
  {
    MiReturnSubsectionCharges(v9);
    v9 = 0LL;
  }
  v17 = v47;
  if ( v47 )
  {
    MiDeleteFileOnlyPfns(BugCheckParameter2, &BugCheckParameter2[1][*((unsigned int *)BugCheckParameter2 + 11)]);
    MiRemoveViewsFromSectionWithPfn((__int64 *)BugCheckParameter2, *((unsigned int *)BugCheckParameter2 + 11));
  }
LABEL_62:
  if ( v33 )
  {
    v43 = v58;
    do
    {
      v44 = *(struct _PRIVILEGE_SET **)&v33->Privilege[0].Attributes;
      if ( (v49[7] & 0x40000000) != 0 )
      {
        if ( v33->Privilege[0].Luid )
        {
          v58 = 0LL;
          MiDeleteSubsectionPages((__int64 *)v33, &v58, v17);
        }
      }
      else
      {
        if ( (v43 & 2) != 0 && v33[2].Privilege[0].Luid.LowPart )
          v9 += MiDecrementSubsectionViewCount((__int64)v33, 5);
        Luid = (void *)v33->Privilege[0].Luid;
        if ( Luid )
          ExFreePoolWithTag(Luid, 0);
      }
      MiDeleteSubsection(v33);
      v33 = v44;
    }
    while ( v44 );
    v41 = FileExtents;
  }
  if ( v9 )
    MiReturnSubsectionCharges(v9);
  return v41;
}

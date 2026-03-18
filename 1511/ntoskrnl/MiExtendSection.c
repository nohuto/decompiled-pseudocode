/*
 * XREFs of MiExtendSection @ 0x1403C7890
 * Callers:
 *     MmExtendSection @ 0x1403C7408 (MmExtendSection.c)
 * Callees:
 *     MiAppendSubsectionChain @ 0x14000A4A4 (MiAppendSubsectionChain.c)
 *     MiIncrementSubsectionViewCount @ 0x1400A8CA0 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A8DA0 (MiDecrementSubsectionViewCount.c)
 *     MiSubsectionUsingExtents @ 0x1400A8E40 (MiSubsectionUsingExtents.c)
 *     MiDeleteSubsection @ 0x1400E9408 (MiDeleteSubsection.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MiGetSubsectionCharges @ 0x1401E2FC8 (MiGetSubsectionCharges.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiInitializePrototypePtes @ 0x1403C8F74 (MiInitializePrototypePtes.c)
 *     MiAllocateFileExtents @ 0x14062C488 (MiAllocateFileExtents.c)
 *     MiDeleteFileOnlyPfns @ 0x14062C984 (MiDeleteFileOnlyPfns.c)
 */

__int64 __fastcall MiExtendSection(__int64 **BugCheckParameter2, _QWORD *a2, unsigned int a3, __int64 a4)
{
  unsigned int v5; // r15d
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rsi
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  unsigned __int64 v11; // rdx
  __int128 v12; // xmm1
  unsigned __int64 v13; // rbx
  unsigned int v14; // r14d
  __int64 **PoolWithTag; // rax
  __int64 **v16; // rdi
  unsigned int v17; // r8d
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  __int64 v21; // r14
  int v22; // eax
  __int64 v23; // rbx
  __int16 v24; // cx
  __int16 v25; // cx
  int appended; // eax
  __int64 v27; // rcx
  __int16 v28; // r8
  unsigned __int64 v29; // rdx
  PPRIVILEGE_SET v31; // rbx
  int v32; // edi
  ULONG_PTR v33; // r14
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // r12
  unsigned int v36; // eax
  unsigned __int64 v37; // rdi
  PVOID v38; // r15
  int FileExtents; // eax
  unsigned int v40; // edi
  struct _PRIVILEGE_SET *v41; // r14
  LUID Luid; // rcx
  int v43; // [rsp+38h] [rbp-79h]
  unsigned int v44; // [rsp+3Ch] [rbp-75h]
  __int64 *v45; // [rsp+40h] [rbp-71h]
  unsigned __int64 v46; // [rsp+48h] [rbp-69h]
  __int64 v47; // [rsp+50h] [rbp-61h]
  __int128 v48; // [rsp+58h] [rbp-59h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+68h] [rbp-49h]
  __int128 v50; // [rsp+78h] [rbp-39h]
  __int128 v51; // [rsp+88h] [rbp-29h]
  __int128 v52; // [rsp+98h] [rbp-19h]
  __int128 v53; // [rsp+A8h] [rbp-9h]
  __int128 v54; // [rsp+B8h] [rbp+7h]
  __int128 *v55; // [rsp+118h] [rbp+67h]
  int SubsectionCharges; // [rsp+118h] [rbp+67h]

  v45 = *BugCheckParameter2;
  v5 = a3;
  v47 = **BugCheckParameter2;
  _InterlockedCompareExchange64((volatile signed __int64 *)(v47 + 24), -1LL, -1LL);
  v6 = 0LL;
  v7 = 0LL;
  v8 = *((_OWORD *)BugCheckParameter2 + 1);
  v44 = 0;
  LOBYTE(v43) = 0;
  v48 = *(_OWORD *)BugCheckParameter2;
  v9 = *((_OWORD *)BugCheckParameter2 + 2);
  *(_OWORD *)Privileges = v8;
  v10 = *((_OWORD *)BugCheckParameter2 + 3);
  v11 = (8 * a4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v55 = &v48;
  v50 = v9;
  v51 = v10;
  v46 = v11;
  v12 = *((_OWORD *)BugCheckParameter2 + 5);
  v52 = *((_OWORD *)BugCheckParameter2 + 4);
  v53 = v12;
  v54 = *((_OWORD *)BugCheckParameter2 + 6);
  if ( a3 )
  {
    HIDWORD(v50) += a3;
    DWORD1(v51) ^= (DWORD1(v51) ^ (DWORD1(v51) - a3)) & 0x7FFFFFFF;
  }
  v13 = 0LL;
  do
  {
    if ( v11 - v6 > 0x100000 )
      v14 = 0x100000;
    else
      v14 = v11 - v6;
    PoolWithTag = (__int64 **)ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x64536D4Du);
    v16 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v40 = -1073741670;
      SubsectionCharges = -1073741670;
      goto LABEL_52;
    }
    memset(PoolWithTag, 0, 0x70uLL);
    v16[11] = (__int64 *)(v16 + 10);
    v16[10] = (__int64 *)(v16 + 10);
    *((_QWORD *)v55 + 2) = v16;
    *v16 = v45;
    v6 += v14;
    v17 = v14 >> 3;
    *((_DWORD *)v16 + 11) = v14 >> 3;
    if ( v6 > 8 * a4 )
    {
      v18 = (v6 >> 3) - a4;
      v19 = v17 - v18;
      v20 = (*((_DWORD *)v16 + 13) ^ v18) & 0x7FFFFFFF;
      *((_DWORD *)v16 + 11) = v19;
      *((_DWORD *)v16 + 13) ^= v20;
    }
    v21 = v47;
    *((_WORD *)v16 + 16) = (_WORD)v16[4] & 0xFFC1 | (2 * ((*(_BYTE *)(v47 + 14) >> 1) & 0x1F));
    if ( v55 == &v48 )
    {
      v22 = *((_DWORD *)v55 + 11);
      v23 = *((unsigned __int16 *)v55 + 16);
      *((_WORD *)v55 + 17) &= 0xFu;
      *((_DWORD *)v55 + 10) = v22;
      v13 = *((unsigned int *)v55 + 9) | ((v23 & 0xFFFFFFFFFFFFFFC0uLL) << 26);
    }
    v11 = v46;
    v13 += *((unsigned int *)v55 + 10);
    v24 = (_WORD)v16[4] & 0x3F | (WORD2(v13) << 6);
    *((_DWORD *)v16 + 9) = v13;
    *((_WORD *)v16 + 16) = v24;
    if ( v6 < v46 )
    {
      *((_DWORD *)v16 + 10) = v17;
    }
    else
    {
      v25 = *((_WORD *)v16 + 17);
      *((_DWORD *)v16 + 10) = (*a2 >> 12) - v13;
      *((_WORD *)v16 + 17) = (16 * *(_WORD *)a2) | v25 & 0xF;
    }
    v55 = (__int128 *)v16;
  }
  while ( v6 < v46 );
  if ( !v5 || !(unsigned int)MiSubsectionUsingExtents(BugCheckParameter2) )
    goto LABEL_15;
  FileExtents = MiAllocateFileExtents((ULONG_PTR)BugCheckParameter2, 0);
  SubsectionCharges = FileExtents;
  v40 = FileExtents;
  if ( FileExtents < 0 )
  {
LABEL_52:
    v31 = Privileges[0];
    goto LABEL_53;
  }
  v44 = v5;
LABEL_15:
  appended = MiAppendSubsectionChain((__int64 *)BugCheckParameter2, (__int64)&v48, 0);
  if ( !appended )
  {
LABEL_16:
    v28 = *(_WORD *)(v21 + 12);
    v29 = (*(unsigned int *)(v21 + 8) | ((unsigned __int64)(v28 & 0x3FF) << 32)) + a4 + v5;
    *(_DWORD *)(v21 + 8) += a4 + v5;
    *(_WORD *)(v21 + 12) = v28 ^ (v28 ^ WORD2(v29)) & 0x3FF;
    return 0LL;
  }
  v31 = Privileges[0];
  v32 = 0;
LABEL_18:
  v33 = (ULONG_PTR)v31;
  if ( (appended & 1) != 0 )
  {
    v34 = v46;
    v43 = v32 | 1;
    v35 = 0LL;
    while ( 1 )
    {
      v36 = v34 - v35 > 0x100000 ? 0x100000 : v34 - v35;
      v37 = v36;
      v35 += v36;
      v38 = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, v36, 0x74536D4Du);
      if ( !v38 )
        break;
      MiInitializePrototypePtes(v38, v37 >> 3, v33, (v45[7] & 0x40000000) == 0);
      if ( (v45[7] & 0x40000000) != 0 )
      {
        SubsectionCharges = MiAllocateFileExtents(v33, 1);
        v40 = SubsectionCharges;
        if ( SubsectionCharges < 0 )
        {
          ExFreePoolWithTag(v38, 0);
          goto LABEL_47;
        }
      }
      else
      {
        *(_QWORD *)(v33 + 8) = v38;
      }
      v34 = v46;
      v33 = *(_QWORD *)(v33 + 16);
      if ( v35 >= v46 )
      {
        v5 = a3;
        goto LABEL_27;
      }
    }
    v40 = -1073741670;
    SubsectionCharges = -1073741670;
  }
  else
  {
    v43 = v32 | 2;
    while ( 1 )
    {
      SubsectionCharges = MiGetSubsectionCharges(v27, *(unsigned int *)(v33 + 44));
      v40 = SubsectionCharges;
      if ( SubsectionCharges < 0 )
        break;
      if ( (int)MiIncrementSubsectionViewCount(v33, 13LL) <= 1 )
      {
        v7 += *(unsigned int *)(v33 + 44);
        break;
      }
      v33 = *(_QWORD *)(v33 + 16);
      if ( !v33 )
      {
        if ( v5 )
        {
          SubsectionCharges = MiGetSubsectionCharges(v27, v5);
          v40 = SubsectionCharges;
          if ( SubsectionCharges < 0 )
            break;
          v7 += v5;
        }
LABEL_27:
        v32 = v43;
        appended = MiAppendSubsectionChain((__int64 *)BugCheckParameter2, (__int64)&v48, v43);
        if ( appended )
          goto LABEL_18;
        v21 = v47;
        goto LABEL_16;
      }
    }
  }
LABEL_47:
  if ( v7 )
  {
    MiReturnSubsectionCharges(v7);
    v7 = 0LL;
  }
  if ( v44 )
    MiDeleteFileOnlyPfns(&BugCheckParameter2[1][*((unsigned int *)BugCheckParameter2 + 11)]);
LABEL_53:
  if ( v31 )
  {
    do
    {
      v41 = *(struct _PRIVILEGE_SET **)&v31->Privilege[0].Attributes;
      if ( (v43 & 2) != 0 && v31[2].Privilege[0].Luid.LowPart )
        v7 += MiDecrementSubsectionViewCount((__int64)v31, 5LL);
      Luid = v31->Privilege[0].Luid;
      if ( Luid )
      {
        if ( (v45[7] & 0x40000000) != 0 )
          ((void (__fastcall *)(_QWORD))MiDeleteFileOnlyPfns)(Luid);
        ExFreePoolWithTag(*(PVOID *)&v31->Privilege[0].Luid, 0);
      }
      MiDeleteSubsection(v31);
      v31 = v41;
    }
    while ( v41 );
    v40 = SubsectionCharges;
  }
  if ( v7 )
    MiReturnSubsectionCharges(v7);
  return v40;
}

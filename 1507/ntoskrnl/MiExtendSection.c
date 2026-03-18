/*
 * XREFs of MiExtendSection @ 0x1404B0DE8
 * Callers:
 *     MmExtendSection @ 0x1404B096C (MmExtendSection.c)
 * Callees:
 *     MiDecrementSubsectionViewCount @ 0x140054300 (MiDecrementSubsectionViewCount.c)
 *     MiAppendSubsectionChain @ 0x140077D64 (MiAppendSubsectionChain.c)
 *     MiIncrementSubsectionViewCount @ 0x1400859A4 (MiIncrementSubsectionViewCount.c)
 *     MiDeleteSubsection @ 0x14012DB70 (MiDeleteSubsection.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiExtendExtentSubsection @ 0x14021E4DC (MiExtendExtentSubsection.c)
 *     MiGetSubsectionCharges @ 0x1402304A8 (MiGetSubsectionCharges.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 *     MiDeleteFileExtents @ 0x140230578 (MiDeleteFileExtents.c)
 *     MiGetAdditionalExtents @ 0x140230AC8 (MiGetAdditionalExtents.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiInitializePrototypePtes @ 0x1404B24A0 (MiInitializePrototypePtes.c)
 */

__int64 __fastcall MiExtendSection(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4)
{
  __int128 v4; // xmm1
  __int128 *v5; // r15
  __int128 v6; // xmm0
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rsi
  __int128 v10; // xmm1
  int v11; // r13d
  __int128 v12; // xmm1
  unsigned __int64 v13; // rbx
  unsigned int v14; // r14d
  __int64 **PoolWithTag; // rax
  __int64 **v16; // rdi
  unsigned int v17; // edx
  int v18; // ecx
  __int64 v19; // r14
  int v20; // eax
  __int64 v21; // rbx
  __int16 v22; // cx
  unsigned int v23; // r15d
  int appended; // eax
  __int16 v25; // r8
  unsigned __int64 v26; // rdx
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // r14
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // r15
  unsigned int v33; // eax
  unsigned __int64 v34; // rbx
  __int64 v35; // rdx
  PVOID v36; // r12
  int AdditionalExtents; // eax
  int SubsectionCharges; // ebx
  int v39; // r13d
  __int64 v40; // r14
  void *v41; // rcx
  unsigned int v42; // [rsp+28h] [rbp-89h]
  unsigned __int64 v43; // [rsp+30h] [rbp-81h]
  __int64 *v44; // [rsp+38h] [rbp-79h]
  __int64 v45; // [rsp+40h] [rbp-71h]
  unsigned __int64 v46; // [rsp+48h] [rbp-69h]
  __int128 v47; // [rsp+58h] [rbp-59h] BYREF
  __int128 v48; // [rsp+68h] [rbp-49h]
  __int128 v49; // [rsp+78h] [rbp-39h]
  __int128 v50; // [rsp+88h] [rbp-29h]
  __int128 v51; // [rsp+98h] [rbp-19h]
  __int128 v52; // [rsp+A8h] [rbp-9h]
  __int128 v53; // [rsp+B8h] [rbp+7h]

  v44 = *(__int64 **)a1;
  v45 = **(_QWORD **)a1;
  _InterlockedCompareExchange64((volatile signed __int64 *)(v45 + 24), -1LL, -1LL);
  v4 = *(_OWORD *)(a1 + 16);
  v5 = &v47;
  v47 = *(_OWORD *)a1;
  v6 = *(_OWORD *)(a1 + 32);
  v7 = (8 * a4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v8 = 0LL;
  v48 = v4;
  v9 = 0LL;
  v10 = *(_OWORD *)(a1 + 48);
  v11 = 0;
  v43 = v7;
  v49 = v6;
  v50 = v10;
  v42 = 0;
  v12 = *(_OWORD *)(a1 + 80);
  v51 = *(_OWORD *)(a1 + 64);
  v52 = v12;
  v53 = *(_OWORD *)(a1 + 96);
  if ( a3 )
  {
    HIDWORD(v49) += a3;
    DWORD1(v50) -= a3;
  }
  v13 = 0LL;
  do
  {
    if ( v7 - v8 > 0x100000 )
      v14 = 0x100000;
    else
      v14 = v7 - v8;
    PoolWithTag = (__int64 **)ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x64536D4Du);
    v16 = PoolWithTag;
    if ( !PoolWithTag )
    {
      SubsectionCharges = -1073741670;
      goto LABEL_52;
    }
    memset(PoolWithTag, 0, 0x70uLL);
    v16[11] = (__int64 *)(v16 + 10);
    v16[10] = (__int64 *)(v16 + 10);
    v8 += v14;
    v17 = v14 >> 3;
    *((_QWORD *)v5 + 2) = v16;
    *v16 = v44;
    *((_DWORD *)v16 + 11) = v14 >> 3;
    if ( v8 > 8 * a4 )
    {
      v18 = (v8 >> 3) - a4;
      *((_DWORD *)v16 + 13) = v18;
      *((_DWORD *)v16 + 11) = v17 - v18;
    }
    v19 = v45;
    *((_WORD *)v16 + 16) = (_WORD)v16[4] & 0xFFC1 | (2 * ((*(_BYTE *)(v45 + 14) >> 1) & 0x1F));
    if ( v5 == &v47 )
    {
      v20 = *((_DWORD *)v5 + 11);
      v21 = *((unsigned __int16 *)v5 + 16);
      *((_WORD *)v5 + 17) &= 0xFu;
      *((_DWORD *)v5 + 10) = v20;
      v13 = *((unsigned int *)v5 + 9) | ((v21 & 0xFFFFFFFFFFFFFFC0uLL) << 26);
    }
    v7 = v43;
    v13 += *((unsigned int *)v5 + 10);
    v22 = (_WORD)v16[4] & 0x3F | (WORD2(v13) << 6);
    *((_DWORD *)v16 + 9) = v13;
    *((_WORD *)v16 + 16) = v22;
    if ( v8 < v43 )
    {
      *((_DWORD *)v16 + 10) = v17;
    }
    else
    {
      *((_DWORD *)v16 + 10) = (*a2 >> 12) - v13;
      *((_WORD *)v16 + 17) = *((_WORD *)v16 + 17) & 0xF | (16 * *(_WORD *)a2);
    }
    v5 = (__int128 *)v16;
  }
  while ( v8 < v43 );
  v23 = a3;
  if ( !a3 || (v44[7] & 0x40000000) == 0 )
    goto LABEL_15;
  AdditionalExtents = MiGetAdditionalExtents((__int64 *)a1);
  SubsectionCharges = AdditionalExtents;
  if ( AdditionalExtents < 0 )
  {
LABEL_52:
    v28 = v48;
    goto LABEL_53;
  }
  v42 = a3;
LABEL_15:
  appended = MiAppendSubsectionChain(a1, (__int64)&v47, 0);
  if ( !appended )
  {
LABEL_16:
    v25 = *(_WORD *)(v19 + 12);
    v26 = (*(unsigned int *)(v19 + 8) | ((unsigned __int64)(v25 & 0x3FF) << 32)) + a4 + v23;
    *(_DWORD *)(v19 + 8) += a4 + v23;
    *(_WORD *)(v19 + 12) = v25 ^ (v25 ^ WORD2(v26)) & 0x3FF;
    return 0LL;
  }
  v28 = v48;
LABEL_18:
  v29 = 1LL;
  v30 = v28;
  if ( (appended & 1) != 0 )
  {
    v11 |= 1u;
    v31 = v43;
    v32 = 0LL;
    while ( 1 )
    {
      v33 = v31 - v32 > 0x100000 ? 0x100000 : v31 - v32;
      v34 = v33;
      v46 = v33;
      v32 += v33;
      v36 = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, v33, 0x74536D4Du);
      if ( !v36 )
        break;
      if ( (v44[7] & 0x40000000) != 0 )
      {
        SubsectionCharges = MiExtendExtentSubsection((_QWORD *)v30, v35);
        if ( SubsectionCharges < 0 )
        {
          ExFreePoolWithTag(v36, 0);
          goto LABEL_47;
        }
        v34 = v46;
      }
      *(_WORD *)(v30 + 34) |= 1u;
      *(_QWORD *)(v30 + 8) = v36;
      MiInitializePrototypePtes(v36, v34 >> 3, v30);
      v31 = v43;
      v30 = *(_QWORD *)(v30 + 16);
      if ( v32 >= v43 )
      {
        v23 = a3;
        goto LABEL_26;
      }
    }
    SubsectionCharges = -1073741670;
  }
  else
  {
    v11 |= 2u;
    while ( 1 )
    {
      SubsectionCharges = MiGetSubsectionCharges(v29, *(unsigned int *)(v30 + 44));
      if ( SubsectionCharges < 0 )
        break;
      if ( !(unsigned int)MiIncrementSubsectionViewCount((_QWORD *)v30, 13) )
      {
        v9 += *(unsigned int *)(v30 + 44);
        break;
      }
      v30 = *(_QWORD *)(v30 + 16);
      if ( !v30 )
      {
        if ( v23 )
        {
          SubsectionCharges = MiGetSubsectionCharges(v29, v23);
          if ( SubsectionCharges < 0 )
            break;
          v9 += v23;
        }
LABEL_26:
        appended = MiAppendSubsectionChain(a1, (__int64)&v47, v11);
        if ( appended )
          goto LABEL_18;
        v19 = v45;
        goto LABEL_16;
      }
    }
  }
LABEL_47:
  if ( v9 )
  {
    MiReturnSubsectionCharges(v9);
    v9 = 0LL;
  }
  if ( v42 )
    MiDeleteFileExtents(*(char **)(a1 + 24), *(_DWORD *)(a1 + 44), v42, 0);
LABEL_53:
  if ( v28 )
  {
    v39 = v11 & 2;
    do
    {
      v40 = *(_QWORD *)(v28 + 16);
      if ( v39 && *(_DWORD *)(v28 + 48) )
        v9 += MiDecrementSubsectionViewCount((unsigned int *)v28, 5);
      v41 = *(void **)(v28 + 8);
      if ( v41 )
        ExFreePoolWithTag(v41, 0);
      MiDeleteSubsection((void *)v28);
      v28 = v40;
    }
    while ( v40 );
  }
  if ( v9 )
    MiReturnSubsectionCharges(v9);
  return (unsigned int)SubsectionCharges;
}

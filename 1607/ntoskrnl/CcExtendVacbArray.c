/*
 * XREFs of CcExtendVacbArray @ 0x14006CA98
 * Callers:
 *     CcSetFileSizesEx @ 0x140072FCC (CcSetFileSizesEx.c)
 *     CcInitializeCacheMapEx @ 0x1400E62E0 (CcInitializeCacheMapEx.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x140018490 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x140018534 (CcAcquireBcbLockAndVacbLock.c)
 *     CcCalculateVacbLevelLockCount @ 0x14006ACD0 (CcCalculateVacbLevelLockCount.c)
 *     VacbLevelReference @ 0x14006CA78 (VacbLevelReference.c)
 *     CcFreeUnusedVacbLevels @ 0x14006CEC4 (CcFreeUnusedVacbLevels.c)
 *     CcAllocateVacbLevel @ 0x14006CF18 (CcAllocateVacbLevel.c)
 *     CcAllocateVacbLevels @ 0x14006D490 (CcAllocateVacbLevels.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcExtendVacbArray(__int64 a1, __int64 a2)
{
  int v3; // ecx
  BOOL v4; // r12d
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // r14d
  unsigned int v8; // esi
  unsigned int v9; // r14d
  char *v10; // r15
  __int64 v11; // r8
  unsigned int v13; // ebx
  int v14; // ecx
  unsigned int v15; // esi
  KIRQL v16; // al
  _QWORD *v17; // r14
  _QWORD *VacbLevel; // rax
  _DWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  char *v22; // rcx
  char **i; // rdx
  char *v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  char *v27; // r8
  __int64 v28; // rdx
  char **v29; // r9
  __int64 v30; // r8
  _QWORD *v31; // rax
  char *PoolWithTag; // [rsp+20h] [rbp-30h]
  _QWORD v33[3]; // [rsp+28h] [rbp-28h] BYREF
  int v34; // [rsp+40h] [rbp-10h]
  __int64 v35; // [rsp+98h] [rbp+48h]
  int v36; // [rsp+A0h] [rbp+50h]
  unsigned int v37; // [rsp+A8h] [rbp+58h]

  v35 = a2;
  v3 = 0;
  v4 = 0;
  v36 = 0;
  if ( a2 < 0 )
    return 3221225536LL;
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
    v4 = a2 > 0x200000;
  v33[2] = 0LL;
  v34 = 0;
  v33[1] = v33;
  v33[0] = v33;
  v5 = *(_QWORD *)(a1 + 32);
  if ( a2 <= v5 )
    goto LABEL_31;
  if ( v5 >= 0x2000000 )
    goto LABEL_30;
  v6 = a2;
  if ( a2 >= 0x2000000 )
  {
    v3 = 1;
    v6 = 0x2000000LL;
    v36 = 1;
  }
  v7 = -1;
  if ( HIDWORD(v6) )
  {
    v8 = -1;
  }
  else if ( (unsigned int)v6 <= 0x100000 )
  {
    v8 = 32;
  }
  else
  {
    v8 = 8 * ((unsigned int)v6 >> 18);
  }
  v37 = v8;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    v9 = *(_DWORD *)(a1 + 32);
    if ( v9 > 0x100000 )
      v7 = 8 * (v9 >> 18);
    else
      v7 = 32;
  }
  if ( v8 <= v7 )
  {
LABEL_29:
    *(_QWORD *)(a1 + 32) = v6;
LABEL_30:
    v11 = *(_QWORD *)(a1 + 32);
    if ( a2 <= v11 )
    {
LABEL_31:
      CcFreeUnusedVacbLevels(v33);
      return 0LL;
    }
    v13 = 1;
    v14 = 25;
    if ( v11 > 0x2000000 )
    {
      do
      {
        v14 += 7;
        ++v13;
      }
      while ( v11 > 1LL << v14 );
    }
    v15 = v13;
    if ( !((a2 - 1) >> v14) )
      goto LABEL_37;
    do
    {
      v14 += 7;
      ++v15;
    }
    while ( (a2 - 1) >> v14 );
    if ( v15 <= v13 )
    {
LABEL_37:
      *(_QWORD *)(a1 + 32) = a2;
      goto LABEL_31;
    }
    v16 = KeAcquireQueuedSpinLock(4uLL);
    if ( v15 >= CcMaxVacbLevelsSeen )
      CcMaxVacbLevelsSeen = v15 + 1;
    KeReleaseQueuedSpinLock(4uLL, v16);
    if ( (unsigned __int8)CcAllocateVacbLevels(v15 - v13, 0LL, v33) )
    {
      CcAcquireBcbLockAndVacbLock(v4, (struct _FAST_MUTEX *)a1);
      if ( v13 == 1 )
        CcCalculateVacbLevelLockCount(a1, *(_QWORD **)(a1 + 88));
      v17 = *(_QWORD **)(a1 + 88);
      if ( *(_QWORD *)VacbLevelReference(a1, (__int64)v17, v13 - 1) )
      {
        do
        {
          ++v13;
          VacbLevel = (_QWORD *)CcAllocateVacbLevel(v33, 0LL);
          *VacbLevel = *(_QWORD *)(a1 + 88);
          v19 = (_DWORD *)VacbLevelReference(a1, (__int64)VacbLevel, v13);
          ++*v19;
          *(_QWORD *)(a1 + 88) = v20;
        }
        while ( v13 < v15 );
      }
      else if ( v13 == 1 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
      {
        *(_QWORD *)(a1 + 88) = CcAllocateVacbLevel(v33, 0LL);
        v30 = v17[128];
        v31 = (_QWORD *)v17[255];
        *(_QWORD *)(v30 + 8) = v31;
        *v31 = v30;
        ExFreeToNPagedLookasideList(&CcVacbLevelWithBcbListHeadsLookasideList, v17);
      }
      *(_QWORD *)(a1 + 32) = v35;
      CcReleaseBcbLockAndVacbLock(v4, (struct _FAST_MUTEX *)a1);
      a2 = v35;
      goto LABEL_37;
    }
    return 3221225626LL;
  }
  if ( v4 )
    v8 += (v8 + 15) & 0xFFFFFFF0;
  if ( v3 )
    v8 += 8;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x70566343u);
  if ( PoolWithTag )
  {
    CcAcquireBcbLockAndVacbLock(v4, (struct _FAST_MUTEX *)a1);
    v10 = *(char **)(a1 + 88);
    if ( v10 )
      memmove(PoolWithTag, *(const void **)(a1 + 88), v7);
    else
      v7 = 0;
    memset(&PoolWithTag[v7], 0, v37 - v7);
    if ( v36 )
      *(_QWORD *)&PoolWithTag[v8 - 8] = 0LL;
    if ( v4 )
    {
      v21 = 0LL;
      v22 = &PoolWithTag[v37];
      if ( *(__int64 *)(a1 + 32) > 0x200000 && v10 )
      {
        v27 = &v10[v7];
        do
        {
          v28 = *(_QWORD *)v27;
          v29 = (char **)*((_QWORD *)v27 + 1);
          if ( *(char **)(*(_QWORD *)v27 + 8LL) != v27 || *v29 != v27 )
            __fastfail(3u);
          *v29 = (char *)v28;
          *(_QWORD *)(v28 + 8) = v29;
          if ( *v29 != (char *)v28 )
            __fastfail(3u);
          *(_QWORD *)v22 = v28;
          v21 += 0x80000LL;
          *((_QWORD *)v22 + 1) = v29;
          v27 += 16;
          *v29 = v22;
          *(_QWORD *)(v28 + 8) = v22;
          v22 += 16;
        }
        while ( v21 < *(_QWORD *)(a1 + 32) );
      }
      else
      {
        for ( i = *(char ***)(a1 + 24); i != (char **)(a1 + 16); i = (char **)i[1] )
        {
          while ( v21 <= (__int64)*(i - 1) )
          {
            v24 = *i;
            if ( *((char ***)*i + 1) != i )
              __fastfail(3u);
            *(_QWORD *)v22 = v24;
            v21 += 0x80000LL;
            *((_QWORD *)v22 + 1) = i;
            *((_QWORD *)v24 + 1) = v22;
            *i = v22;
            v22 += 16;
          }
        }
      }
      if ( v21 < v6 )
      {
        v25 = a1 + 16;
        do
        {
          v26 = *(_QWORD *)v25;
          if ( *(_QWORD *)(*(_QWORD *)v25 + 8LL) != v25 )
            __fastfail(3u);
          *(_QWORD *)v22 = v26;
          v21 += 0x80000LL;
          *((_QWORD *)v22 + 1) = v25;
          *(_QWORD *)(v26 + 8) = v22;
          *(_QWORD *)v25 = v22;
          v22 += 16;
        }
        while ( v21 < v6 );
      }
    }
    *(_QWORD *)(a1 + 88) = PoolWithTag;
    *(_QWORD *)(a1 + 32) = v6;
    CcReleaseBcbLockAndVacbLock(v4, (struct _FAST_MUTEX *)a1);
    if ( v10 != (char *)(a1 + 56) && v10 )
      ExFreePoolWithTag(v10, 0);
    a2 = v35;
    goto LABEL_29;
  }
  return 3221225626LL;
}

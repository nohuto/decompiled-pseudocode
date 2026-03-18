/*
 * XREFs of CcExtendVacbArray @ 0x1400E0744
 * Callers:
 *     CcSetFileSizesEx @ 0x1400AED28 (CcSetFileSizesEx.c)
 *     CcInitializeCacheMap @ 0x1400AF300 (CcInitializeCacheMap.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140079F84 (ExFreeToNPagedLookasideList.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcCalculateVacbLevelLockCount @ 0x1400E06D4 (CcCalculateVacbLevelLockCount.c)
 *     VacbLevelReference @ 0x1400E0F58 (VacbLevelReference.c)
 *     CcAllocateVacbLevel @ 0x1400E0F78 (CcAllocateVacbLevel.c)
 *     CcFreeUnusedVacbLevels @ 0x1400E0FF4 (CcFreeUnusedVacbLevels.c)
 *     CcAllocateVacbLevels @ 0x1400E1048 (CcAllocateVacbLevels.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1400E10E8 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1400E115C (CcAcquireBcbLockAndVacbLock.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
  __int64 v16; // rax
  char *v17; // rcx
  char **i; // rdx
  char **v19; // rdx
  char *v20; // r8
  char *v21; // r8
  KIRQL v22; // al
  __int64 v23; // r9
  _QWORD *v24; // r14
  __int64 v25; // r8
  _QWORD *v26; // rax
  char *v27; // rdx
  __int64 v28; // r8
  char **v29; // r9
  _QWORD *VacbLevel; // rax
  __int64 v31; // r9
  _DWORD *v32; // rax
  __int64 v33; // rdx
  char *PoolWithTag; // [rsp+20h] [rbp-30h]
  _QWORD v35[3]; // [rsp+28h] [rbp-28h] BYREF
  int v36; // [rsp+40h] [rbp-10h]
  __int64 v37; // [rsp+98h] [rbp+48h]
  int v38; // [rsp+A0h] [rbp+50h]
  unsigned int v39; // [rsp+A8h] [rbp+58h]

  v37 = a2;
  v3 = 0;
  v4 = 0;
  v38 = 0;
  if ( a2 < 0 )
    return 3221225536LL;
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
    v4 = a2 > 0x200000;
  v35[2] = 0LL;
  v36 = 0;
  v35[1] = v35;
  v35[0] = v35;
  v5 = *(_QWORD *)(a1 + 32);
  if ( a2 <= v5 )
    goto LABEL_29;
  if ( v5 >= 0x2000000 )
    goto LABEL_28;
  v6 = a2;
  if ( a2 >= 0x2000000 )
  {
    v3 = 1;
    v6 = 0x2000000LL;
    v38 = 1;
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
  v39 = v8;
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
LABEL_27:
    *(_QWORD *)(a1 + 32) = v6;
LABEL_28:
    v11 = *(_QWORD *)(a1 + 32);
    if ( a2 <= v11 )
    {
LABEL_29:
      CcFreeUnusedVacbLevels(v35);
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
      goto LABEL_29;
    }
    v22 = KeAcquireQueuedSpinLock(4uLL);
    if ( v15 >= CcMaxVacbLevelsSeen )
      CcMaxVacbLevelsSeen = v15 + 1;
    KeReleaseQueuedSpinLock(4uLL, v22);
    if ( (unsigned __int8)CcAllocateVacbLevels(v15 - v13, 0LL, v35) )
    {
      CcAcquireBcbLockAndVacbLock(v4, a1);
      if ( v13 == 1 )
        CcCalculateVacbLevelLockCount(a1, *(_QWORD **)(a1 + 88));
      v24 = *(_QWORD **)(a1 + 88);
      if ( *(_QWORD *)VacbLevelReference(a1, v24, v13 - 1, v23) )
      {
        do
        {
          ++v13;
          VacbLevel = (_QWORD *)CcAllocateVacbLevel(v35, 0LL);
          *VacbLevel = *(_QWORD *)(a1 + 88);
          v32 = (_DWORD *)VacbLevelReference(a1, VacbLevel, v13, v31);
          ++*v32;
          *(_QWORD *)(a1 + 88) = v33;
        }
        while ( v13 < v15 );
      }
      else if ( v13 == 1 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
      {
        *(_QWORD *)(a1 + 88) = CcAllocateVacbLevel(v35, 0LL);
        v25 = v24[128];
        v26 = (_QWORD *)v24[255];
        *(_QWORD *)(v25 + 8) = v26;
        *v26 = v25;
        ExFreeToNPagedLookasideList(&CcVacbLevelWithBcbListHeadsLookasideList, v24);
      }
      *(_QWORD *)(a1 + 32) = v37;
      CcReleaseBcbLockAndVacbLock(v4, a1);
      a2 = v37;
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
    CcAcquireBcbLockAndVacbLock(v4, a1);
    v10 = *(char **)(a1 + 88);
    if ( v10 )
      memmove(PoolWithTag, *(const void **)(a1 + 88), v7);
    else
      v7 = 0;
    memset(&PoolWithTag[v7], 0, v39 - v7);
    if ( v38 )
      *(_QWORD *)&PoolWithTag[v8 - 8] = 0LL;
    if ( v4 )
    {
      v16 = 0LL;
      v17 = &PoolWithTag[v39];
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
          *(_QWORD *)v17 = v28;
          *((_QWORD *)v17 + 1) = v29;
          if ( *v29 != (char *)v28 )
            __fastfail(3u);
          *v29 = v17;
          v16 += 0x80000LL;
          *(_QWORD *)(v28 + 8) = v17;
          v27 += 16;
          v17 += 16;
        }
        while ( v16 < *(_QWORD *)(a1 + 32) );
      }
      else
      {
        for ( i = *(char ***)(a1 + 24); i != (char **)(a1 + 16); i = (char **)i[1] )
        {
          while ( v16 <= (__int64)*(i - 1) )
          {
            v21 = *i;
            *(_QWORD *)v17 = *i;
            *((_QWORD *)v17 + 1) = i;
            if ( *((char ***)v21 + 1) != i )
              __fastfail(3u);
            *((_QWORD *)v21 + 1) = v17;
            v16 += 0x80000LL;
            *i = v17;
            v17 += 16;
          }
        }
      }
      if ( v16 < v6 )
      {
        v19 = (char **)(a1 + 16);
        do
        {
          v20 = *v19;
          *(_QWORD *)v17 = *v19;
          *((_QWORD *)v17 + 1) = v19;
          if ( *((char ***)v20 + 1) != v19 )
            __fastfail(3u);
          *((_QWORD *)v20 + 1) = v17;
          v16 += 0x80000LL;
          *v19 = v17;
          v17 += 16;
        }
        while ( v16 < v6 );
      }
    }
    *(_QWORD *)(a1 + 88) = PoolWithTag;
    *(_QWORD *)(a1 + 32) = v6;
    CcReleaseBcbLockAndVacbLock(v4, a1);
    if ( v10 != (char *)(a1 + 56) && v10 )
      ExFreePoolWithTag(v10, 0);
    a2 = v37;
    goto LABEL_27;
  }
  return 3221225626LL;
}

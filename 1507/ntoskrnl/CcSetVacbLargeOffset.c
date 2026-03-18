/*
 * XREFs of CcSetVacbLargeOffset @ 0x140078680
 * Callers:
 *     SetVacb @ 0x140078644 (SetVacb.c)
 *     CcUnmapVacbArray @ 0x140086690 (CcUnmapVacbArray.c)
 *     CcAdjustVacbLevelLockCount @ 0x1400F2B04 (CcAdjustVacbLevelLockCount.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     CcGetBcbListHeadLargeOffset @ 0x140076C10 (CcGetBcbListHeadLargeOffset.c)
 *     ReferenceVacbLevel @ 0x140078A04 (ReferenceVacbLevel.c)
 *     CcFreeUnusedVacbLevels @ 0x140078A30 (CcFreeUnusedVacbLevels.c)
 *     CcAllocateVacbLevels @ 0x140078A84 (CcAllocateVacbLevels.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 */

char __fastcall CcSetVacbLargeOffset(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // rbx
  __int64 v7; // r8
  char v8; // r14
  unsigned int v10; // r10d
  int v11; // esi
  char v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rdi
  __int64 v16; // rax
  char v17; // cl
  int v18; // r14d
  void *v20; // rdx
  int v21; // r10d
  __int64 v22; // r11
  __int64 v23; // rax
  int v24; // eax
  struct _NPAGED_LOOKASIDE_LIST *v25; // rcx
  int v26; // ecx
  int v27; // edi
  __int64 BcbListHeadLargeOffset; // rdx
  __int64 *i; // r8
  _QWORD *v30; // r8
  _QWORD *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  unsigned int v38; // [rsp+30h] [rbp-89h]
  int v39; // [rsp+30h] [rbp-89h]
  int v40; // [rsp+34h] [rbp-85h]
  __int64 v41; // [rsp+40h] [rbp-79h]
  _QWORD v42[3]; // [rsp+48h] [rbp-71h] BYREF
  int v43; // [rsp+60h] [rbp-59h]
  __int64 v44; // [rsp+68h] [rbp-51h]
  __int64 v45; // [rsp+70h] [rbp-49h]
  _DWORD v46[22]; // [rsp+78h] [rbp-41h]

  v4 = *(_QWORD **)(a1 + 88);
  v41 = a2;
  v44 = a2;
  v7 = a2;
  v8 = 25;
  v10 = 0;
  v11 = 0;
  do
  {
    v8 += 7;
    ++v11;
  }
  while ( *(_QWORD *)(a1 + 32) > 1LL << v8 );
  v12 = v8 - 7;
  do
  {
    v13 = v10++;
    v14 = v7 >> v12;
    --v11;
    v38 = v10;
    v46[v13] = v7 >> v12;
    *(_QWORD *)&v46[2 * v13 + 8] = v4;
    v45 = (unsigned int)(v7 >> v12);
    v15 = (_QWORD *)v4[v45];
    if ( !v15 )
    {
      v26 = *(_DWORD *)(a1 + 152) & 0x200;
      if ( !v26 || (v27 = 1, v11) )
        v27 = 0;
      v40 = v27;
      if ( !a4 )
      {
        v42[2] = 0LL;
        v43 = 0;
        v42[1] = v42;
        LOBYTE(v14) = v26 != 0;
        v42[0] = v42;
        if ( !(unsigned __int8)CcAllocateVacbLevels((unsigned int)(v11 + 1), v14, v42) )
          return 0;
        a4 = v42;
      }
      if ( v27 )
      {
        v15 = (_QWORD *)a4[2];
        a4[2] = 0LL;
        memset(v15, 0, 0x400uLL);
        v15[256] = 0LL;
      }
      else
      {
        v15 = (_QWORD *)*a4;
        if ( (_QWORD *)*a4 == a4 )
          KeBugCheckEx(0x34u, 0x10E6uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        v34 = *v15;
        v35 = (_QWORD *)v15[1];
        if ( *(_QWORD **)(*v15 + 8LL) != v15 || (_QWORD *)*v35 != v15 )
          __fastfail(3u);
        *v35 = v34;
        *(_QWORD *)(v34 + 8) = v35;
        --*((_DWORD *)a4 + 6);
        memset(v15, 0, 0x408uLL);
      }
      *v15 = 0LL;
      if ( v40 )
      {
        BcbListHeadLargeOffset = CcGetBcbListHeadLargeOffset(a1, v44, 0);
        for ( i = (__int64 *)(BcbListHeadLargeOffset + 8); *(_WORD *)(*i - 16) == 765; i = (__int64 *)(*i + 8) )
          BcbListHeadLargeOffset = *i;
        v30 = *(_QWORD **)(BcbListHeadLargeOffset + 8);
        v31 = v15 + 128;
        *(_QWORD *)(BcbListHeadLargeOffset + 8) = v15 + 128;
        v15[128] = BcbListHeadLargeOffset;
        v32 = 63LL;
        do
        {
          v31[1] = v31 + 2;
          v31 += 2;
          *v31 = v31 - 2;
          --v32;
        }
        while ( v32 );
        v31[1] = v30;
        *v30 = v31;
      }
      v4[v45] = v15;
      if ( v11 == -1 )
        v33 = 2LL * (*(_DWORD *)(a1 + 152) & 0x200);
      else
        v33 = 0LL;
      ++*(_DWORD *)((char *)v4 + v33 + 1024);
      v7 = v41;
      v10 = v38;
    }
    v16 = 1LL << v12;
    v12 -= 7;
    v4 = v15;
    v7 &= v16 - 1;
    v41 = v7;
  }
  while ( v11 );
  if ( a3 >= 0xFFFFFFFFFFFFFFFEuLL )
  {
    v18 = 1;
    if ( a3 == -2LL )
      a3 = 0LL;
  }
  else
  {
    v17 = v12;
    v18 = 0;
    v15[(unsigned int)(v7 >> v17)] = a3;
  }
  if ( a3 )
  {
    ReferenceVacbLevel(a1, (_DWORD)v15, 0, 1, v18);
  }
  else
  {
    while ( 1 )
    {
      ReferenceVacbLevel(a1, (_DWORD)v4, v11, -1, v18);
      v18 = v22;
      v23 = v11 ? v22 : 2LL * (*(_DWORD *)(a1 + 152) & 0x200);
      if ( *(_QWORD *)((char *)v4 + v23 + 1024) || !v21 )
        break;
      v24 = v11++;
      v39 = v21 - 1;
      if ( !v24 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
      {
        v36 = v4[128];
        v37 = (_QWORD *)v4[255];
        *(_QWORD *)(v36 + 8) = v37;
        *v37 = v36;
        v25 = &CcVacbLevelWithBcbListHeadsLookasideList;
      }
      else
      {
        v25 = &CcVacbLevelLookasideList;
      }
      ExFreeToNPagedLookasideList(v25, v20);
      v4 = *(_QWORD **)&v46[2 * v39 + 8];
      v4[v46[v39]] = 0LL;
    }
  }
  if ( a4 == v42 )
    CcFreeUnusedVacbLevels(a4);
  return 1;
}

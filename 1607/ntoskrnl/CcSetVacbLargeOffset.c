/*
 * XREFs of CcSetVacbLargeOffset @ 0x14006C770
 * Callers:
 *     SetVacb @ 0x14001817C (SetVacb.c)
 *     CcAdjustVacbLevelLockCount @ 0x14006C6CC (CcAdjustVacbLevelLockCount.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     CcGetBcbListHeadLargeOffset @ 0x14006C2A0 (CcGetBcbListHeadLargeOffset.c)
 *     ReferenceVacbLevel @ 0x14006CA58 (ReferenceVacbLevel.c)
 *     VacbLevelReference @ 0x14006CA78 (VacbLevelReference.c)
 *     CcFreeUnusedVacbLevels @ 0x14006CEC4 (CcFreeUnusedVacbLevels.c)
 *     CcAllocateVacbLevel @ 0x14006CF18 (CcAllocateVacbLevel.c)
 *     CcAllocateVacbLevels @ 0x14006D490 (CcAllocateVacbLevels.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall CcSetVacbLargeOffset(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // r11
  _QWORD *v6; // r10
  __int64 v8; // r8
  char v10; // si
  __int64 v11; // r9
  __int64 v12; // r12
  int v13; // edi
  char v14; // si
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 VacbLevel; // r15
  char v18; // cl
  char v19; // cl
  int v20; // esi
  _QWORD *v21; // r10
  int v23; // r11d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  void *v28; // rdx
  int v29; // ecx
  unsigned int v30; // r15d
  __int64 BcbListHeadLargeOffset; // rdx
  __int64 *i; // rcx
  _QWORD *v33; // r8
  _QWORD *v34; // rcx
  __int64 v35; // rdx
  _DWORD *v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  _QWORD *v39; // rax
  struct _NPAGED_LOOKASIDE_LIST *v40; // rcx
  unsigned int v41; // [rsp+30h] [rbp-89h]
  _QWORD *v42; // [rsp+38h] [rbp-81h]
  __int64 v43; // [rsp+40h] [rbp-79h]
  _QWORD v44[3]; // [rsp+48h] [rbp-71h] BYREF
  int v45; // [rsp+60h] [rbp-59h]
  __int64 v46; // [rsp+68h] [rbp-51h]
  __int64 v47; // [rsp+70h] [rbp-49h]
  _DWORD v48[22]; // [rsp+78h] [rbp-41h]

  v4 = *(_QWORD *)(a1 + 88);
  v5 = 0LL;
  v6 = a4;
  v42 = a4;
  v43 = a2;
  v8 = *(_QWORD *)(a1 + 32);
  v10 = 25;
  v11 = 1LL;
  v46 = a2;
  LODWORD(v12) = 0;
  v13 = 0;
  do
  {
    v10 += 7;
    ++v13;
  }
  while ( v8 > 1LL << v10 );
  v14 = v10 - 7;
  do
  {
    --v13;
    v15 = a2 >> v14;
    if ( (unsigned int)v12 >= 7 )
      return 0;
    v16 = (unsigned int)v12;
    LODWORD(v12) = v11 + v12;
    v48[v16] = v15;
    *(_QWORD *)&v48[2 * v16 + 8] = v4;
    v47 = (unsigned int)v15;
    VacbLevel = *(_QWORD *)(v4 + 8LL * (unsigned int)v15);
    if ( !VacbLevel )
    {
      v29 = *(_DWORD *)(a1 + 152) & 0x200;
      if ( !v29 || (v30 = v11, v13) )
        v30 = v5;
      v41 = v30;
      if ( !v6 )
      {
        v44[2] = v5;
        v45 = v5;
        v44[1] = v44;
        LOBYTE(v15) = v29 != 0;
        v44[0] = v44;
        if ( !(unsigned __int8)CcAllocateVacbLevels((unsigned int)(v13 + 1), v15, v44) )
          return 0;
        v6 = v44;
        v42 = v44;
      }
      VacbLevel = CcAllocateVacbLevel(v6, v30);
      if ( v41 )
      {
        BcbListHeadLargeOffset = CcGetBcbListHeadLargeOffset(a1, v46, 0);
        for ( i = (__int64 *)(BcbListHeadLargeOffset + 8); *(_WORD *)(*i - 16) == 765; i = (__int64 *)(*i + 8) )
          BcbListHeadLargeOffset = *i;
        v33 = *(_QWORD **)(BcbListHeadLargeOffset + 8);
        v34 = (_QWORD *)(VacbLevel + 1024);
        *(_QWORD *)(BcbListHeadLargeOffset + 8) = VacbLevel + 1024;
        *(_QWORD *)(VacbLevel + 1024) = BcbListHeadLargeOffset;
        v35 = 63LL;
        do
        {
          v34[1] = v34 + 2;
          v34 += 2;
          *v34 = v34 - 2;
          --v35;
        }
        while ( v35 );
        v34[1] = v33;
        *v33 = v34;
      }
      *(_QWORD *)(v4 + 8 * v47) = VacbLevel;
      v36 = (_DWORD *)VacbLevelReference(a1, v4, (unsigned int)(v13 + 1), 1LL);
      v6 = v42;
      *v36 += v11;
    }
    v18 = v14;
    v14 -= 7;
    v4 = VacbLevel;
    a2 = ((v11 << v18) - v11) & v43;
    v43 = a2;
  }
  while ( v13 );
  if ( a3 >= 0xFFFFFFFFFFFFFFFEuLL )
  {
    v20 = v11;
    if ( a3 == -2LL )
      a3 = v5;
  }
  else
  {
    v19 = v14;
    v20 = 0;
    *(_QWORD *)(VacbLevel + 8LL * (unsigned int)(a2 >> v19)) = a3;
  }
  if ( a3 )
  {
    ReferenceVacbLevel(a1, VacbLevel, 0, v11, v20);
  }
  else
  {
    while ( 1 )
    {
      ReferenceVacbLevel(a1, v4, v13, -1, v20);
      v20 = v23;
      if ( *(_QWORD *)VacbLevelReference(v25, v24, v26, v27) || !(_DWORD)v12 )
        break;
      v37 = v13;
      v12 = (unsigned int)(v12 - 1);
      ++v13;
      if ( v37 || (*(_DWORD *)(a1 + 152) & 0x200) == 0 )
      {
        v40 = &CcVacbLevelLookasideList;
      }
      else
      {
        v38 = *(_QWORD *)(v4 + 1024);
        v39 = *(_QWORD **)(v4 + 2040);
        *(_QWORD *)(v38 + 8) = v39;
        *v39 = v38;
        v40 = &CcVacbLevelWithBcbListHeadsLookasideList;
      }
      ExFreeToNPagedLookasideList(v40, v28);
      v4 = *(_QWORD *)&v48[2 * v12 + 8];
      *(_QWORD *)(v4 + 8LL * (unsigned int)v48[v12]) = 0LL;
    }
    v21 = v42;
  }
  if ( v21 == v44 )
    CcFreeUnusedVacbLevels(v21);
  return 1;
}

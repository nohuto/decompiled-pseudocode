/*
 * XREFs of MiOrderTrimList @ 0x14021ABB0
 * Callers:
 *     MiProcessWorkingSets @ 0x140099DB0 (MiProcessWorkingSets.c)
 * Callees:
 *     MiComputeAgeDistribution @ 0x140113790 (MiComputeAgeDistribution.c)
 *     MiUpdateClaimDistribution @ 0x1401138F4 (MiUpdateClaimDistribution.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiWorkingSetVeryLarge @ 0x140213D20 (MiWorkingSetVeryLarge.c)
 */

unsigned __int64 __fastcall MiOrderTrimList(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v3; // esi
  _QWORD **v5; // r14
  unsigned __int64 result; // rax
  __int64 v7; // r15
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r12
  _QWORD **v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rsi
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  unsigned int i; // edx
  __int64 v22; // rax
  __int64 *v23; // rdi
  __int64 *v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // r8d
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // r8d
  _QWORD *v31; // rax
  _QWORD *v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rax
  _QWORD *v35; // rcx
  _QWORD *v36; // rdx
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  unsigned __int64 v40; // [rsp+28h] [rbp-D8h]
  _OWORD v41[4]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v42[24]; // [rsp+70h] [rbp-90h] BYREF

  v2 = 0LL;
  v3 = a2;
  memset(v41, 0, 56);
  v5 = (_QWORD **)(a1 + 5264);
  if ( *v5 == v5 )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 5256);
  v8 = v42;
  v40 = 0LL;
  v9 = 12LL;
  do
  {
    v8[1] = v8;
    *v8 = v8;
    v8 += 2;
    --v9;
  }
  while ( v9 );
  v10 = 2LL;
  while ( *v5 != v5 )
  {
    v11 = (_QWORD **)*v5;
    v12 = (_QWORD *)**v5;
    if ( (_QWORD **)(*v5)[1] != v5 || (_QWORD **)v12[1] != v11 )
      __fastfail(3u);
    *v5 = v12;
    v13 = (__int64)(v11 - 3);
    v12[1] = v5;
    MiUpdateClaimDistribution(v13, (unsigned __int64 *)v41);
    if ( v3 )
    {
      v16 = 0LL;
      v17 = a2 - 1;
      if ( (unsigned int)(a2 - 1) < 7 )
      {
        v18 = v17 + 5LL;
        v19 = 7 - v17;
        v20 = (_QWORD *)(v13 + 8 * v18);
        do
        {
          v16 += *v20++;
          --v19;
        }
        while ( v19 );
      }
    }
    else
    {
      v14 = *(_QWORD *)(v13 + 120);
      v15 = *(_QWORD *)(v13 + 96);
      if ( v14 <= v15 )
        v16 = 0LL;
      else
        v16 = v14 - v15;
    }
    if ( *(_DWORD *)(a1 + 1048) && (*(_BYTE *)(v13 + 216) & 7) == 0 && (PEPROCESS)(v13 - 1272) == PsInitialSystemProcess )
    {
      i = 11;
    }
    else if ( *(_BYTE *)(v13 + 218) != 2 || MiWorkingSetVeryLarge((_QWORD *)v13, 0) )
    {
      if ( v16 && (*(char *)(v13 + 216) >= 0 || *(_QWORD *)(v13 + 120) > *(_QWORD *)(v13 + 96)) )
      {
        for ( i = 0; i < 9; ++i )
        {
          if ( v16 >= 0x100000uLL >> i )
            break;
        }
      }
      else
      {
        i = 11;
      }
      if ( i < 0xA )
      {
        v22 = -1LL;
        if ( v16 + v40 >= v40 )
          v22 = v16 + v40;
        v40 = v22;
      }
    }
    else
    {
      i = 10;
    }
    v23 = (__int64 *)(v13 + 24);
    v24 = &v42[2 * i];
    v25 = *v24;
    *v23 = *v24;
    v23[1] = (__int64)v24;
    if ( *(__int64 **)(v25 + 8) != v24 )
      __fastfail(3u);
    v3 = a2;
    *(_QWORD *)(v25 + 8) = v23;
    *v24 = (__int64)v23;
  }
  v26 = 0;
  v27 = v42;
  while ( (_QWORD *)*v27 == v27 )
  {
    ++v26;
    v27 += 2;
    if ( v26 >= 0xC )
      goto LABEL_49;
  }
  v28 = 2LL * v26;
  v29 = v26;
  v30 = v26 + 1;
  v31 = (_QWORD *)v42[v28];
  *v5 = v31;
  v31[1] = v5;
  if ( v30 < 0xC )
  {
    v32 = &v42[2 * v30];
    do
    {
      if ( (_QWORD *)*v32 != v32 )
      {
        v33 = 2 * v29;
        *(_QWORD *)v42[v33 + 1] = *v32;
        v34 = v42[v33 + 1];
        v29 = v30;
        *(_QWORD *)(*v32 + 8LL) = v34;
      }
      ++v30;
      v32 += 2;
    }
    while ( v30 < 0xC );
  }
  v35 = (_QWORD *)v42[2 * (unsigned int)v29 + 1];
  *(_QWORD *)(a1 + 5272) = v35;
  *v35 = v5;
LABEL_49:
  v36 = (_QWORD *)(v7 + 2480);
  v37 = v41[1];
  *(_OWORD *)(v7 + 2432) = v41[0];
  v38 = v41[2];
  *(_OWORD *)(v7 + 2448) = v37;
  *(_QWORD *)&v37 = *(_QWORD *)&v41[3];
  *(_OWORD *)(v7 + 2464) = v38;
  *(_QWORD *)(v7 + 2480) = v37;
  do
  {
    v2 += *v36--;
    --v10;
  }
  while ( v10 );
  *(_QWORD *)(v7 + 2424) = v2;
  *(_WORD *)(v7 + 2358) = MiComputeAgeDistribution(a1, 0);
  result = v40;
  *(_BYTE *)(v7 + 54) = 1;
  return result;
}

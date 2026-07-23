/*
 * XREFs of MiOrderTrimList @ 0x1401E99B8
 * Callers:
 *     MiProcessWorkingSets @ 0x1400CB4E0 (MiProcessWorkingSets.c)
 * Callees:
 *     MiComputeAgeDistribution @ 0x1400BE384 (MiComputeAgeDistribution.c)
 *     MiUpdateClaimDistribution @ 0x1400BE4E4 (MiUpdateClaimDistribution.c)
 *     MiIsStoreProcess @ 0x14010AC04 (MiIsStoreProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiWorkingSetVeryLarge @ 0x1401E28D8 (MiWorkingSetVeryLarge.c)
 */

__int64 __fastcall MiOrderTrimList(__int64 a1, int a2)
{
  int v2; // r15d
  _QWORD **v4; // r14
  __int64 result; // rax
  __int64 v6; // r13
  _QWORD *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  _QWORD **v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdi
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  char v21; // r15
  unsigned int i; // edx
  _QWORD *v23; // rsi
  _QWORD *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // r8d
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned int v31; // r8d
  _QWORD *v32; // rax
  _QWORD *v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rax
  _QWORD *v36; // rcx
  _QWORD *v37; // rdx
  __int64 v38; // rcx
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  unsigned __int64 v41; // [rsp+20h] [rbp-E0h]
  _OWORD v43[4]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v44[24]; // [rsp+70h] [rbp-90h] BYREF

  v2 = a2;
  memset(v43, 0, 0x38uLL);
  v4 = (_QWORD **)(a1 + 6256);
  if ( *v4 == v4 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 6248);
  v7 = v44;
  v8 = 0LL;
  v9 = 0LL;
  v41 = 0LL;
  v10 = 12LL;
  do
  {
    v7[1] = v7;
    *v7 = v7;
    v7 += 2;
    --v10;
  }
  while ( v10 );
  while ( *v4 != v4 )
  {
    v11 = (_QWORD **)*v4;
    v12 = (_QWORD *)**v4;
    if ( (_QWORD **)(*v4)[1] != v4 || (_QWORD **)v12[1] != v11 )
      __fastfail(3u);
    *v4 = v12;
    v13 = (__int64)(v11 - 3);
    v12[1] = v4;
    MiUpdateClaimDistribution((__int64)(v11 - 3), (unsigned __int64 *)v43);
    if ( v2 )
    {
      v17 = v2 - 1;
      v16 = 0LL;
      if ( (unsigned int)(v2 - 1) < 7 )
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
      v14 = *(_QWORD *)(v13 + 128);
      v15 = *(_QWORD *)(v13 + 104);
      if ( v14 <= v15 )
        v16 = 0LL;
      else
        v16 = v14 - v15;
    }
    v21 = *(_BYTE *)(v13 + 184);
    if ( (v21 & 7) == 0 && MiIsStoreProcess(v13 - 1280) )
    {
      i = 11;
LABEL_18:
      v9 = v41;
      goto LABEL_19;
    }
    if ( *(_BYTE *)(v13 + 186) == 2 && !MiWorkingSetVeryLarge(v13, 0) )
    {
      i = 10;
      goto LABEL_18;
    }
    if ( v16 && (v21 >= 0 || *(_QWORD *)(v13 + 128) > *(_QWORD *)(v13 + 104)) )
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
    if ( i >= 0xA )
      goto LABEL_18;
    v26 = -1LL;
    if ( v16 + v41 >= v41 )
      v26 = v16 + v41;
    v9 = v26;
    v41 = v26;
LABEL_19:
    v23 = (_QWORD *)(v13 + 24);
    v24 = &v44[2 * i];
    v25 = *v24;
    if ( *(_QWORD **)(*v24 + 8LL) != v24 )
      __fastfail(3u);
    v2 = a2;
    *v23 = v25;
    v23[1] = v24;
    *(_QWORD *)(v25 + 8) = v23;
    *v24 = v23;
  }
  v27 = 0;
  v28 = v44;
  while ( (_QWORD *)*v28 == v28 )
  {
    ++v27;
    v28 += 2;
    if ( v27 >= 0xC )
      goto LABEL_48;
  }
  v29 = 2LL * v27;
  v30 = v27;
  v31 = v27 + 1;
  v32 = (_QWORD *)v44[v29];
  *v4 = v32;
  v32[1] = v4;
  if ( v31 < 0xC )
  {
    v33 = &v44[2 * v31];
    do
    {
      if ( (_QWORD *)*v33 != v33 )
      {
        v34 = 2 * v30;
        *(_QWORD *)v44[v34 + 1] = *v33;
        v35 = v44[v34 + 1];
        v30 = v31;
        *(_QWORD *)(*v33 + 8LL) = v35;
      }
      ++v31;
      v33 += 2;
    }
    while ( v31 < 0xC );
  }
  v36 = (_QWORD *)v44[2 * (unsigned int)v30 + 1];
  *(_QWORD *)(a1 + 6264) = v36;
  *v36 = v4;
LABEL_48:
  v37 = (_QWORD *)(v6 + 2480);
  v38 = 2LL;
  v39 = v43[1];
  *(_OWORD *)(v6 + 2432) = v43[0];
  v40 = v43[2];
  *(_OWORD *)(v6 + 2448) = v39;
  *(_QWORD *)&v39 = *(_QWORD *)&v43[3];
  *(_OWORD *)(v6 + 2464) = v40;
  *(_QWORD *)(v6 + 2480) = v39;
  do
  {
    v8 += *v37--;
    --v38;
  }
  while ( v38 );
  *(_QWORD *)(v6 + 2424) = v8;
  *(_WORD *)(v6 + 2358) = MiComputeAgeDistribution(a1, 0);
  result = v9;
  *(_BYTE *)(v6 + 54) = 1;
  return result;
}

/*
 * XREFs of ?SmPickStoreForWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU1@@Z @ 0x14013FAF0
 * Callers:
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14013E454 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x1401231B8 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPickStoreForWrite(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  unsigned int v4; // r14d
  int v5; // r13d
  __int64 v6; // r12
  unsigned int v7; // ebp
  __int64 v8; // r15
  struct _EX_RUNDOWN_REF *v9; // rbx
  unsigned __int64 v10; // rtt
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r11
  int v14; // edx
  int v15; // r9d
  unsigned int v16; // edx
  unsigned int v17; // r9d
  unsigned __int64 v18; // rax
  __int64 v19; // rbx
  _BYTE *v20; // rdi
  __int64 v21; // rax
  unsigned __int64 v23; // rtt
  unsigned int v24; // r8d
  unsigned int v25; // eax
  bool v26; // cf
  bool v27; // cc
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  struct _EX_RUNDOWN_REF *v30; // rcx
  unsigned __int64 v31; // rtt
  unsigned int v32; // [rsp+20h] [rbp-98h]
  unsigned int v33; // [rsp+24h] [rbp-94h]
  unsigned int v34; // [rsp+28h] [rbp-90h]
  int v35; // [rsp+2Ch] [rbp-8Ch] BYREF
  _DWORD v36[4]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v37[32]; // [rsp+40h] [rbp-78h]
  _BYTE v38[32]; // [rsp+60h] [rbp-58h] BYREF

  v2 = 0LL;
  v32 = 0;
  v33 = 0;
  v3 = 0LL;
  v4 = 0;
  v34 = 0;
  v5 = *(_DWORD *)(a1 + 5800);
  if ( !v5 )
    goto LABEL_21;
  while ( v4 < 0x20 )
  {
    v6 = 176LL * v4;
    if ( !*(_QWORD *)(v6 + a1) )
      goto LABEL_11;
    --v5;
    if ( *(_QWORD *)(v6 + a1 + 64) )
      goto LABEL_11;
    v7 = v4 | (32 * (*(_WORD *)(v6 + a1 + 24) & 0x7FF));
    v8 = 176LL * (v4 & 0x1F);
    v9 = (struct _EX_RUNDOWN_REF *)(v8 + a1);
    _m_prefetchw((const void *)(v8 + a1 + 8));
    v10 = *(_QWORD *)(v8 + a1 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v10 == _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + a1 + 8), v10 + 2, v10)
      || ExfAcquireRundownProtection(v9 + 1) )
    {
      if ( (*(_WORD *)(v8 + a1 + 24) & 0x7FF) == v7 >> 5 )
      {
        v11 = *(_QWORD *)(v8 + a1);
        goto LABEL_8;
      }
      _m_prefetchw(&v9[1]);
      v23 = v9[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v23 != _InterlockedCompareExchange64((volatile signed __int64 *)&v9[1], v23 - 2, v23) )
        ExfReleaseRundownProtection(v9 + 1);
    }
    v11 = 0LL;
LABEL_8:
    v2 = v32;
    if ( v11 )
    {
      v12 = *(_DWORD *)(v11 + 36);
      v38[v32] = v4;
      v2 = ++v32;
      ST_STORE<SM_TRAITS>::StDmGetSpaceStats(v11 + 80, v36, &v35);
      v14 = *(_DWORD *)(v13 + 208);
      v15 = v14 - v36[0];
      v16 = ((v14 << (v12 - 6)) - 16 * ((unsigned int)(v35 + 1023) >> 10)) >> 10;
      v17 = (unsigned int)(v15 << (v12 - 6)) >> 10;
      if ( !(_DWORD)v3 )
      {
LABEL_10:
        v37[v3] = v4;
        v3 = (unsigned int)(v3 + 1);
        v34 = v16;
        v33 = v17;
        goto LABEL_11;
      }
      if ( v17 )
      {
        if ( v33 )
        {
          v24 = *(_DWORD *)(v6 + a1 + 28);
          v25 = *(_DWORD *)(176LL * v37[0] + a1 + 28);
          v26 = v24 < v25;
          v27 = v24 <= v25;
LABEL_32:
          if ( v27 )
          {
            if ( v26 )
              goto LABEL_11;
            goto LABEL_10;
          }
        }
        v3 = 0LL;
        goto LABEL_10;
      }
      if ( v33 )
        goto LABEL_11;
      v26 = v16 < v34;
      v27 = v16 <= v34;
      goto LABEL_32;
    }
LABEL_11:
    ++v4;
    if ( !v5 )
      break;
  }
  if ( !(_DWORD)v3 )
  {
LABEL_21:
    v19 = 0LL;
    goto LABEL_16;
  }
  if ( (_DWORD)v3 == 1 )
  {
    v18 = 0LL;
  }
  else
  {
    v28 = __rdtsc();
    v29 = (((unsigned __int64)HIDWORD(v28) << 32) | (unsigned int)v28) >> 4;
    if ( (_DWORD)v3 == 2 )
      v18 = v29 & 1;
    else
      v18 = (unsigned int)v29 % (unsigned int)v3;
  }
  v19 = *(_QWORD *)(176LL * (v37[v18] & 0x1F) + a1);
LABEL_16:
  if ( (_DWORD)v2 )
  {
    v20 = v38;
    do
    {
      v21 = *(_QWORD *)(176LL * (*v20 & 0x1F) + a1);
      if ( v21 != v19 )
      {
        v30 = (struct _EX_RUNDOWN_REF *)(176LL * (*(_DWORD *)(v21 + 4480) & 0x1F) + a1 + 8);
        _m_prefetchw(v30);
        v31 = v30->Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v31 != _InterlockedCompareExchange64((volatile signed __int64 *)v30, v31 - 2, v31) )
          ExfReleaseRundownProtection(v30);
      }
      ++v20;
      --v2;
    }
    while ( v2 );
  }
  return v19;
}

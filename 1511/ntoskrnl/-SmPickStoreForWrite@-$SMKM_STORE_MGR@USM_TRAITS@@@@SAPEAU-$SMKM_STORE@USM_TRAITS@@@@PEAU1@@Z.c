/*
 * XREFs of ?SmPickStoreForWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU1@@Z @ 0x14010E7EC
 * Callers:
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14010B87C (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x1400E4014 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPickStoreForWrite(__int64 a1)
{
  int v1; // r12d
  unsigned int v2; // r13d
  unsigned int v3; // r14d
  __int64 v4; // rdi
  unsigned int v5; // ebp
  __int64 v7; // r15
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  _BYTE *v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rcx
  unsigned int v14; // ebx
  struct _EX_RUNDOWN_REF *v15; // r14
  struct _EX_RUNDOWN_REF v16; // rcx
  int v17; // ebx
  __int64 v18; // r11
  int v19; // edx
  int v20; // r8d
  unsigned int v21; // edx
  unsigned int v22; // r8d
  unsigned int v23; // r9d
  unsigned int v24; // eax
  bool v25; // cf
  bool v26; // cc
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned int v29; // [rsp+20h] [rbp-88h]
  unsigned int v30; // [rsp+24h] [rbp-84h]
  int v31; // [rsp+28h] [rbp-80h] BYREF
  int v32; // [rsp+2Ch] [rbp-7Ch] BYREF
  _BYTE v33[32]; // [rsp+30h] [rbp-78h]
  _BYTE v34[32]; // [rsp+50h] [rbp-58h] BYREF

  v1 = *(_DWORD *)(a1 + 5800);
  v2 = 0;
  v29 = 0;
  v3 = 0;
  v4 = 0LL;
  v30 = 0;
  v5 = 0;
  if ( !v1 )
    goto LABEL_37;
  while ( v5 < 0x20 )
  {
    v7 = 176LL * v5;
    if ( !*(_QWORD *)(v7 + a1) )
      goto LABEL_5;
    --v1;
    if ( *(_QWORD *)(v7 + a1 + 64) )
      goto LABEL_5;
    v14 = v5 | (32 * (*(_WORD *)(v7 + a1 + 24) & 0x7FF));
    v15 = (struct _EX_RUNDOWN_REF *)(a1 + 176LL * (v5 & 0x1F));
    if ( ExAcquireRundownProtection(v15 + 1) )
    {
      if ( (v15[3].Count & 0x7FF) == v14 >> 5 )
      {
        v16.Count = v15->Count;
        goto LABEL_19;
      }
      ExReleaseRundownProtection_0(v15 + 1);
    }
    v16.Count = 0LL;
LABEL_19:
    if ( !v16.Count )
    {
      v3 = v30;
      goto LABEL_5;
    }
    v17 = *(_DWORD *)(v16.Count + 36);
    v34[v30] = v5;
    v3 = ++v30;
    ST_STORE<SM_TRAITS>::StDmGetSpaceStats(v16.Count + 80, &v32, &v31);
    v19 = *(_DWORD *)(v18 + 208);
    v20 = v19 - v32;
    v21 = ((v19 << (v17 - 6)) - 16 * ((unsigned int)(v31 + 1023) >> 10)) >> 10;
    v22 = (unsigned int)(v20 << (v17 - 6)) >> 10;
    if ( (_DWORD)v4 )
    {
      if ( v22 )
      {
        if ( v29 )
        {
          v23 = *(_DWORD *)(v7 + a1 + 28);
          v24 = *(_DWORD *)(176LL * v33[0] + a1 + 28);
          v25 = v23 < v24;
          v26 = v23 <= v24;
LABEL_30:
          if ( v26 )
          {
            if ( v25 )
              goto LABEL_5;
            goto LABEL_21;
          }
        }
        v4 = 0LL;
        goto LABEL_21;
      }
      if ( v29 )
        goto LABEL_5;
      v25 = v21 < v2;
      v26 = v21 <= v2;
      goto LABEL_30;
    }
LABEL_21:
    v33[v4] = v5;
    v2 = v21;
    v4 = (unsigned int)(v4 + 1);
    v29 = v22;
LABEL_5:
    ++v5;
    if ( !v1 )
      break;
  }
  if ( !(_DWORD)v4 )
  {
LABEL_37:
    v9 = 0LL;
    goto LABEL_10;
  }
  if ( (_DWORD)v4 == 1 )
  {
    v8 = 0LL;
  }
  else
  {
    v27 = __rdtsc();
    v28 = (((unsigned __int64)HIDWORD(v27) << 32) | (unsigned int)v27) >> 4;
    if ( (_DWORD)v4 == 2 )
      v8 = v28 & 1;
    else
      v8 = (unsigned int)v28 % (unsigned int)v4;
  }
  v9 = *(_QWORD *)(176LL * (v33[v8] & 0x1F) + a1);
LABEL_10:
  if ( v3 )
  {
    v10 = v34;
    v11 = v3;
    do
    {
      v12 = *(_QWORD *)(176LL * (*v10 & 0x1F) + a1);
      if ( v12 != v9 )
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 176LL * (*(_DWORD *)(v12 + 4480) & 0x1F) + 8));
      ++v10;
      --v11;
    }
    while ( v11 );
  }
  return v9;
}

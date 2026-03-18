/*
 * XREFs of ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400D46DC
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ?SmStGetDataInUseKb@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@@Z @ 0x1400DC2B8 (-SmStGetDataInUseKb@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@@Z.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x1401286CC (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogWorker(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r13
  _WORD *v3; // rax
  unsigned int v4; // esi
  char v5; // r12
  unsigned int v6; // ebp
  __int64 v7; // r15
  struct _EX_RUNDOWN_REF *v8; // r14
  unsigned __int64 v9; // rtt
  __int64 v10; // rax
  unsigned __int64 v11; // rbp
  __int64 v12; // r14
  _DWORD *v13; // rsi
  unsigned int DataInUseKb; // eax
  unsigned __int64 v15; // rax
  _DWORD *v16; // rsi
  struct _EX_RUNDOWN_REF *v17; // rcx
  unsigned __int64 v18; // rtt
  __int64 result; // rax
  struct _EX_RUNDOWN_REF *v20; // rcx
  unsigned __int64 v21; // rtt
  unsigned __int64 v22; // rtt
  __int64 v23; // r14
  unsigned int v24; // r15d
  _DWORD *v25; // rsi
  __int64 v26; // rbp
  __int64 v27; // r12
  unsigned __int64 v28; // rcx
  _WORD *v29; // [rsp+20h] [rbp-D8h]
  _DWORD v31[32]; // [rsp+40h] [rbp-B8h] BYREF

  v1 = 0LL;
  v2 = a1 - 10064;
  v3 = (_WORD *)(a1 - 10064 + 24);
  v4 = 0;
  v29 = v3;
  v5 = 0;
  do
  {
    v6 = v4 | (32 * (*v3 & 0x7FF));
    v7 = 176LL * (v4 & 0x1F);
    v8 = (struct _EX_RUNDOWN_REF *)(v7 + v2);
    _m_prefetchw((const void *)(v7 + v2 + 8));
    v9 = *(_QWORD *)(v7 + v2 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v9 != _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + v2 + 8), v9 + 2, v9)
      && !ExfAcquireRundownProtection(v8 + 1) )
    {
      goto LABEL_4;
    }
    if ( (*(_WORD *)(v7 + v2 + 24) & 0x7FF) != v6 >> 5 )
    {
      _m_prefetchw(&v8[1]);
      v22 = v8[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v22 != _InterlockedCompareExchange64((volatile signed __int64 *)&v8[1], v22 - 2, v22) )
        ExfReleaseRundownProtection(v8 + 1);
LABEL_4:
      v10 = 0LL;
      goto LABEL_5;
    }
    v10 = *(_QWORD *)(v7 + v2);
LABEL_5:
    if ( v10 )
    {
      if ( *(_BYTE *)(v10 + 4487) )
      {
        v31[v1] = v4;
        v1 = (unsigned int)(v1 + 1);
      }
      else
      {
        v20 = (struct _EX_RUNDOWN_REF *)(176LL * (v5 & 0x1F) + v2 + 8);
        _m_prefetchw(v20);
        v21 = v20->Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v21 != _InterlockedCompareExchange64((volatile signed __int64 *)v20, v21 - 2, v21) )
          ExfReleaseRundownProtection(v20);
      }
    }
    v3 = v29 + 88;
    ++v4;
    ++v5;
    v29 += 88;
  }
  while ( v4 < 0x20 );
  if ( (_DWORD)v1 )
  {
    v11 = 0LL;
    v12 = (unsigned int)v1;
    v13 = v31;
    do
    {
      DataInUseKb = SMKM_STORE<SM_TRAITS>::SmStGetDataInUseKb(*(_QWORD *)(176LL * (*v13++ & 0x1F) + v2));
      v11 += DataInUseKb;
      --v12;
    }
    while ( v12 );
    v15 = 4LL * (MEMORY[0xFFFFF780000002E8] / 0x14u);
    if ( v15 >= 0x7D000 )
      v15 = 512000LL;
    if ( v11 >= v15 )
    {
      v23 = 0LL;
      v24 = 0;
      v25 = v31;
      v26 = (unsigned int)v1;
      do
      {
        v27 = *(_QWORD *)(176LL * (*v25 & 0x1F) + v2);
        v28 = (unsigned int)SMKM_STORE<SM_TRAITS>::SmStGetDataInUseKb(v27);
        if ( v24 <= v28 )
        {
          v24 = v28;
          v23 = v27;
        }
        ++v25;
        --v26;
      }
      while ( v26 );
      SMKM_STORE<SM_TRAITS>::SmStPrioritizeRegionsStore(v23, 0LL);
    }
    v16 = v31;
    do
    {
      v17 = (struct _EX_RUNDOWN_REF *)(176LL * (*v16 & 0x1F) + v2 + 8);
      _m_prefetchw(v17);
      v18 = v17->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v18 != _InterlockedCompareExchange64((volatile signed __int64 *)v17, v18 - 2, v18) )
        ExfReleaseRundownProtection(v17);
      ++v16;
      --v1;
    }
    while ( v1 );
  }
  result = a1;
  _InterlockedExchange64((volatile __int64 *)(a1 + 24), 0LL);
  return result;
}

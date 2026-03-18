/*
 * XREFs of ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400F6210
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x1400E7988 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStGetDataInUseKb@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@@Z @ 0x1400F63C8 (-SmStGetDataInUseKb@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@@Z.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogWorker(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r14
  _WORD *v3; // r13
  unsigned int v4; // esi
  char v5; // r12
  unsigned int v6; // ebp
  struct _EX_RUNDOWN_REF *v7; // r15
  struct _EX_RUNDOWN_REF v8; // rax
  unsigned __int64 v9; // rbp
  __int64 v10; // r15
  _DWORD *v11; // rsi
  unsigned int DataInUseKb; // eax
  unsigned __int64 v13; // rax
  _DWORD *v14; // rsi
  __int64 result; // rax
  __int64 v16; // r15
  unsigned int v17; // r12d
  _DWORD *v18; // rsi
  __int64 v19; // rbp
  __int64 v20; // r13
  unsigned __int64 v21; // rcx
  _DWORD v23[32]; // [rsp+30h] [rbp-B8h] BYREF

  v1 = 0LL;
  v2 = a1 - 10080;
  v3 = (_WORD *)(a1 - 10080 + 24);
  v4 = 0;
  v5 = 0;
  do
  {
    v6 = v4 | (32 * (*v3 & 0x7FF));
    v7 = (struct _EX_RUNDOWN_REF *)(v2 + 176LL * (v4 & 0x1F));
    if ( !ExAcquireRundownProtection(v7 + 1) )
      goto LABEL_3;
    if ( (v7[3].Count & 0x7FF) != v6 >> 5 )
    {
      ExReleaseRundownProtection_0(v7 + 1);
LABEL_3:
      v8.Count = 0LL;
      goto LABEL_4;
    }
    v8.Count = v7->Count;
LABEL_4:
    if ( v8.Count )
    {
      if ( *(_BYTE *)(v8.Count + 4487) )
      {
        v23[v1] = v4;
        v1 = (unsigned int)(v1 + 1);
      }
      else
      {
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(176LL * (v5 & 0x1F) + v2 + 8));
      }
    }
    ++v4;
    ++v5;
    v3 += 88;
  }
  while ( v4 < 0x20 );
  if ( (_DWORD)v1 )
  {
    v9 = 0LL;
    v10 = (unsigned int)v1;
    v11 = v23;
    do
    {
      DataInUseKb = SMKM_STORE<SM_TRAITS>::SmStGetDataInUseKb(*(_QWORD *)(176LL * (*v11++ & 0x1F) + v2));
      v9 += DataInUseKb;
      --v10;
    }
    while ( v10 );
    v13 = 4LL * (MEMORY[0xFFFFF780000002E8] / 0x14u);
    if ( v13 >= 0x7D000 )
      v13 = 512000LL;
    if ( v9 >= v13 )
    {
      v16 = 0LL;
      v17 = 0;
      v18 = v23;
      v19 = (unsigned int)v1;
      do
      {
        v20 = *(_QWORD *)(176LL * (*v18 & 0x1F) + v2);
        v21 = (unsigned int)SMKM_STORE<SM_TRAITS>::SmStGetDataInUseKb(v20);
        if ( v17 <= v21 )
        {
          v17 = v21;
          v16 = v20;
        }
        ++v18;
        --v19;
      }
      while ( v19 );
      SMKM_STORE<SM_TRAITS>::SmStPrioritizeRegionsStore(v16, 0);
    }
    v14 = v23;
    do
    {
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(176LL * (*v14++ & 0x1F) + v2 + 8));
      --v1;
    }
    while ( v1 );
  }
  result = a1;
  _InterlockedExchange64((volatile __int64 *)(a1 + 24), 0LL);
  return result;
}

/*
 * XREFs of ?SmStGetDataInUseKb@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@@Z @ 0x1400033B4
 * Callers:
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140003174 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x14000342C (-SmStGetStoreStats@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStGetDataInUseKb(__int64 a1, __int64 a2)
{
  char *v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  int v7[4]; // [rsp+20h] [rbp-628h] BYREF
  _BYTE v8[12]; // [rsp+30h] [rbp-618h] BYREF
  unsigned int v9; // [rsp+3Ch] [rbp-60Ch]
  char v10; // [rsp+5Ch] [rbp-5ECh] BYREF

  v7[0] = 1536;
  ((void (__fastcall *)(__int64, __int64, _BYTE *, int *))SMKM_STORE<SM_TRAITS>::SmStGetStoreStats)(a1, a2, v8, v7);
  v2 = &v10;
  v3 = 0LL;
  v4 = 8LL;
  do
  {
    v5 = *(unsigned int *)v2;
    v2 += 8;
    v3 += v9 * v5;
    --v4;
  }
  while ( v4 );
  return (unsigned __int64)(v3 + 1023) >> 10;
}

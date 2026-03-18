/*
 * XREFs of ?SmStGetDataInUseKb@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@@Z @ 0x1400F63C8
 * Callers:
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400F6210 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x1400F826C (-SmStGetStoreStats@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStGetDataInUseKb(__int64 a1)
{
  char *v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rax
  int v6[4]; // [rsp+20h] [rbp-628h] BYREF
  _BYTE v7[12]; // [rsp+30h] [rbp-618h] BYREF
  unsigned int v8; // [rsp+3Ch] [rbp-60Ch]
  char v9; // [rsp+58h] [rbp-5F0h] BYREF

  v6[0] = 1528;
  ((void (__fastcall *)(__int64, _QWORD, _BYTE *, int *))SMKM_STORE<SM_TRAITS>::SmStGetStoreStats)(a1, 0LL, v7, v6);
  v1 = &v9;
  v2 = 0LL;
  v3 = 8LL;
  do
  {
    v4 = *(unsigned int *)v1;
    v1 += 8;
    v2 += v8 * v4;
    --v3;
  }
  while ( v3 );
  return (unsigned __int64)(v2 + 1023) >> 10;
}

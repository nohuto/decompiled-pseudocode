/*
 * XREFs of ?StNpLeafDelete@?$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z @ 0x14021F69C
 * Callers:
 *     <none>
 * Callees:
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140118274 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StNpLeafDelete(__int64 *a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  _DWORD v6[10]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2 & 0xFFFFFFFC;
  memset(v6, 0, 0x20uLL);
  v4 = *a1;
  v6[2] = v3;
  v6[0] = v6[0] & 0xFFFFFFF8 | 1;
  v6[3] = 1;
  return ST_STORE<SM_TRAITS>::StDmPageRemove(*(struct NP_CONTEXT::NP_CTX **)(v4 + 128), (__int64)v6);
}

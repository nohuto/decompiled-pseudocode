/*
 * XREFs of SmKmInitialize @ 0x140541808
 * Callers:
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x14013EA90 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall SmKmInitialize(__int64 a1)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  __int64 v3; // rsi

  memset((void *)a1, 0, 0x16B8uLL);
  v2 = (struct _EX_RUNDOWN_REF *)(a1 + 16);
  v3 = 32LL;
  do
  {
    v2[-1].Count = 0LL;
    ExWaitForRundownProtectionRelease(v2 - 1);
    v2->Count = 0LL;
    ExWaitForRundownProtectionRelease(v2);
    v2[19].Count = 0LL;
    v2 += 22;
    --v3;
  }
  while ( v3 );
  *(_QWORD *)(a1 + 5792) = 0LL;
  *(_DWORD *)(a1 + 5808) = -1;
  *(_QWORD *)(a1 + 5632) = SMKM_STORE_MGR<SM_TRAITS>::SmStoreMgrCallback;
  return SmWdInitialize((_QWORD *)(a1 + 5640), a1);
}

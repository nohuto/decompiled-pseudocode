/*
 * XREFs of SmKmInitialize @ 0x1405B614C
 * Callers:
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x14016C2EC (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 * Callees:
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall SmKmInitialize(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax

  memset((void *)a1, 0, 0x16B8uLL);
  v2 = 32LL;
  v3 = a1 + 16;
  do
  {
    *(_QWORD *)(v3 - 8) = 0LL;
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 - 8), 1LL, 0LL);
    if ( v4 >= 2 )
      ExfWaitForRundownProtectionRelease((volatile signed __int64 *)(v3 - 8), v4);
    *(_QWORD *)v3 = 0LL;
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)v3, 1LL, 0LL);
    if ( v5 >= 2 )
      ExfWaitForRundownProtectionRelease((volatile signed __int64 *)v3, v5);
    *(_QWORD *)(v3 + 152) = 0LL;
    v3 += 176LL;
    --v2;
  }
  while ( v2 );
  *(_QWORD *)(a1 + 5792) = 0LL;
  *(_DWORD *)(a1 + 5808) = -1;
  *(_QWORD *)(a1 + 5632) = SMKM_STORE_MGR<SM_TRAITS>::SmStoreMgrCallback;
  return SmWdInitialize((_QWORD *)(a1 + 5640), a1);
}

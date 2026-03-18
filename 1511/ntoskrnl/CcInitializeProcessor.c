/*
 * XREFs of CcInitializeProcessor @ 0x140525728
 * Callers:
 *     KiStartDynamicProcessor @ 0x140619E80 (KiStartDynamicProcessor.c)
 *     CcInitializeCacheManager @ 0x140758600 (CcInitializeCacheManager.c)
 * Callees:
 *     MmIsThisAnNtAsSystem @ 0x1400F3790 (MmIsThisAnNtAsSystem.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExInitializeSystemLookasideList @ 0x1403A7B7C (ExInitializeSystemLookasideList.c)
 */

__int64 __fastcall CcInitializeProcessor(__int64 a1)
{
  __int16 v2; // di
  PVOID PoolWithTag; // rbx
  __int64 result; // rax

  v2 = 128;
  if ( MmIsThisAnNtAsSystem() )
    v2 = 256;
  *(_QWORD *)(a1 + 2024) = &CcTwilightLookasideList;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x4B576343u);
  if ( PoolWithTag )
    ExInitializeSystemLookasideList((__int64)PoolWithTag, 512, 112, 1264018243, v2, (__int64)&ExSystemLookasideListHead);
  else
    PoolWithTag = &CcTwilightLookasideList;
  result = 0LL;
  *(_QWORD *)(a1 + 2016) = PoolWithTag;
  return result;
}

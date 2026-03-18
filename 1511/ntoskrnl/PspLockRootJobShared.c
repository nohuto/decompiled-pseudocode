/*
 * XREFs of PspLockRootJobShared @ 0x1403EBA18
 * Callers:
 *     PspQueryJobHierarchyAccountingInformation @ 0x1403EAFE0 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspChargeJobWakeCounter @ 0x1403EB4DC (PspChargeJobWakeCounter.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 */

__int64 __fastcall PspLockRootJobShared(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h]

  if ( a2 )
    --*(_WORD *)(a2 + 486);
  for ( i = *(_QWORD *)(a1 + 1072); ; i = *(_QWORD *)(a1 + 1072) )
  {
    v7 = i;
    ExAcquireResourceSharedLite((PERESOURCE)(i + 56), 1u);
    if ( v7 == *(_QWORD *)(a1 + 1072) )
      break;
    ExReleaseResourceLite((PERESOURCE)(v7 + 56));
  }
  result = v7;
  *a3 = v7;
  return result;
}

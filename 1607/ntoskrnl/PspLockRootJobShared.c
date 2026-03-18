/*
 * XREFs of PspLockRootJobShared @ 0x140468EF8
 * Callers:
 *     PspChargeJobWakeCounter @ 0x140468C90 (PspChargeJobWakeCounter.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140469C10 (PspQueryJobHierarchyAccountingInformation.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400685B0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
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

/*
 * XREFs of PspLockRootJobExclusive @ 0x1403ECDA8
 * Callers:
 *     PspJobDelete @ 0x1400C49F4 (PspJobDelete.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1403ECA98 (PspAllocateAndQueryNotificationChannel.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 *     PspFreezeJobTree @ 0x14048641C (PspFreezeJobTree.c)
 *     PspSetNetRateControl @ 0x140642924 (PspSetNetRateControl.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 */

__int64 __fastcall PspLockRootJobExclusive(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h]

  if ( a2 )
    --*(_WORD *)(a2 + 486);
  for ( i = *(_QWORD *)(a1 + 1072); ; i = *(_QWORD *)(a1 + 1072) )
  {
    v7 = i;
    ExAcquireResourceExclusiveLite((PERESOURCE)(i + 56), 1u);
    if ( v7 == *(_QWORD *)(a1 + 1072) )
      break;
    ExReleaseResourceLite((PERESOURCE)(v7 + 56));
  }
  result = v7;
  *a3 = v7;
  return result;
}

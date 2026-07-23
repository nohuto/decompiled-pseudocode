/*
 * XREFs of HvlSetPartitionProperty @ 0x1401BDBC4
 * Callers:
 *     HvlResumePartition @ 0x1401BD788 (HvlResumePartition.c)
 *     HvlSuspendPartition @ 0x1401BDD78 (HvlSuspendPartition.c)
 * Callees:
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlSetPartitionProperty(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  PHYSICAL_ADDRESS v7; // rdx
  __int16 v8; // bx
  PHYSICAL_ADDRESS v9[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  v6 = HvlpAcquireHypercallPage(v9, 1, 0LL, 24LL);
  v7 = v9[3];
  *(_QWORD *)v6 = a1;
  *(_DWORD *)(v6 + 8) = 0x20000;
  *(_QWORD *)(v6 + 16) = a3;
  v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(69LL, (PHYSICAL_ADDRESS)v7.QuadPart, 0LL);
  HvlpReleaseHypercallPage((__int64)v9);
  return v8 != 0 ? 0xC0000001 : 0;
}

/*
 * XREFs of PspComputeReportWakeFilter @ 0x1404D52F0
 * Callers:
 *     PspAllocateAndQueryNotificationChannel @ 0x1404D4B6C (PspAllocateAndQueryNotificationChannel.c)
 *     PspFreezeJobTree @ 0x1404D4EDC (PspFreezeJobTree.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspComputeReportWakeFilter(_DWORD *a1, __int64 a2, _QWORD *a3, char a4)
{
  __int64 result; // rax

  *(_QWORD *)a2 = *a3;
  if ( a4 )
  {
    *(_DWORD *)a2 &= ~a1[234];
    *(_DWORD *)(a2 + 4) &= ~a1[235];
  }
  *(_DWORD *)(a2 + 4) &= a1[236];
  result = (unsigned int)~*(_DWORD *)(a2 + 4);
  a1[236] &= result;
  return result;
}

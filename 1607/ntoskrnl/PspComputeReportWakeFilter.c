/*
 * XREFs of PspComputeReportWakeFilter @ 0x140489E14
 * Callers:
 *     PspFreezeJobTree @ 0x140489E4C (PspFreezeJobTree.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14048A7F4 (PspAllocateAndQueryNotificationChannel.c)
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

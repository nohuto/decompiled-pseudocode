/*
 * XREFs of RtlpGetLowFragHeapMetadataSize @ 0x1800F0728
 * Callers:
 *     RtlpQueryMemoryUsageHeap @ 0x1800DA458 (RtlpQueryMemoryUsageHeap.c)
 *     GetUCBytes @ 0x1800EE99C (GetUCBytes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetLowFragHeapMetadataSize(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 378) == 2 )
    v3 = *(_QWORD *)(a1 + 368);
  else
    v3 = 0LL;
  if ( v3 )
  {
    *a2 = *(_QWORD *)(v3 + 48) - v3;
    result = *(_QWORD *)(v3 + 40) - v3;
    *a3 = result;
  }
  else
  {
    *a3 = 0LL;
    *a2 = 0LL;
  }
  return result;
}

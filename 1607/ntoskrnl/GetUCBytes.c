/*
 * XREFs of GetUCBytes @ 0x140218388
 * Callers:
 *     RtlpLogHeapContractEvent @ 0x140218D48 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapExtendEvent @ 0x140218F78 (RtlpLogHeapExtendEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetUCBytes(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // r10
  __int64 *v4; // rbx
  __int64 *v6; // r9
  int v7; // ecx
  __int64 result; // rax

  v3 = 0LL;
  v4 = (__int64 *)(a1 + 288);
  *a3 = 0;
  v6 = *(__int64 **)(a1 + 288);
  while ( v6 != v4 )
  {
    *a2 += (unsigned int)(*((_DWORD *)v6 + 8) << 12);
    *a3 += *((_DWORD *)v6 + 15);
    v7 = *((_DWORD *)v6 + 14);
    v6 = (__int64 *)*v6;
    v3 += (unsigned int)(v7 << 12);
  }
  result = v3;
  *a2 += *(_QWORD *)(a1 + 560);
  return result;
}

/*
 * XREFs of RtlpHpSegReportCounters @ 0x1800FA030
 * Callers:
 *     RtlpQueryExtendedInformationHeap @ 0x180095010 (RtlpQueryExtendedInformationHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegReportCounters(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // r10
  __int64 v6; // r8
  unsigned int v7; // ecx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = v2;
  v4 = 2LL * *(_QWORD *)(a1 + 112);
  v5 = *(_QWORD *)a1 << 12;
  *(_QWORD *)(a2 + 120) = v5;
  v2 <<= 12;
  *(_QWORD *)(a2 + 128) = v2;
  *(_QWORD *)(a2 + 136) = *(_QWORD *)(a1 + 112);
  v6 = (v3 - v4 - 1) << 12;
  *(_QWORD *)(a2 + 144) = v6;
  *(_QWORD *)(a2 + 152) = *(_QWORD *)(a1 + 72) << 12;
  *(_QWORD *)(a2 + 160) = *(_QWORD *)(a1 + 80) << 12;
  *(_QWORD *)(a2 + 32) = a1;
  *(_QWORD *)(a2 + 80) = v6;
  *(_DWORD *)(a2 + 20) = 2;
  *(_DWORD *)(a2 + 24) = *(unsigned __int16 *)(a1 + 36);
  v7 = NtCurrentPeb()->NumberOfHeaps - 1;
  *(_QWORD *)(a2 + 40) = v5;
  *(_DWORD *)(a2 + 28) = v7;
  *(_QWORD *)(a2 + 48) = v2;
  result = *(unsigned int *)(a2 + 152);
  *(_DWORD *)(a2 + 100) = 0;
  *(_DWORD *)(a2 + 104) = result;
  return result;
}

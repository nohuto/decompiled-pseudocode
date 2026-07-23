/*
 * XREFs of HvlpFastAcknowledgePageRequest @ 0x1401BE794
 * Callers:
 *     HvlSvmAcknowledgePageRequest @ 0x1401BDD84 (HvlSvmAcknowledgePageRequest.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x1401BE950 (HvlpSlowAcknowledgePageRequest.c)
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x140168B10 (HvcallpExtendedFastHypercall.c)
 */

__int64 __fastcall HvlpFastAcknowledgePageRequest(int a1, _QWORD *a2, int *a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp+18h]

  LODWORD(v5) = 65702;
  HIDWORD(v5) = a1 & 0xFFF;
  result = HvcallpExtendedFastHypercall(v5, a2, (unsigned int)(32 * a1));
  *a3 = WORD2(result) & 0xFFF;
  return result;
}

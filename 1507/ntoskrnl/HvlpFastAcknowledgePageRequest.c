/*
 * XREFs of HvlpFastAcknowledgePageRequest @ 0x1401EBC00
 * Callers:
 *     HvlSvmAcknowledgePageRequest @ 0x1401EA9E0 (HvlSvmAcknowledgePageRequest.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x1401EBF8C (HvlpSlowAcknowledgePageRequest.c)
 * Callees:
 *     HvlpExtendedFastHypercall @ 0x14017ECA0 (HvlpExtendedFastHypercall.c)
 */

__int64 __fastcall HvlpFastAcknowledgePageRequest(int a1, _QWORD *a2, int *a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+48h] [rbp+20h]

  HIDWORD(v5) = a1 & 0xFFF;
  LODWORD(v5) = 65702;
  result = HvlpExtendedFastHypercall(v5, a2, (unsigned int)(32 * a1));
  *a3 = WORD2(result) & 0xFFF;
  return result;
}

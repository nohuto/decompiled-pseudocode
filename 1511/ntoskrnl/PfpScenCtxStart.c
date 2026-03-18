/*
 * XREFs of PfpScenCtxStart @ 0x140541430
 * Callers:
 *     PfInitializeSuperfetch @ 0x14076A3E8 (PfInitializeSuperfetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     PfpCreateEvent @ 0x14054149C (PfpCreateEvent.c)
 */

__int64 __fastcall PfpScenCtxStart(__int64 a1)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\SuperfetchScenarioNotify");
  return PfpCreateEvent(&DestinationString, 0LL, a1 + 64);
}

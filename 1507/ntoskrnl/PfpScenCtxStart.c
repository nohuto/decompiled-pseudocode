/*
 * XREFs of PfpScenCtxStart @ 0x1405B71F4
 * Callers:
 *     PfInitializeSuperfetch @ 0x1407DEE3C (PfInitializeSuperfetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     PfpCreateEvent @ 0x1405B7260 (PfpCreateEvent.c)
 */

__int64 __fastcall PfpScenCtxStart(__int64 a1)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\SuperfetchScenarioNotify");
  return PfpCreateEvent(&DestinationString, 0LL, a1 + 64);
}

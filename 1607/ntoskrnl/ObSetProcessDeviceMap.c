/*
 * XREFs of ObSetProcessDeviceMap @ 0x140668B14
 * Callers:
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x1400136A0 (PsGetProcessServerSilo.c)
 *     ObpSetDeviceMap @ 0x1404E9E58 (ObpSetDeviceMap.c)
 */

NTSTATUS __fastcall ObSetProcessDeviceMap(__int64 a1, void *a2, KPROCESSOR_MODE a3)
{
  void *ProcessServerSilo; // rax

  ProcessServerSilo = (void *)PsGetProcessServerSilo(a1);
  return ObpSetDeviceMap(ProcessServerSilo, a1, a2, a3, 2, 0LL);
}

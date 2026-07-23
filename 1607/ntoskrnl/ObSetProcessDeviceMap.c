/*
 * XREFs of ObSetProcessDeviceMap @ 0x140668BF8
 * Callers:
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140013220 (PsGetProcessServerSilo.c)
 *     ObpSetDeviceMap @ 0x1404CBF4C (ObpSetDeviceMap.c)
 */

NTSTATUS __fastcall ObSetProcessDeviceMap(__int64 a1, void *a2, KPROCESSOR_MODE a3)
{
  void *ProcessServerSilo; // rax

  ProcessServerSilo = (void *)PsGetProcessServerSilo(a1);
  return ObpSetDeviceMap(ProcessServerSilo, a1, a2, a3, 2, 0LL);
}

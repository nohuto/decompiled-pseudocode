/*
 * XREFs of PnpRequestDeviceEjectExWorker @ 0x14062A82C
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14064B3CC (PnpQueueQueryAndRemoveEvent.c)
 */

void __fastcall PnpRequestDeviceEjectExWorker(WCHAR *P)
{
  unsigned int v2; // eax
  void (__fastcall *v3)(_QWORD, _QWORD); // r8
  void *v4; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+50h] [rbp+8h] BYREF

  RtlInitUnicodeString(&DestinationString, P + 32);
  v6 = 1024;
  v2 = PnpQueueQueryAndRemoveEvent(
         (unsigned int)&DestinationString,
         (int)P + 464,
         (int)P + 468,
         (unsigned int)&v6,
         8,
         1);
  v3 = *(void (__fastcall **)(_QWORD, _QWORD))P;
  *((_DWORD *)P + 6) = v2;
  if ( v3 )
    v3(v2, *((_QWORD *)P + 1));
  v4 = (void *)*((_QWORD *)P + 2);
  if ( v4 )
    ObfDereferenceObject(v4);
  ExFreePoolWithTag(P, 0x46706E50u);
}

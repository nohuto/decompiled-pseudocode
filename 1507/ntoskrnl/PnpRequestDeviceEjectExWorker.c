/*
 * XREFs of PnpRequestDeviceEjectExWorker @ 0x14067B3F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14058AA90 (PnpQueueQueryAndRemoveEvent.c)
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
  v2 = PnpQueueQueryAndRemoveEvent(&DestinationString.Length, (_DWORD *)P + 116, P + 234, (__int64)&v6, 8, 1);
  v3 = *(void (__fastcall **)(_QWORD, _QWORD))P;
  *((_DWORD *)P + 6) = v2;
  if ( v3 )
    v3(v2, *((_QWORD *)P + 1));
  v4 = (void *)*((_QWORD *)P + 2);
  if ( v4 )
    ObfDereferenceObject(v4);
  ExFreePoolWithTag(P, 0x46706E50u);
}

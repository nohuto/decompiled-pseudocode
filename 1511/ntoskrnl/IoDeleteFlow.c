/*
 * XREFs of IoDeleteFlow @ 0x1401BD6FC
 * Callers:
 *     PspJobDelete @ 0x1400C49F4 (PspJobDelete.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 * Callees:
 *     IopPreInitializeIoQosWorkItem @ 0x1401BDA18 (IopPreInitializeIoQosWorkItem.c)
 *     IopRunIoQosWorkItem @ 0x1401BDB5C (IopRunIoQosWorkItem.c)
 */

__int64 __fastcall IoDeleteFlow(__int64 a1)
{
  _BYTE v3[56]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v4; // [rsp+58h] [rbp-80h]
  unsigned int v5; // [rsp+C0h] [rbp-18h]

  IopPreInitializeIoQosWorkItem(v3, IopDeleteFlow);
  v4 = a1;
  IopRunIoQosWorkItem(v3);
  return v5;
}

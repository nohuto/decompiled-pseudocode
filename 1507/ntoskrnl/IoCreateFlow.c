/*
 * XREFs of IoCreateFlow @ 0x1401F8F48
 * Callers:
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 * Callees:
 *     IopPreInitializeIoQosWorkItem @ 0x1401F92CC (IopPreInitializeIoQosWorkItem.c)
 *     IopRunIoQosWorkItem @ 0x1401F9438 (IopRunIoQosWorkItem.c)
 */

__int64 __fastcall IoCreateFlow(__int64 a1)
{
  _BYTE v3[56]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v4; // [rsp+58h] [rbp-80h]
  unsigned int v5; // [rsp+C0h] [rbp-18h]

  IopPreInitializeIoQosWorkItem(v3, IopCreateFlow);
  v4 = a1;
  IopRunIoQosWorkItem(v3);
  return v5;
}

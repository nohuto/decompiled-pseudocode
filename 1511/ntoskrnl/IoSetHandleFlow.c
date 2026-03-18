/*
 * XREFs of IoSetHandleFlow @ 0x1401BD8F8
 * Callers:
 *     PspSetFileHandleFlow @ 0x140642630 (PspSetFileHandleFlow.c)
 * Callees:
 *     IopPreInitializeIoQosWorkItem @ 0x1401BDA18 (IopPreInitializeIoQosWorkItem.c)
 *     IopRunIoQosWorkItem @ 0x1401BDB5C (IopRunIoQosWorkItem.c)
 */

__int64 __fastcall IoSetHandleFlow(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _BYTE v8[56]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v9; // [rsp+58h] [rbp-80h]
  __int64 v10; // [rsp+60h] [rbp-78h]
  unsigned int v11; // [rsp+C0h] [rbp-18h]
  int v12; // [rsp+C4h] [rbp-14h]
  char v13; // [rsp+C8h] [rbp-10h]

  IopPreInitializeIoQosWorkItem(v8, IopSetHandleFlow);
  v10 = a1;
  v9 = a2;
  v13 = 0;
  v12 = a4;
  IopRunIoQosWorkItem(v8);
  return v11;
}

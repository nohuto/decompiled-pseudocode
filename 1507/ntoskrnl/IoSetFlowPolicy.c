/*
 * XREFs of IoSetFlowPolicy @ 0x1401F90FC
 * Callers:
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 * Callees:
 *     IopPreInitializeIoQosWorkItem @ 0x1401F92CC (IopPreInitializeIoQosWorkItem.c)
 *     IopRunIoQosWorkItem @ 0x1401F9438 (IopRunIoQosWorkItem.c)
 */

__int64 __fastcall IoSetFlowPolicy(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _BYTE v10[32]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+40h] [rbp-98h]
  __int64 v12; // [rsp+48h] [rbp-90h]
  __int64 v13; // [rsp+50h] [rbp-88h]
  __int64 v14; // [rsp+58h] [rbp-80h]
  __int64 v15; // [rsp+80h] [rbp-58h]
  unsigned int v16; // [rsp+C0h] [rbp-18h]

  IopPreInitializeIoQosWorkItem(v10, IopSetFlowPolicy);
  v13 = a5;
  v14 = a1;
  v11 = a3;
  v12 = a4;
  v15 = a2;
  IopRunIoQosWorkItem(v10);
  return v16;
}

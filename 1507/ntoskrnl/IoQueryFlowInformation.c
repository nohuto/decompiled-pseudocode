/*
 * XREFs of IoQueryFlowInformation @ 0x1401F9054
 * Callers:
 *     NtQueryInformationJobObject @ 0x1404139BC (NtQueryInformationJobObject.c)
 * Callees:
 *     IopPreInitializeIoQosWorkItem @ 0x1401F92CC (IopPreInitializeIoQosWorkItem.c)
 *     IopRunIoQosWorkItem @ 0x1401F9438 (IopRunIoQosWorkItem.c)
 */

__int64 __fastcall IoQueryFlowInformation(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _BYTE v9[56]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+58h] [rbp-80h]
  __int64 v11; // [rsp+88h] [rbp-50h]
  __int64 v12; // [rsp+90h] [rbp-48h]
  _KPROCESS *Process; // [rsp+98h] [rbp-40h]
  int v14; // [rsp+A0h] [rbp-38h]
  unsigned int v15; // [rsp+C0h] [rbp-18h]
  char PreviousMode; // [rsp+C9h] [rbp-Fh]

  IopPreInitializeIoQosWorkItem(v9, IopQueryFlowInformation);
  v10 = a1;
  v11 = a2;
  v14 = a3;
  v12 = a4;
  Process = KeGetCurrentThread()->ApcState.Process;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  IopRunIoQosWorkItem(v9);
  return v15;
}

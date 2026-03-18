/*
 * XREFs of IoQueryFlowHistory @ 0x1401F8FE0
 * Callers:
 *     PspQueryRateControlHistory @ 0x140506D2C (PspQueryRateControlHistory.c)
 * Callees:
 *     IopPreInitializeIoQosWorkItem @ 0x1401F92CC (IopPreInitializeIoQosWorkItem.c)
 *     IopRunIoQosWorkItem @ 0x1401F9438 (IopRunIoQosWorkItem.c)
 */

__int64 __fastcall IoQueryFlowHistory(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v9[56]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+58h] [rbp-80h]
  __int64 v11; // [rsp+68h] [rbp-70h]
  __int64 v12; // [rsp+70h] [rbp-68h]
  __int64 v13; // [rsp+78h] [rbp-60h]
  unsigned int v14; // [rsp+C0h] [rbp-18h]

  IopPreInitializeIoQosWorkItem(v9, IopQueryFlowHistory);
  v10 = a1;
  v11 = a2;
  v12 = a3;
  v13 = a4;
  IopRunIoQosWorkItem(v9);
  return v14;
}

/*
 * XREFs of IopPreInitializeIoQosWorkItem @ 0x1401F92CC
 * Callers:
 *     IoCreateFlow @ 0x1401F8F48 (IoCreateFlow.c)
 *     IoDeleteFlow @ 0x1401F8F84 (IoDeleteFlow.c)
 *     IoQueryFlowHistory @ 0x1401F8FE0 (IoQueryFlowHistory.c)
 *     IoQueryFlowInformation @ 0x1401F9054 (IoQueryFlowInformation.c)
 *     IoSetFlowPolicy @ 0x1401F90FC (IoSetFlowPolicy.c)
 *     IoSetHandleFlow @ 0x1401F9180 (IoSetHandleFlow.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 */

_QWORD *__fastcall IopPreInitializeIoQosWorkItem(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  memset(a1, 0, 0xB0uLL);
  a1[2] = a2;
  *a1 = 0LL;
  a1[3] = a1;
  *((_DWORD *)a1 + 35) = 0;
  result = a1 + 18;
  *((_WORD *)a1 + 68) = 1;
  *((_BYTE *)a1 + 138) = 6;
  a1[19] = a1 + 18;
  a1[18] = a1 + 18;
  return result;
}

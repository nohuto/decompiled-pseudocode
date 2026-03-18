/*
 * XREFs of Control_TransferData_Initialize @ 0x1C0008094
 * Callers:
 *     Control_WdfEvtIoCanceledOnQueue @ 0x1C0023150 (Control_WdfEvtIoCanceledOnQueue.c)
 *     Control_WdfEvtIoDefault @ 0x1C00232E0 (Control_WdfEvtIoDefault.c)
 * Callees:
 *     memset @ 0x1C0007F80 (memset.c)
 */

__int64 __fastcall Control_TransferData_Initialize(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax

  memset(a4, 0, 0x98uLL);
  a4[1] = a4;
  *a4 = a4;
  a4[3] = a2;
  a4[4] = a3;
  *((_DWORD *)a4 + 12) = 0;
  a4[7] = 0LL;
  a4[8] = 0LL;
  a4[9] = 0LL;
  a4[10] = 0LL;
  *((_BYTE *)a4 + 16) = 1;
  a4[5] = a1;
  *((_DWORD *)a4 + 22) = *(_DWORD *)(a3 + 36);
  *(_QWORD *)((char *)a4 + 92) = 0LL;
  *((_DWORD *)a4 + 25) = 0;
  a4[13] = 259LL;
  a4[15] = *(_QWORD *)(a1 + 168);
  *((_DWORD *)a4 + 32) = *(_DWORD *)(a1 + 184);
  a4[17] = *(_QWORD *)(a1 + 168);
  result = *(unsigned int *)(a1 + 184);
  *((_DWORD *)a4 + 36) = result;
  *(_DWORD *)(a3 + 36) = 0;
  return result;
}

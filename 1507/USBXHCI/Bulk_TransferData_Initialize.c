/*
 * XREFs of Bulk_TransferData_Initialize @ 0x1C002CB50
 * Callers:
 *     Bulk_RetrieveNextStage @ 0x1C002B4EC (Bulk_RetrieveNextStage.c)
 *     Bulk_WdfEvtIoCanceledOnQueue @ 0x1C002D370 (Bulk_WdfEvtIoCanceledOnQueue.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 */

__int64 __fastcall Bulk_TransferData_Initialize(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  _QWORD v8[5]; // [rsp+20h] [rbp-48h] BYREF

  memset(v8, 0, sizeof(v8));
  LOWORD(v8[0]) = 40;
  result = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
             WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
             a3,
             v8);
  if ( !*((_BYTE *)a2 + 16) )
  {
    memset(a2, 0, 0x100uLL);
    v7 = v8[1];
    a2[1] = a2;
    *a2 = a2;
    *((_BYTE *)a2 + 16) = 1;
    a2[3] = a3;
    a2[4] = v7;
    a2[5] = a1;
    a2[6] = 0LL;
    a2[7] = 259LL;
    a2[8] = 0LL;
    a2[9] = 0LL;
    a2[10] = 0LL;
    result = *(unsigned int *)(v7 + 36);
    *((_DWORD *)a2 + 22) = result;
    *(_QWORD *)((char *)a2 + 92) = 0LL;
    *(_QWORD *)((char *)a2 + 100) = 0LL;
    *((_DWORD *)a2 + 28) = 384;
    *((_WORD *)a2 + 58) = 0;
    *((_BYTE *)a2 + 118) = 0;
    *(_DWORD *)(v7 + 36) = 0;
  }
  return result;
}

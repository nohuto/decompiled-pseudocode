/*
 * XREFs of DwmSyncNotifyMinimizing @ 0x1C00B3930
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C00B40C4 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall DwmSyncNotifyMinimizing(PVOID Object, __int64 a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  _BYTE v7[688]; // [rsp+20h] [rbp-2C8h] BYREF

  v4 = -1073741823;
  if ( Object )
  {
    memset(&v7[2], 0, 0x2AEuLL);
    *(_DWORD *)v7 = 3407884;
    *(_WORD *)&v7[4] = 0x8000;
    *(_DWORD *)&v7[40] = 1073741825;
    *(_QWORD *)&v7[44] = a2;
    v5 = LpcRequestWaitReplyPortEx(Object, v7, v7);
    v4 = SyncLpcCheckNtStatus(v5, (struct _PORT_MESSAGE *)v7);
    ObfDereferenceObject(Object);
  }
  return v4;
}

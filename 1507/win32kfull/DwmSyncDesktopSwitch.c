/*
 * XREFs of DwmSyncDesktopSwitch @ 0x1C01005C8
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C0040424 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall DwmSyncDesktopSwitch(PVOID Object, __int64 a2, int a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  _BYTE v9[688]; // [rsp+20h] [rbp-2D8h] BYREF

  v6 = -1073741823;
  if ( Object )
  {
    memset(&v9[2], 0, 0x2AEuLL);
    *(_DWORD *)v9 = 3670032;
    *(_WORD *)&v9[4] = 0x8000;
    *(_DWORD *)&v9[40] = 1073741839;
    *(_QWORD *)&v9[48] = a2;
    *(_DWORD *)&v9[44] = a3;
    v7 = LpcRequestWaitReplyPortEx(Object, v9, v9);
    v6 = SyncLpcCheckNtStatus(v7, (struct _PORT_MESSAGE *)v9);
    ObfDereferenceObject(Object);
  }
  return v6;
}

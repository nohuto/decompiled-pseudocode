/*
 * XREFs of ACPIWakeCompleteRequestQueue @ 0x1C0041FD8
 * Callers:
 *     OSNotifyDeviceWakeCallBack @ 0x1C003E3A0 (OSNotifyDeviceWakeCallBack.c)
 *     ACPIWakeEmptyRequestQueue @ 0x1C0042228 (ACPIWakeEmptyRequestQueue.c)
 * Callees:
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x1C0037DC8 (ACPIDeviceIrpWaitWakeRequestComplete.c)
 */

void __fastcall ACPIWakeCompleteRequestQueue(_QWORD **a1, int a2)
{
  _QWORD *v2; // rbx
  __int64 v5; // rcx

  v2 = *a1;
  while ( v2 != a1 )
  {
    v5 = (__int64)v2;
    v2 = (_QWORD *)*v2;
    *(_DWORD *)(v5 + 256) = a2;
    ACPIDeviceIrpWaitWakeRequestComplete(v5);
  }
}

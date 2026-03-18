/*
 * XREFs of DpiMiracastConnectedStandbyDelayWork @ 0x1C0196E00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C00C6070 (DxgkMiracastStopAllMiracastSessions.c)
 */

void __fastcall DpiMiracastConnectedStandbyDelayWork(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rbx
  _QWORD v4[8]; // [rsp+20h] [rbp-50h] BYREF

  memset(v4, 0, sizeof(v4));
  v4[7] = 0LL;
  v4[0] = 0x4000000006LL;
  memset(&v4[1], 0, 36);
  v4[6] = 0x100000049LL;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v4);
  v2 = qword_1C00572A8;
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64(&qword_1C00572A8, v2 & 0xFFFFFFFFFFFFFFFCuLL, v2);
  }
  while ( v3 != v2 );
  DxgkMiracastStopAllMiracastSessions(0, 0LL, 0x88u);
  if ( (v3 & 2) != 0 )
  {
    IoFreeWorkItem((PIO_WORKITEM)(v3 & 0xFFFFFFFFFFFFFFFCuLL));
    qword_1C00572A8 = 0LL;
  }
}

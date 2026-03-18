/*
 * XREFs of DpiMiracastConnectedStandbyDelayWork @ 0x1C0168EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C0008568 (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C009AC30 (DxgkWriteDiagEntry.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C00BE440 (DxgkMiracastStopAllMiracastSessions.c)
 */

void __fastcall DpiMiracastConnectedStandbyDelayWork(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int64 v5; // rax
  signed __int64 v6; // rbx
  _DWORD v7[16]; // [rsp+30h] [rbp-58h] BYREF

  memset(v7, 0, sizeof(v7));
  DxgkDiagInitializeCodePointPacket(v7, 73, 1, 0, 0);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v7, v2, v3, v4);
  v5 = qword_1C0047068;
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange64(&qword_1C0047068, v5 & 0xFFFFFFFFFFFFFFFCuLL, v5);
  }
  while ( v6 != v5 );
  DxgkMiracastStopAllMiracastSessions(0, 0LL, 0x88u);
  if ( (v6 & 2) != 0 )
  {
    IoFreeWorkItem((PIO_WORKITEM)(v6 & 0xFFFFFFFFFFFFFFFCuLL));
    qword_1C0047068 = 0LL;
  }
}

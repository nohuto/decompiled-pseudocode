/*
 * XREFs of DpiMiracastConnectedStandbyDelayWork @ 0x1C016D660
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C000A24C (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C00B8F70 (DxgkMiracastStopAllMiracastSessions.c)
 */

void __fastcall DpiMiracastConnectedStandbyDelayWork(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rbx
  _DWORD v4[16]; // [rsp+30h] [rbp-58h] BYREF

  memset(v4, 0, sizeof(v4));
  DxgkDiagInitializeCodePointPacket(v4, 73, 1, 0, 0);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v4);
  v2 = qword_1C00470E8;
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64(&qword_1C00470E8, v2 & 0xFFFFFFFFFFFFFFFCuLL, v2);
  }
  while ( v3 != v2 );
  DxgkMiracastStopAllMiracastSessions(0, 0LL, 0x88u);
  if ( (v3 & 2) != 0 )
  {
    IoFreeWorkItem((PIO_WORKITEM)(v3 & 0xFFFFFFFFFFFFFFFCuLL));
    qword_1C00470E8 = 0LL;
  }
}

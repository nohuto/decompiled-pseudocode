/*
 * XREFs of Interrupter_D0ExitStopped @ 0x1C0003B2C
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0003EE0 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     WPP_RECORDER_SF_qqdddx @ 0x1C0005154 (WPP_RECORDER_SF_qqdddx.c)
 *     WPP_RECORDER_SF_qL @ 0x1C001CC74 (WPP_RECORDER_SF_qL.c)
 */

PDEVICE_OBJECT __fastcall Interrupter_D0ExitStopped(__int64 a1, int a2)
{
  PDEVICE_OBJECT result; // rax
  __int64 v4; // rdi
  __int64 v5; // r10
  int v6; // [rsp+20h] [rbp-48h]
  char v7; // [rsp+30h] [rbp-38h]

  result = WPP_GLOBAL_Control;
  v4 = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v7 = a2;
    LOBYTE(a2) = 5;
    result = (PDEVICE_OBJECT)WPP_RECORDER_SF_qL(
                               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
                               a2,
                               8,
                               27,
                               (__int64)&WPP_743231bee2de335fe7554effc40d8bb7_Traceguids,
                               a1,
                               v7);
  }
  if ( *(_DWORD *)(a1 + 24) )
  {
    do
    {
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v4);
      result = (PDEVICE_OBJECT)WPP_RECORDER_SF_qqdddx(
                                 *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
                                 *(_DWORD *)(v5 + 132),
                                 *(_QWORD *)(v5 + 152),
                                 28,
                                 v6,
                                 v5,
                                 *(_QWORD *)(v5 + 152),
                                 *(_DWORD *)(v5 + 128),
                                 *(_DWORD *)(v5 + 136),
                                 *(_DWORD *)(v5 + 132),
                                 *(_BYTE *)(*(_QWORD *)(v5 + 152) + 24LL) + 16 * (unsigned __int8)*(_DWORD *)(v5 + 132));
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *(_DWORD *)(a1 + 24) );
  }
  return result;
}

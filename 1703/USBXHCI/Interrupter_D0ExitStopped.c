/*
 * XREFs of Interrupter_D0ExitStopped @ 0x1C0003D70
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0003E90 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     WPP_RECORDER_SF_qqdddx @ 0x1C00059E8 (WPP_RECORDER_SF_qqdddx.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0018F9C (WPP_RECORDER_SF_qL.c)
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
                               (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids,
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
                                 *(_DWORD *)(v5 + 124),
                                 *(_QWORD *)(v5 + 144),
                                 28,
                                 v6,
                                 v5,
                                 *(_QWORD *)(v5 + 144),
                                 *(_DWORD *)(v5 + 120),
                                 *(_DWORD *)(v5 + 128),
                                 *(_DWORD *)(v5 + 124),
                                 *(_BYTE *)(*(_QWORD *)(v5 + 144) + 24LL) + 16 * (unsigned __int8)*(_DWORD *)(v5 + 124));
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *(_DWORD *)(a1 + 24) );
  }
  return result;
}

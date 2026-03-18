/*
 * XREFs of Interrupter_Create @ 0x1C0047A1C
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0047200 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     Interrupter_CreateInterrupter @ 0x1C0047A80 (Interrupter_CreateInterrupter.c)
 */

__int64 __fastcall Interrupter_Create(int a1, __int64 a2, _QWORD *a3)
{
  int Interrupter; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v9; // [rsp+28h] [rbp-30h]
  _QWORD v10[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  Interrupter = Interrupter_CreateInterrupter(a1, a2, 0, 0, 0LL, (__int64)v10, (__int64)&v11);
  v6 = Interrupter;
  if ( Interrupter < 0 )
  {
    LODWORD(v9) = Interrupter;
    WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 64), 2u, 8u, 0xAu, (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids, v9);
  }
  else
  {
    v7 = v11;
    *(_QWORD *)(v11 + 40) = v10[0];
    *a3 = v7;
  }
  return v6;
}

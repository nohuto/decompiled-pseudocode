/*
 * XREFs of Interrupter_CreateInterrupter @ 0x1C004A7FC
 * Callers:
 *     Interrupter_PrepareHardware @ 0x1C004A600 (Interrupter_PrepareHardware.c)
 *     Interrupter_Create @ 0x1C004A798 (Interrupter_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0007070 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010200 (memset.c)
 *     Counter_CreateInterrupterInstance @ 0x1C004B6C0 (Counter_CreateInterrupterInstance.c)
 */

__int64 __fastcall Interrupter_CreateInterrupter(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        _QWORD *a7)
{
  __int64 v11; // r15
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  _QWORD *v17; // rbx
  unsigned __int16 v19; // r9
  __int64 v20; // [rsp+30h] [rbp-A9h]
  _QWORD v21[8]; // [rsp+48h] [rbp-91h] BYREF
  _QWORD v22[14]; // [rsp+88h] [rbp-51h] BYREF
  _QWORD *v23; // [rsp+140h] [rbp+67h] BYREF

  memset(v22, 0, 0x68uLL);
  v11 = a5;
  LODWORD(v22[2]) = 2;
  v22[3] = Interrupter_WdfEvtInterruptIsr;
  HIDWORD(v22[11]) = 2;
  v22[4] = Interrupter_WdfEvtInterruptDpc;
  v22[8] = a4;
  v22[5] = Interrupter_WdfEvtInterruptEnable;
  LODWORD(v22[0]) = 104;
  v22[6] = Interrupter_WdfEvtInterruptDisable;
  v22[9] = a5;
  memset(v21, 0, 0x38uLL);
  LODWORD(v21[0]) = 56;
  v21[3] = 0x100000001LL;
  v21[6] = off_1C00432A0;
  v21[1] = Interrupter_WdfEvtCleanupCallback;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015
                                                                                               + 1128))(
          WdfDriverGlobals,
          a1,
          v22,
          v21,
          &a5);
  v13 = v12;
  if ( v12 < 0 )
  {
    v19 = 11;
    goto LABEL_10;
  }
  WPP_RECORDER_SF_qd(
    *(_QWORD *)(a2 + 64),
    4u,
    8u,
    0xCu,
    (__int64)&WPP_743231bee2de335fe7554effc40d8bb7_Traceguids,
    a5,
    a3);
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          a5,
          off_1C00432A0);
  v15 = a5;
  v16 = v14;
  *(_DWORD *)(v14 + 32) = a3;
  *(_QWORD *)v14 = v15;
  *(_QWORD *)(v14 + 8) = a2;
  if ( v11 )
    *(_QWORD *)(v14 + 40) = *(_QWORD *)(v11 + 12);
  else
    *(_QWORD *)(v14 + 40) = 0LL;
  *(_WORD *)(v14 + 36) = 0;
  KeInitializeSpinLock((PKSPIN_LOCK)(v14 + 216));
  Counter_CreateInterrupterInstance(v16);
  *a6 = v16;
  v17 = a7;
  if ( a7 )
  {
    memset(v21, 0, 0x38uLL);
    v21[3] = 0x100000001LL;
    v21[6] = off_1C0043160;
    LODWORD(v21[0]) = 56;
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD **))(WdfFunctions_01015 + 1624))(
            WdfDriverGlobals,
            a5,
            v21,
            &v23);
    v13 = v12;
    if ( v12 >= 0 )
    {
      *v23 = a1;
      v23[1] = a2;
      *v17 = v23;
      return v13;
    }
    v19 = 13;
LABEL_10:
    LODWORD(v20) = v12;
    WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 64), 2u, 8u, v19, (__int64)&WPP_743231bee2de335fe7554effc40d8bb7_Traceguids, v20);
  }
  return v13;
}

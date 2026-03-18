/*
 * XREFs of Interrupter_CreateInterrupter @ 0x1C004C88C
 * Callers:
 *     Interrupter_PrepareHardware @ 0x1C004C728 (Interrupter_PrepareHardware.c)
 *     Interrupter_Create @ 0x1C004C820 (Interrupter_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C00056E0 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 *     Counter_CreateInterrupterInstance @ 0x1C004E3D0 (Counter_CreateInterrupterInstance.c)
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
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rbx
  _QWORD *v14; // rbx
  unsigned __int16 v16; // r9
  __int64 v17; // [rsp+28h] [rbp-A9h]
  _QWORD v18[8]; // [rsp+40h] [rbp-91h] BYREF
  _QWORD v19[14]; // [rsp+80h] [rbp-51h] BYREF
  _QWORD *v20; // [rsp+138h] [rbp+67h] BYREF

  memset(v19, 0, 0x68uLL);
  v19[8] = a4;
  v19[3] = Interrupter_WdfEvtInterruptIsr;
  LODWORD(v19[0]) = 104;
  v19[4] = Interrupter_WdfEvtInterruptDpc;
  LODWORD(v19[2]) = 2;
  v19[5] = Interrupter_WdfEvtInterruptEnable;
  HIDWORD(v19[11]) = 2;
  v19[6] = Interrupter_WdfEvtInterruptDisable;
  v19[9] = a5;
  memset(v18, 0, 0x38uLL);
  LODWORD(v18[0]) = 56;
  v18[3] = 0x100000001LL;
  v18[6] = off_1C00452A0;
  v18[1] = Interrupter_WdfEvtCleanupCallback;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015
                                                                                               + 1128))(
          WdfDriverGlobals,
          a1,
          v19,
          v18,
          &a5);
  v12 = v11;
  if ( v11 < 0 )
  {
    v16 = 11;
    goto LABEL_8;
  }
  WPP_RECORDER_SF_qd(
    *(_QWORD *)(a2 + 64),
    4u,
    8u,
    0xCu,
    (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids,
    a5,
    a3);
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          a5,
          off_1C00452A0);
  *(_QWORD *)v13 = a5;
  *(_QWORD *)(v13 + 8) = a2;
  *(_DWORD *)(v13 + 32) = a3;
  KeInitializeSpinLock((PKSPIN_LOCK)(v13 + 208));
  Counter_CreateInterrupterInstance(v13);
  *a6 = v13;
  v14 = a7;
  if ( a7 )
  {
    memset(v18, 0, 0x38uLL);
    v18[3] = 0x100000001LL;
    v18[6] = off_1C0045160;
    LODWORD(v18[0]) = 56;
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD **))(WdfFunctions_01015 + 1624))(
            WdfDriverGlobals,
            a5,
            v18,
            &v20);
    v12 = v11;
    if ( v11 >= 0 )
    {
      *v20 = a1;
      v20[1] = a2;
      *v14 = v20;
      return v12;
    }
    v16 = 13;
LABEL_8:
    LODWORD(v17) = v11;
    WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 64), 2u, 8u, v16, (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids, v17);
  }
  return v12;
}

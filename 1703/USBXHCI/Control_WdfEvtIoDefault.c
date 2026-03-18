/*
 * XREFs of Control_WdfEvtIoDefault @ 0x1C000EB00
 * Callers:
 *     <none>
 * Callees:
 *     Control_MapTransfer @ 0x1C000358C (Control_MapTransfer.c)
 *     Control_Transfer_CompleteCancelable @ 0x1C0003794 (Control_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0008D60 (WPP_RECORDER_SF_DDD.c)
 *     Control_TransferData_Initialize @ 0x1C000ED1C (Control_TransferData_Initialize.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 *     WPP_RECORDER_SF_DDqDq @ 0x1C00272D8 (WPP_RECORDER_SF_DDqDq.c)
 */

void __fastcall Control_WdfEvtIoDefault(__int64 a1, __int64 a2)
{
  char v4; // bp
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // r14
  int v8; // edx
  int v9; // r8d
  KIRQL v10; // al
  PWDF_DRIVER_GLOBALS v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // [rsp+28h] [rbp-70h]
  int v17; // [rsp+30h] [rbp-68h]
  __int64 v18; // [rsp+38h] [rbp-60h]
  int v19; // [rsp+40h] [rbp-58h]
  _QWORD v20[5]; // [rsp+50h] [rbp-48h] BYREF

  v4 = 0;
  memset(v20, 0, sizeof(v20));
  LOWORD(v20[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v20);
  v5 = v20[1];
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00452F0);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C0045070);
  v19 = *(_DWORD *)(v5 + 36);
  HIDWORD(v18) = HIDWORD(a2);
  WPP_RECORDER_SF_DDqDq(*(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL), v8, v9, *(_DWORD *)(*(_QWORD *)(v6 + 56) + 144LL));
  Control_TransferData_Initialize(v6, a2, v5, v7);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 88));
  v11 = WdfDriverGlobals;
  *(_BYTE *)(v6 + 96) = v10;
  v12 = WdfFunctions_01015;
  *(_QWORD *)(v6 + 296) = v7;
  *(_DWORD *)(v7 + 112) = 0;
  *(_DWORD *)(v7 + 116) = 0;
  v13 = *(_QWORD *)(v7 + 24);
  *(_DWORD *)(v7 + 96) = 1;
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)()))(v12 + 3144))(
          v11,
          v13,
          Control_WdfEvtRequestCancel);
  if ( v14 >= 0 )
  {
    if ( *(_DWORD *)(v6 + 100) == 2 )
    {
      *(_DWORD *)(v6 + 100) = 3;
      v4 = 1;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 88), *(_BYTE *)(v6 + 96));
    if ( v4 )
      Control_MapTransfer(v6);
  }
  else
  {
    v15 = *(_QWORD *)(v6 + 56);
    LODWORD(v18) = v14;
    v17 = *(_DWORD *)(v15 + 144);
    v16 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 135LL);
    WPP_RECORDER_SF_DDD(
      *(_QWORD *)(v15 + 80),
      3u,
      0xDu,
      0x26u,
      (__int64)&WPP_b8bb340e430930fc90b81b2b4d1cc689_Traceguids,
      v16,
      v17,
      v18,
      v19,
      v7);
    *(_DWORD *)(v7 + 96) = 3;
    Control_Transfer_CompleteCancelable((_QWORD *)v6);
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 88), *(_BYTE *)(v6 + 96));
  }
}

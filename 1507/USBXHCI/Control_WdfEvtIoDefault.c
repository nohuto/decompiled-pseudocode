/*
 * XREFs of Control_WdfEvtIoDefault @ 0x1C00232E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DDD @ 0x1C0006A1C (WPP_RECORDER_SF_DDD.c)
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     Control_TransferData_Initialize @ 0x1C0008094 (Control_TransferData_Initialize.c)
 *     Control_MapTransfer @ 0x1C00214A8 (Control_MapTransfer.c)
 *     Control_Transfer_CompleteCancelable @ 0x1C0022180 (Control_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDqDq @ 0x1C0023B50 (WPP_RECORDER_SF_DDqDq.c)
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
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // [rsp+28h] [rbp-70h]
  int v15; // [rsp+30h] [rbp-68h]
  __int64 v16; // [rsp+38h] [rbp-60h]
  int v17; // [rsp+40h] [rbp-58h]
  _QWORD v18[5]; // [rsp+50h] [rbp-48h] BYREF

  v4 = 0;
  memset(v18, 0, sizeof(v18));
  LOWORD(v18[0]) = 40;
  (*(void (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    a2,
    v18);
  v5 = v18[1];
  v6 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a1,
         off_1C0040310);
  v7 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a2,
         off_1C0040068);
  v17 = *(_DWORD *)(v5 + 36);
  HIDWORD(v16) = HIDWORD(a2);
  WPP_RECORDER_SF_DDqDq(*(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL), v8, v9, *(_DWORD *)(*(_QWORD *)(v6 + 56) + 144LL));
  Control_TransferData_Initialize(v6, a2, v5, (_QWORD *)v7);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 88));
  *(_QWORD *)(v6 + 296) = v7;
  *(_BYTE *)(v6 + 96) = v10;
  *(_DWORD *)(v7 + 112) = 0;
  *(_DWORD *)(v7 + 116) = 0;
  v11 = *(_QWORD *)(v7 + 24);
  *(_DWORD *)(v7 + 96) = 1;
  v12 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, __int64 (__fastcall *)()))(WdfFunctions_01015 + 3144))(
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
          v11,
          Control_WdfEvtRequestCancel);
  if ( v12 >= 0 )
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
    v13 = *(_QWORD *)(v6 + 56);
    LODWORD(v16) = v12;
    v15 = *(_DWORD *)(v13 + 144);
    v14 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 135LL);
    WPP_RECORDER_SF_DDD(
      *(_QWORD *)(v13 + 80),
      3u,
      0xDu,
      0x26u,
      (__int64)&WPP_ee7759932d876114f80ff23edcd4b288_Traceguids,
      v14,
      v15,
      v16,
      v17,
      v7);
    *(_DWORD *)(v7 + 96) = 3;
    Control_Transfer_CompleteCancelable((_QWORD *)v6);
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 88), *(_BYTE *)(v6 + 96));
  }
}

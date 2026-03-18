/*
 * XREFs of ?WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAU_KEVENT@@@Z @ 0x1C011EBE8
 * Callers:
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00A4450 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 */

NTSTATUS __fastcall ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent(
        DXGADAPTER **this,
        unsigned int a2,
        char a3,
        ULONG a4,
        PVOID *Object)
{
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rax
  KWAIT_REASON v15; // r9d
  __int64 v17; // rax
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp-1E8h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+50h] [rbp-1D8h] BYREF

  v8 = a2;
  if ( DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v13 + 24) = 23906LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( a4 - 1 > 8 )
  {
    v17 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    return -1073741811;
  }
  else
  {
    v14 = (__int64)this[14] + 800;
    Timeout.QuadPart = -800000LL;
    *Object = (PVOID)(v14 + 1008 * v8);
    if ( a3 )
      v15 = UserRequest;
    else
      v15 = Executive;
    return KeWaitForMultipleObjects(a4, Object, WaitAny, v15, 0, 0, &Timeout, &WaitBlockArray);
  }
}

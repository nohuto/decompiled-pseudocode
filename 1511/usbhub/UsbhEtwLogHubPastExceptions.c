/*
 * XREFs of UsbhEtwLogHubPastExceptions @ 0x1C00096A0
 * Callers:
 *     UsbhEtwRundown @ 0x1C00092A8 (UsbhEtwRundown.c)
 * Callees:
 *     UsbhEtwGetHubInfo @ 0x1C000BDE0 (UsbhEtwGetHubInfo.c)
 *     UsbhEtwWrite @ 0x1C000F240 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     UsbhGetExceptionDispatch @ 0x1C004F2F8 (UsbhGetExceptionDispatch.c)
 */

void __fastcall UsbhEtwLogHubPastExceptions(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *i; // rsi
  __int64 ExceptionDispatch; // rax
  __int64 v5; // rdx
  _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp-70h] BYREF
  int v7; // [rsp+C8h] [rbp-58h]
  __int16 v8; // [rsp+CCh] [rbp-54h]
  __int16 v9; // [rsp+CEh] [rbp-52h]
  __int16 v10; // [rsp+D0h] [rbp-50h]
  __int16 v11; // [rsp+D2h] [rbp-4Eh]
  _BYTE v12[40]; // [rsp+D8h] [rbp-48h] BYREF

  v7 = *(_DWORD *)(a1 + 5192);
  v8 = *(_WORD *)(a1 + 5196);
  v9 = *(_DWORD *)(a1 + 5200);
  v10 = *(_WORD *)(a1 + 5228);
  v11 = *(_WORD *)(a1 + 5230);
  UsbhEtwGetHubInfo(a1, v12);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 4872), &LockHandle);
  for ( i = *(_QWORD **)(a1 + 4856); i != (_QWORD *)(a1 + 4856); i = (_QWORD *)*i )
  {
    ExceptionDispatch = UsbhGetExceptionDispatch(*(_QWORD *)(a1 + 1200), *((unsigned int *)i - 8));
    v5 = -1LL;
    do
      ++v5;
    while ( *(_BYTE *)(*(_QWORD *)(ExceptionDispatch + 8) + v5) );
    UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_PAST_EXCEPTION, 0LL);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}

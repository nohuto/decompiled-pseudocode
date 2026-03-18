/*
 * XREFs of UsbhQueueHardReset @ 0x1C0046BD0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhEtwLogHubIrpEvent @ 0x1C000F030 (UsbhEtwLogHubIrpEvent.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 */

__int64 __fastcall UsbhQueueHardReset(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE *v10; // rax
  _DWORD *v11; // rax

  v6 = 3;
  FdoExt(a1, a2, a3, a4);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_HARD_RESET_QUEUE);
  if ( a2 )
  {
    if ( *(_DWORD *)(a2 + 16) == 132 )
    {
      v10 = *(_BYTE **)(a2 + 40);
      if ( v10 )
      {
        if ( !*v10 )
          v6 = 9;
      }
    }
  }
  v11 = FdoExt(a1, v7, v8, v9);
  return UsbhDispatch_HardResetEvent(a1, (__int64)(v11 + 566), v6);
}

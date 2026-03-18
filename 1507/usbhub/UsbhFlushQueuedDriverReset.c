/*
 * XREFs of UsbhFlushQueuedDriverReset @ 0x1C0043224
 * Callers:
 *     Usbh_BusPause_PdoEvent @ 0x1C004466C (Usbh_BusPause_PdoEvent.c)
 * Callees:
 *     UsbhFreePortChangeQueueObject @ 0x1C000B48C (UsbhFreePortChangeQueueObject.c)
 *     Log @ 0x1C0014B50 (Log.c)
 */

void __fastcall UsbhFlushQueuedDriverReset(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v5; // al
  __int64 v6; // r11
  KIRQL v7; // bp
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v11; // r10
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // [rsp+20h] [rbp-18h]

  v2 = (KSPIN_LOCK *)(a2 + 440);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v6 = *(_QWORD *)(a2 + 464);
  v7 = v5;
  *(_DWORD *)(a2 + 448) = 1;
  while ( v6 != a2 + 456 )
  {
    Log(*(_QWORD *)(a2 + 16), 4, 1717858865, v6 - 16, *(unsigned __int16 *)(a2 + 4));
    v10 = *(_QWORD *)(a2 + 16);
    v14 = *(unsigned __int16 *)(a2 + 4);
    if ( *(_DWORD *)(v9 + 8) == 0x20000 )
    {
      Log(v10, 4, 1717858866, v8, v14);
      v12 = *(_QWORD *)(v11 + 16);
      v13 = *(_QWORD **)(v11 + 24);
      if ( *(_QWORD *)(v12 + 8) != v11 + 16 || *v13 != v11 + 16 )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      UsbhFreePortChangeQueueObject(a1, a2, v11, 1);
      break;
    }
    Log(v10, 4, 1717858867, v8, v14);
  }
  *(_DWORD *)(a2 + 448) = 0;
  KeReleaseSpinLock(v2, v7);
}

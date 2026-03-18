/*
 * XREFs of Etw_DeviceListRundown @ 0x1C00338D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0011000 (memset.c)
 *     Etw_DeviceRundown @ 0x1C0033A84 (Etw_DeviceRundown.c)
 */

void __fastcall Etw_DeviceListRundown(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rbp
  KIRQL v4; // al
  __int64 v5; // rsi
  KIRQL v6; // al
  unsigned int v7; // ecx
  KIRQL v8; // r15
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // r14
  __int64 v12; // r13
  _QWORD *v13; // rdi
  _QWORD *v14; // r12
  unsigned int v15; // ebp
  _QWORD *v16; // r14
  _QWORD *v17; // rdi
  KSPIN_LOCK *v19; // [rsp+78h] [rbp+10h]

  v2 = (KSPIN_LOCK *)(a2 + 32);
  v19 = (KSPIN_LOCK *)(a2 + 32);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 32));
  v5 = *(unsigned int *)(a2 + 56);
  KeReleaseSpinLock(v2, v4);
  if ( (_DWORD)v5 )
  {
    while ( 1 )
    {
      PoolWithTag = ExAllocatePoolWithTag(*(POOL_TYPE *)&WPP_MAIN_CB.DeviceQueue.Type, 8 * v5, 0x49434858u);
      v10 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      memset(PoolWithTag, 0, 8 * v5);
      v6 = KeAcquireSpinLockRaiseToDpc(v2);
      v7 = *(_DWORD *)(a2 + 56);
      v8 = v6;
      if ( (unsigned int)v5 >= v7 )
      {
        v11 = (_QWORD *)(a2 + 40);
        v12 = 0LL;
        v13 = (_QWORD *)(*v11 - 72LL);
        v14 = (_QWORD *)*v11;
        if ( v11 != (_QWORD *)*v11 )
        {
          do
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01015 + 1640))(
              WdfDriverGlobals,
              *v13,
              Etw_DeviceListRundown,
              358LL,
              "drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
            v10[v12] = v13;
            v12 = (unsigned int)(v12 + 1);
            v13 = (_QWORD *)(*v14 - 72LL);
            v14 = (_QWORD *)*v14;
          }
          while ( v11 != v14 );
          v2 = v19;
        }
        KeReleaseSpinLock(v2, v8);
        v15 = 0;
        if ( (_DWORD)v5 )
        {
          v16 = v10;
          do
          {
            v17 = (_QWORD *)*v16;
            if ( !*v16 )
              break;
            Etw_DeviceRundown(a1, *v16);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01015 + 1648))(
              WdfDriverGlobals,
              *v17,
              Etw_DeviceListRundown,
              391LL,
              "drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
            ++v15;
            ++v16;
          }
          while ( v15 < (unsigned int)v5 );
        }
        if ( v10 )
          ExFreePoolWithTag(v10, 0x49434858u);
        return;
      }
      v5 = v7;
      KeReleaseSpinLock(v2, v6);
      ExFreePoolWithTag(v10, 0x49434858u);
    }
  }
}

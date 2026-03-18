/*
 * XREFs of UsbhFdoUnblockAllPendedPdoD0Irps @ 0x1C0002DFC
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C00029A0 (UsbhFdoD0Worker_Action.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C0044AE4 (Usbh_BusRemove_PdoEvent.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C0045B28 (UsbhFdoPower_PowerFailureEntry.c)
 * Callees:
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C0004B60 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhQueueWorkItemEx @ 0x1C0024A80 (UsbhQueueWorkItemEx.c)
 */

__int64 *__fastcall UsbhFdoUnblockAllPendedPdoD0Irps(__int64 a1)
{
  __int64 v2; // rbx
  KSPIN_LOCK *v3; // rsi
  KIRQL v4; // al
  KIRQL v5; // r8
  __int64 **v6; // rbx
  __int64 *result; // rax
  __int64 *v8; // rcx
  __int64 v9; // rdx
  __int64 **v10; // rax
  __int64 *v11; // rcx
  __int64 *v12; // rbx
  __int64 v13; // [rsp+30h] [rbp-20h]
  __int64 *v14; // [rsp+40h] [rbp-10h] BYREF
  __int64 **v15; // [rsp+48h] [rbp-8h]

  v2 = FdoExt(a1);
  v15 = &v14;
  v14 = (__int64 *)&v14;
  Log(a1, 16, 1969308720, 0, 0LL);
  v3 = (KSPIN_LOCK *)(v2 + 4176);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 4176));
  *(_BYTE *)(v2 + 4184) = 0;
  v5 = v4;
  v6 = (__int64 **)(v2 + 4192);
  while ( *v6 != (__int64 *)v6 )
  {
    v8 = *v6;
    v9 = **v6;
    if ( (__int64 **)(*v6)[1] != v6 || *(__int64 **)(v9 + 8) != v8 )
      __fastfail(3u);
    *v6 = (__int64 *)v9;
    *(_QWORD *)(v9 + 8) = v6;
    v10 = v15;
    *v8 = (__int64)&v14;
    v8[1] = (__int64)v10;
    if ( *v10 != (__int64 *)&v14 )
      __fastfail(3u);
    *v10 = v8;
    v15 = (__int64 **)v8;
  }
  KeReleaseSpinLock(v3, v5);
  while ( 1 )
  {
    result = v14;
    if ( v14 == (__int64 *)&v14 )
      break;
    v11 = (__int64 *)*v14;
    if ( (__int64 **)v14[1] != &v14 || (__int64 *)v11[1] != v14 )
      __fastfail(3u);
    v13 = 0LL;
    v14 = v11;
    v12 = result - 12;
    v11[1] = (__int64)&v14;
    result[1] = (__int64)result;
    *result = (__int64)result;
    if ( (UsbhQueueWorkItemEx(
            a1,
            0,
            (unsigned int)UsbhPdoUnblockPendedD0IrpWI,
            (int)result - 96,
            *(_DWORD *)(*(result - 3) + 148),
            1230450788,
            v13) & 0xC0000000) == 0xC0000000 )
      UsbhPdoUnblockPendedD0IrpWI(a1, *(unsigned int *)(v12[9] + 148), v12);
  }
  return result;
}

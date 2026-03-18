/*
 * XREFs of UsbhLogSignalResumeEvent @ 0x1C001F834
 * Callers:
 *     Usbh_PCE_BusReset_Action @ 0x1C0003E90 (Usbh_PCE_BusReset_Action.c)
 *     UsbhSignalResumeEvent @ 0x1C001F7BC (UsbhSignalResumeEvent.c)
 *     UsbhiSignalResumeEvent @ 0x1C001FC60 (UsbhiSignalResumeEvent.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhLogSignalResumeEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v7; // rax
  KSPIN_LOCK *v8; // rbp
  KIRQL v9; // al
  __int64 v10; // r8
  KIRQL v11; // r14
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx

  v4 = 0;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  v8 = (KSPIN_LOCK *)(v7 + 4944);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 4944));
  v10 = *(unsigned __int16 *)(a2 + 4);
  v11 = v9;
  v12 = *(int *)(a2 + 696);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 64);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
      *(_DWORD *)v14 = 1397909875;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 16) = v12;
      *(_QWORD *)(v14 + 24) = v10;
    }
  }
  if ( *(_DWORD *)(a2 + 696) == 3 )
  {
    Log(a1, 16, 1936282232, 3LL, *(unsigned __int16 *)(a2 + 4));
    *(_DWORD *)(a2 + 696) = 0;
    KeSetEvent((PRKEVENT)(a2 + 712), 0, 0);
    v4 = 1;
  }
  KeReleaseSpinLock(v8, v11);
  return v4;
}

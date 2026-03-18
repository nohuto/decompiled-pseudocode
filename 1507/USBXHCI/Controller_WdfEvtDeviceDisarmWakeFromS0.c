/*
 * XREFs of Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0016490
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0005E40 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Controller_WdfEvtDeviceDisarmWakeFromS0(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  bool v4; // zf
  unsigned int i; // ebp
  __int64 v6; // rdi
  KIRQL v7; // al
  _DWORD *v8; // rbx
  signed __int32 v9[8]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                     a1,
                     off_1C0040270)
                 + 8);
  v3 = *(_QWORD *)(v2 + 120);
  WPP_RECORDER_SF_q(*(_QWORD *)(v2 + 64), 4u, 3u, 0x58u, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids, a1);
  v4 = (*(_QWORD *)(v2 + 232) & 0x20000000LL) == 0;
  *(_BYTE *)(v2 + 348) = 0;
  if ( v4 )
  {
    for ( i = 0; i < *(_DWORD *)(v3 + 16); ++i )
    {
      v6 = 56LL * i;
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + *(_QWORD *)(v3 + 48) + 16LL));
      v8 = (_DWORD *)(*(_QWORD *)(v3 + 40) + 16LL * i);
      *v8 &= 0xC200u;
      _InterlockedOr(v9, 0);
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + *(_QWORD *)(v3 + 48) + 16LL), v7);
    }
  }
}

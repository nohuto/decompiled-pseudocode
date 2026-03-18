/*
 * XREFs of Interrupter_D0ExitPreInterruptsDisabled @ 0x1C00021DC
 * Callers:
 *     Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C0002100 (Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Interrupter_D0ExitPreInterruptsDisabled(__int64 a1)
{
  __int64 i; // rdi
  __int64 v3; // rbp
  KIRQL v4; // al
  int v5; // edx
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 24); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * i);
    if ( *(_QWORD *)(v3 + 208) )
    {
      v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 216));
      *(_DWORD *)(v3 + 104) |= 2u;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 216), v4);
      Timeout.QuadPart = -600000000LL;
      while ( KeWaitForSingleObject((PVOID)(v3 + 184), Executive, 0, 0, &Timeout) == 258 )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
          v5,
          8,
          26,
          (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids,
          i);
      }
    }
  }
  return 0LL;
}

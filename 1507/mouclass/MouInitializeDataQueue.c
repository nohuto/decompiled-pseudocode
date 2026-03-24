/*
 * XREFs of MouInitializeDataQueue @ 0x1C0002420
 * Callers:
 *     MouseClassFlush @ 0x1C0004440 (MouseClassFlush.c)
 *     MouCreateClassObject @ 0x1C000B850 (MouCreateClassObject.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004F28 (WPP_RECORDER_SF_.c)
 */

void __fastcall MouInitializeDataQueue(__int64 a1, __int64 a2)
{
  KIRQL v3; // al
  __int64 v4; // rdx
  __int64 v5; // rdx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 3LL);
  }
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
  v4 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 112) = v4;
  *(_QWORD *)(a1 + 120) = v4;
  *(_DWORD *)(a1 + 84) = 0;
  *(_BYTE *)(a1 + 66) = 1;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 144), v3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v5, 3LL);
  }
}

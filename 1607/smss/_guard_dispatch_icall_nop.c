/*
 * XREFs of _guard_dispatch_icall_nop @ 0x14000CF40
 * Callers:
 *     _TlgEnableCallback @ 0x140001010 (_TlgEnableCallback.c)
 *     SmpApiCallback @ 0x1400039F0 (SmpApiCallback.c)
 *     CreateFileInternal @ 0x140014BEC (CreateFileInternal.c)
 *     CloseHandle @ 0x1400151C4 (CloseHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}

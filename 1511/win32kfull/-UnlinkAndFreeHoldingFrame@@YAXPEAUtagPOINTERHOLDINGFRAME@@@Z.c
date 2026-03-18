/*
 * XREFs of ?UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C0230CD4
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C009EDC8 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     FreePointerDevice @ 0x1C01CC4B0 (FreePointerDevice.c)
 *     HoldRimCompleteFrame @ 0x1C0230E2C (HoldRimCompleteFrame.c)
 * Callees:
 *     HandlePTPTelemetry @ 0x1C014F8EC (HandlePTPTelemetry.c)
 *     ?CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F1074 (-CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?AbandonHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C022E398 (-AbandonHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 */

void __fastcall UnlinkAndFreeHoldingFrame(struct tagPOINTERHOLDINGFRAME *a1)
{
  __int64 v2; // rcx
  struct tagPOINTERHOLDINGFRAME **v3; // rax
  struct tagTPSTATE *v4; // rcx

  if ( *((_DWORD *)a1 + 8) )
    AbandonHoldingFrame(a1);
  v2 = *(_QWORD *)a1;
  v3 = (struct tagPOINTERHOLDINGFRAME **)*((_QWORD *)a1 + 1);
  if ( *(struct tagPOINTERHOLDINGFRAME **)(*(_QWORD *)a1 + 8LL) != a1 || *v3 != a1 )
    __fastfail(3u);
  *v3 = (struct tagPOINTERHOLDINGFRAME *)v2;
  *(_QWORD *)(v2 + 8) = v3;
  v4 = (struct tagTPSTATE *)*((_QWORD *)a1 + 11);
  if ( v4 )
  {
    CleanupGestureCache(v4, 1);
    HandlePTPTelemetry();
    Win32FreePool(*((_QWORD *)a1 + 11));
  }
  Win32FreePool(a1);
}

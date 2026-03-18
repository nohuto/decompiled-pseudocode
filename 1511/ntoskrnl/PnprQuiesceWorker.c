/*
 * XREFs of PnprQuiesceWorker @ 0x1403B0C00
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForMultipleObjects @ 0x1400810B0 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PnprCompleteWake @ 0x1401C0B3C (PnprCompleteWake.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PnprQuiesceDevices @ 0x1403B02B8 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x1403B0D18 (PnprWakeDevices.c)
 *     PnprLockPagesForReplace @ 0x1406108F4 (PnprLockPagesForReplace.c)
 */

void __fastcall PnprQuiesceWorker(PVOID P)
{
  int v2; // eax
  SIZE_T v3; // rcx
  int v4; // ebx
  PVOID v5[2]; // [rsp+40h] [rbp-68h] BYREF
  char v6[64]; // [rsp+50h] [rbp-58h] BYREF

  v5[0] = (PVOID)(PnprContext + 10520);
  v5[1] = (PVOID)(PnprContext + 10568);
  if ( KeWaitForMultipleObjects(2u, v5, WaitAny, Executive, 0, 0, 0LL, 0LL) != 1 )
  {
    PnprLockPagesForReplace();
    v2 = PnprQuiesceDevices(v6);
    v3 = PnprContext;
    v4 = v2;
    *(_DWORD *)(PnprContext + 10616) = v2;
    KeSetEvent((PRKEVENT)(v3 + 10544), 0, 0);
    if ( v4 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(PnprContext + 10568), Executive, 0, 0, 0LL);
      PnprWakeDevices(v6);
    }
    PnprCompleteWake();
  }
  KeSetEvent((PRKEVENT)(PnprContext + 10592), 0, 0);
  ExFreePoolWithTag(P, 0x51706E50u);
}

/*
 * XREFs of PnprQuiesceWorker @ 0x1404012DC
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PnprCompleteWake @ 0x1401FC730 (PnprCompleteWake.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PnprQuiesceDevices @ 0x1404008A4 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x1404013F4 (PnprWakeDevices.c)
 *     PnprLockPagesForReplace @ 0x140690668 (PnprLockPagesForReplace.c)
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

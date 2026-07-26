/*
 * XREFs of ?ndisTempRefTimerDpc@@YAXPEAX000@Z @ 0x1C006A040
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001FFD8 (ndisScheduleWorkItemInternal.c)
 */

void __fastcall ndisTempRefTimerDpc(
        PVOID SystemSpecific1,
        _QWORD *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  __int64 v4; // rbx

  v4 = FunctionContext[565];
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v4);
  if ( *(_BYTE *)(v4 + 272) == 1 )
  {
    ndisDereferenceMiniport((__int64)FunctionContext, 2u);
  }
  else
  {
    *(_BYTE *)(v4 + 272) = 1;
    ndisScheduleWorkItemInternal(v4 + 192);
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v4);
}

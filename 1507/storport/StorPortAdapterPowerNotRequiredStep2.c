/*
 * XREFs of StorPortAdapterPowerNotRequiredStep2 @ 0x1C002C6B4
 * Callers:
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C002C640 (StorPortAdapterPowerNotRequiredStep1.c)
 * Callees:
 *     Template_pqt @ 0x1C002DCF8 (Template_pqt.c)
 */

__int64 __fastcall StorPortAdapterPowerNotRequiredStep2(PVOID Context)
{
  char v2; // di
  __int64 v3; // rax
  __int64 result; // rax
  int v5; // ecx
  int v6; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)Context + 636) + 8LL) + 12LL) & 2) == 0
    && *((_DWORD *)Context + 67) == 1
    && PoRequestPowerIrp(
         *((PDEVICE_OBJECT *)Context + 1),
         2u,
         (POWER_STATE)4,
         (PREQUEST_POWER_COMPLETE)StorPortAdapterPoFxD3Completion,
         Context,
         0LL) == 259 )
  {
    *((_BYTE *)Context + 108) |= 2u;
    v2 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *((_QWORD *)Context + 668) = MEMORY[0xFFFFF78000000008];
  v3 = *((_QWORD *)Context + 636);
  if ( *((char *)Context + 108) >= 0 )
  {
    *(_DWORD *)(v3 + 20) &= ~8u;
  }
  else
  {
    *(_DWORD *)(v3 + 20) |= 8u;
    if ( !*((_QWORD *)Context + 667) )
      *((_QWORD *)Context + 667) = *((_QWORD *)Context + 668);
  }
  result = PoFxCompleteDevicePowerNotRequired(**((_QWORD **)Context + 636));
  if ( StorEtwLoggingEnabled )
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      return Template_pqt(
               v5,
               (unsigned int)&EventAdapterPowerNotRequiredStop,
               v6,
               **((_QWORD **)Context + 636),
               *((_DWORD *)Context + 14),
               v2);
  }
  return result;
}

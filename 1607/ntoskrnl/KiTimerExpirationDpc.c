/*
 * XREFs of KiTimerExpirationDpc @ 0x140124018
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     KiTimer2Expiration @ 0x140059C20 (KiTimer2Expiration.c)
 *     KiTimerExpiration @ 0x1401240E8 (KiTimerExpiration.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall KiTimerExpirationDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  unsigned int v4; // esi
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // [rsp+30h] [rbp-138h] BYREF
  int v8; // [rsp+38h] [rbp-130h]
  int v9; // [rsp+3Ch] [rbp-12Ch]
  int v10; // [rsp+40h] [rbp-128h] BYREF
  __int64 v11; // [rsp+48h] [rbp-120h]

  v4 = (unsigned int)SystemArgument1;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v7 = 0LL;
    v8 = 0;
    v9 = 0;
    EtwTraceKernelEvent((int)&v7, 1, 0x40020000u, 3926, 4196866);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 0;
  v11 = MEMORY[0xFFFFF78000000014];
  _disable();
  v6 = MEMORY[0xFFFFF78000000008];
  CurrentPrcb->LastTimerHand = MEMORY[0xFFFFF78000000008] >> 18;
  _enable();
  KiTimerExpiration(CurrentPrcb, v4, v6, &v10);
  CurrentPrcb->DpcData[0].ActiveDpc = 0LL;
  if ( CurrentPrcb->ClockOwner )
    KiTimer2Expiration((__int64)CurrentPrcb, v6, 1, (__int64)&v10);
}

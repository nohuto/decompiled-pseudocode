/*
 * XREFs of ?DxgkVidMmAllowFailOnOfferReclaimErrors@@YAHXZ @ 0x1C014DDC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkVidMmAllowFailOnOfferReclaimErrors(__int64 a1)
{
  __int64 CurrentProcess; // rax
  __int64 v2; // rdx
  __int64 ProcessDxgProcess; // rax
  unsigned int v4; // ebx

  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v2);
  v4 = 0;
  if ( !ProcessDxgProcess )
    return 1LL;
  LOBYTE(v4) = (*(unsigned int (**)(void))(*(_QWORD *)(ProcessDxgProcess + 72) + 216LL))() == 0;
  return v4;
}

/*
 * XREFs of KeGetCurrentUmsTeb @ 0x14020C108
 * Callers:
 *     PspGetSetContextInternal @ 0x14044DC60 (PspGetSetContextInternal.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1406C6604 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     <none>
 */

ULONG64 __fastcall KeGetCurrentUmsTeb(struct _KTHREAD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG64 result; // rax

  CurrentThread = a1;
  if ( !a1 )
    CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.Reserved1 & 0x80u) == 0 )
    return (ULONG64)a1->Teb;
  result = __readmsr(0xC0000102);
  if ( result > MmUserProbeAddress )
    return 0LL;
  return result;
}

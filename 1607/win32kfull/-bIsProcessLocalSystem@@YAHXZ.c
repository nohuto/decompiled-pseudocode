/*
 * XREFs of ?bIsProcessLocalSystem@@YAHXZ @ 0x1C027B500
 * Callers:
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0266018 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bIsProcessLocalSystem(__int64 a1)
{
  struct _EPROCESS *CurrentProcess; // rax

  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(a1);
  return bIsProcessLocalSystem(CurrentProcess);
}

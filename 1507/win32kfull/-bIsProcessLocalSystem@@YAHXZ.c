/*
 * XREFs of ?bIsProcessLocalSystem@@YAHXZ @ 0x1C027DD70
 * Callers:
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0269108 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bIsProcessLocalSystem(__int64 a1, __int64 a2)
{
  struct _EPROCESS *CurrentProcess; // rax

  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(a1, a2);
  return bIsProcessLocalSystem(CurrentProcess);
}

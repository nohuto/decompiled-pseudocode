/*
 * XREFs of PsGetCurrentSiloObject @ 0x14063F754
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsGetCurrentSilo @ 0x1404D436C (PsGetCurrentSilo.c)
 *     PsGetSiloObjectByPointer @ 0x14063F7B8 (PsGetSiloObjectByPointer.c)
 */

__int64 __fastcall PsGetCurrentSiloObject(__int64 a1, __int64 a2)
{
  void *CurrentSilo; // rax
  void *v5; // rdi
  unsigned int SiloObjectByPointer; // ebx

  CurrentSilo = PsGetCurrentSilo();
  v5 = CurrentSilo;
  if ( !CurrentSilo )
    return 3221225480LL;
  SiloObjectByPointer = PsGetSiloObjectByPointer(CurrentSilo, a1, a2);
  ObfDereferenceObject(v5);
  return SiloObjectByPointer;
}

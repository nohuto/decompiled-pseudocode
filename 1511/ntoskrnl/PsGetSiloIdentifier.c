/*
 * XREFs of PsGetSiloIdentifier @ 0x14054B6F4
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsGetCurrentSilo @ 0x1404D436C (PsGetCurrentSilo.c)
 */

__int128 *__fastcall PsGetSiloIdentifier(__int128 *a1, _OWORD *a2)
{
  _OWORD *CurrentSilo; // rax
  char v4; // cl
  __int128 v5; // xmm0

  CurrentSilo = a2;
  if ( a2 == (_OWORD *)-1LL )
  {
    CurrentSilo = PsGetCurrentSilo();
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  if ( CurrentSilo )
    v5 = CurrentSilo[77];
  else
    v5 = PspNullGuid;
  *a1 = v5;
  if ( v4 && CurrentSilo )
    ObfDereferenceObject(CurrentSilo);
  return a1;
}

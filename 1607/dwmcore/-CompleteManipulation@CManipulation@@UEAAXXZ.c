/*
 * XREFs of ?CompleteManipulation@CManipulation@@UEAAXXZ @ 0x180145A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CManipulation::CompleteManipulation(CManipulation *this)
{
  if ( *((_DWORD *)this + 105) != 2 )
    *((_DWORD *)this + 105) = 0;
}

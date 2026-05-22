/*
 * XREFs of ?ShouldRedirectToManipulationThread@DWMInputTarget@@UEBA_NXZ @ 0x18001AAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DWMInputTarget::ShouldRedirectToManipulationThread(DWMInputTarget *this)
{
  return *((_DWORD *)this + 18) != 0;
}

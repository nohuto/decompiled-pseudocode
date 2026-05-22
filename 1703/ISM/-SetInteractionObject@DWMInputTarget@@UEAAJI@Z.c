/*
 * XREFs of ?SetInteractionObject@DWMInputTarget@@UEAAJI@Z @ 0x18001AB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputTarget::SetInteractionObject(DWMInputTarget *this, int a2)
{
  *((_DWORD *)this + 18) = a2;
  return 0LL;
}

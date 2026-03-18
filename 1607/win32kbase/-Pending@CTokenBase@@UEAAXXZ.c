/*
 * XREFs of ?Pending@CTokenBase@@UEAAXXZ @ 0x1C001F120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTokenBase::Pending(CTokenBase *this)
{
  *((_DWORD *)this + 6) = 1;
}

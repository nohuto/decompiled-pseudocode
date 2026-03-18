/*
 * XREFs of ?Retire@CTokenBase@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C008D6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTokenBase::Retire(CTokenBase *this, const struct DXGI_FRAME_STATISTICS *a2)
{
  *((_DWORD *)this + 6) = 5;
}

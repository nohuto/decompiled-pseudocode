/*
 * XREFs of ??_ECCompositionToken@@UEAAPEAXI@Z @ 0x1C00E0A98
 * Callers:
 *     ??_ECCompositionToken@@W7EAAPEAXI@Z @ 0x1C008A2B0 (--_ECCompositionToken@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CTokenBase@@UEAA@XZ @ 0x1C00A4188 (--1CTokenBase@@UEAA@XZ.c)
 */

CCompositionToken *__fastcall CCompositionToken::`vector deleting destructor'(CCompositionToken *this)
{
  CTokenBase::~CTokenBase((CCompositionToken *)((char *)this + 8));
  return this;
}

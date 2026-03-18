/*
 * XREFs of ??_ECCompositionToken@@UEAAPEAXI@Z @ 0x1C00E2A14
 * Callers:
 *     ??_ECCompositionToken@@W7EAAPEAXI@Z @ 0x1C008D6C0 (--_ECCompositionToken@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CTokenBase@@UEAA@XZ @ 0x1C00A8D08 (--1CTokenBase@@UEAA@XZ.c)
 */

CCompositionToken *__fastcall CCompositionToken::`vector deleting destructor'(CCompositionToken *this)
{
  CTokenBase::~CTokenBase((CCompositionToken *)((char *)this + 8));
  return this;
}

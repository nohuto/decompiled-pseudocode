/*
 * XREFs of ??_ECCompositionToken@@UEAAPEAXI@Z @ 0x1C00F4BE4
 * Callers:
 *     ??_ECCompositionToken@@W7EAAPEAXI@Z @ 0x1C008E5C0 (--_ECCompositionToken@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CTokenBase@@UEAA@XZ @ 0x1C001F104 (--1CTokenBase@@UEAA@XZ.c)
 */

CCompositionToken *__fastcall CCompositionToken::`vector deleting destructor'(CCompositionToken *this)
{
  CTokenBase::~CTokenBase((CCompositionToken *)((char *)this + 8));
  return this;
}

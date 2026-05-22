/*
 * XREFs of ??1Value@Input@@QEAA@XZ @ 0x1800113CC
 * Callers:
 *     _Input::PropertyModifiedAdapter_Input::ModifiedNotifier_Input::Property___::MoveConstruct_::_1_::dtor$7 @ 0x18009FE5B (_Input--PropertyModifiedAdapter_Input--ModifiedNotifier_Input--Property___--MoveCon_ea_18009FE5B.c)
 *     _Input::Property::MoveConstruct_::_1_::dtor$3 @ 0x1800A07DC (_Input--Property--MoveConstruct_--_1_--dtor$3.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Input::Value::~Value(void **this)
{
  operator delete(*this);
  *this = 0LL;
  this[1] = 0LL;
}

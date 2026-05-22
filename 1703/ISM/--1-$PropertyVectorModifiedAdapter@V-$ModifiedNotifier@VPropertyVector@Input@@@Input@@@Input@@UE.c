/*
 * XREFs of ??1?$PropertyVectorModifiedAdapter@V?$ModifiedNotifier@VPropertyVector@Input@@@Input@@@Input@@UEAA@XZ @ 0x18001C080
 * Callers:
 *     _DisplayBinding::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18009FE0E (_DisplayBinding--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Input::PropertyVectorModifiedAdapter<Input::ModifiedNotifier<Input::PropertyVector>>::~PropertyVectorModifiedAdapter<Input::ModifiedNotifier<Input::PropertyVector>>(
        char **this)
{
  Input::PropertyVector::~PropertyVector(this);
}

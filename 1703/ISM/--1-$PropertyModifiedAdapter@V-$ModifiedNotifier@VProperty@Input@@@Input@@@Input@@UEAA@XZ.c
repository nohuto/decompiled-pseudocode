/*
 * XREFs of ??1?$PropertyModifiedAdapter@V?$ModifiedNotifier@VProperty@Input@@@Input@@@Input@@UEAA@XZ @ 0x180011500
 * Callers:
 *     _DWMInputRouter::s_HitTestHandler_::_1_::dtor$26 @ 0x18009FBE7 (_DWMInputRouter--s_HitTestHandler_--_1_--dtor$26.c)
 *     _DWMInputRouter::s_HitTestHandler_::_1_::dtor$30 @ 0x18009FBF3 (_DWMInputRouter--s_HitTestHandler_--_1_--dtor$30.c)
 *     _DisplayBinding::RuntimeClassInitialize_::_1_::dtor$1 @ 0x18009FE1A (_DisplayBinding--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _DisplayBinding::SetInputDisplay_::_1_::dtor$0 @ 0x18009FE26 (_DisplayBinding--SetInputDisplay_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall Input::PropertyModifiedAdapter<Input::ModifiedNotifier<Input::Property>>::~PropertyModifiedAdapter<Input::ModifiedNotifier<Input::Property>>(
        __int64 a1)
{
  void **result; // rax

  *(_QWORD *)a1 = &Input::Property::`vftable';
  operator delete(*(void **)(a1 + 32));
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  operator delete(*(void **)(a1 + 32));
  *(_QWORD *)(a1 + 32) = 0LL;
  result = &Input::PropertyNode::`vftable';
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)a1 = &Input::PropertyNode::`vftable';
  return result;
}

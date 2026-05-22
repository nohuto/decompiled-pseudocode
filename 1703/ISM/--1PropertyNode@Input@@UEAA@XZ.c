/*
 * XREFs of ??1PropertyNode@Input@@UEAA@XZ @ 0x18001141C
 * Callers:
 *     _Input::PropertyMap::PropertyMap_::_1_::dtor$0 @ 0x18009F77E (_Input--PropertyMap--PropertyMap_--_1_--dtor$0.c)
 *     _Input::PropertyMap::_PropertyMap_::_1_::dtor$0 @ 0x18009F78A (_Input--PropertyMap--_PropertyMap_--_1_--dtor$0.c)
 *     _Input::PropertyVector::_PropertyVector_::_1_::dtor$0 @ 0x18009FDB9 (_Input--PropertyVector--_PropertyVector_--_1_--dtor$0.c)
 *     _Input::PropertyVector::MoveConstruct_::_1_::dtor$2 @ 0x18009FDF2 (_Input--PropertyVector--MoveConstruct_--_1_--dtor$2.c)
 *     _Input::PropertyModifiedAdapter_Input::ModifiedNotifier_Input::Property___::MoveConstruct_::_1_::dtor$6 @ 0x18009FE4F (_Input--PropertyModifiedAdapter_Input--ModifiedNotifier_Input--Property___--MoveCon_ea_18009FE4F.c)
 *     _Input::PropertyVectorModifiedAdapter_Input::ModifiedNotifier_Input::PropertyVector___::MoveConstruct_::_1_::dtor$6 @ 0x18009FE88 (_Input--PropertyVectorModifiedAdapter_Input--ModifiedNotifier_Input--PropertyVector_ea_18009FE88.c)
 *     _Input::PropertyNode::CreateFromStream_::_1_::dtor$3 @ 0x1800A076D (_Input--PropertyNode--CreateFromStream_--_1_--dtor$3.c)
 *     _Input::Property::MoveConstruct_::_1_::dtor$2 @ 0x1800A07D0 (_Input--Property--MoveConstruct_--_1_--dtor$2.c)
 *     _Input::PropertyMap::MoveConstruct_::_1_::dtor$2 @ 0x1800A082B (_Input--PropertyMap--MoveConstruct_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall Input::PropertyNode::~PropertyNode(Input::PropertyNode *this)
{
  *(_QWORD *)this = &Input::PropertyNode::`vftable';
}

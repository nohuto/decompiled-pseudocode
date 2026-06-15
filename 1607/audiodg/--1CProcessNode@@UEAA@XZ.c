/*
 * XREFs of ??1CProcessNode@@UEAA@XZ @ 0x140024F68
 * Callers:
 *     _CStreamProcessNode::_CStreamProcessNode_::_1_::dtor$0 @ 0x14001B5C7 (_CStreamProcessNode--_CStreamProcessNode_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000BA70 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcessNode::~CProcessNode(CProcessNode *this)
{
  CAudioMediaType *v2; // rcx
  void (*v3)(void); // rax
  CAudioMediaType *v4; // rcx
  void (*v5)(void); // rax

  *(_QWORD *)this = &CProcessNode::`vftable';
  v2 = (CAudioMediaType *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v3 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release(v2);
    else
      v3();
  }
  v4 = (CAudioMediaType *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    v5 = *(void (**)(void))(*(_QWORD *)v4 + 16LL);
    if ( (char *)v5 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release(v4);
    else
      v5();
  }
}

/*
 * XREFs of ??1CProcessNode@@UEAA@XZ @ 0x140025F98
 * Callers:
 *     _CDeviceProcessNode::_CDeviceProcessNode_::_1_::dtor$0 @ 0x14001B370 (_CDeviceProcessNode--_CDeviceProcessNode_--_1_--dtor$0.c)
 *     _CStreamProcessNode::_CStreamProcessNode_::_1_::dtor$0 @ 0x14001B3A0 (_CStreamProcessNode--_CStreamProcessNode_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400088A0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

void __fastcall CProcessNode::~CProcessNode(CProcessNode *this)
{
  __int64 v2; // rbx
  __int64 (__fastcall *v3)(CAudioMediaType *); // rsi
  CAudioMediaType *v4; // rbx
  __int64 (__fastcall *v5)(CAudioMediaType *); // rdi

  *(_QWORD *)this = &CProcessNode::`vftable';
  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    v3 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v2 + 16LL);
    if ( v3 == CAudioMediaType::Release )
      CAudioMediaType::Release(*((CAudioMediaType **)this + 2));
    else
      v3(*((CAudioMediaType **)this + 2));
  }
  v4 = (CAudioMediaType *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    v5 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v4 + 16LL);
    if ( v5 == CAudioMediaType::Release )
      CAudioMediaType::Release(v4);
    else
      v5(v4);
  }
}

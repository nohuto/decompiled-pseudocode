/*
 * XREFs of ??1CDeviceProcessNode@@UEAA@XZ @ 0x14000BFE0
 * Callers:
 *     ??_ECDeviceProcessNode@@UEAAPEAXI@Z @ 0x14000C0F0 (--_ECDeviceProcessNode@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400088A0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x140018AB8 (--3@YAXPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CDeviceProcessNode::~CDeviceProcessNode(CDeviceProcessNode *this)
{
  _QWORD *v2; // rsi
  void (__fastcall ***v3)(_QWORD, __int64); // r14
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(CAudioMediaType *); // rsi
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(CAudioMediaType *); // rsi
  CAudioMediaType *v8; // rbx
  __int64 (__fastcall *v9)(CAudioMediaType *); // rdi

  *(_QWORD *)this = &CDeviceProcessNode::`vftable';
  v2 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    v3 = (void (__fastcall ***)(_QWORD, __int64))v2[2];
    if ( v3 )
      (**v3)(v2[2], 1LL);
    v2[2] = 0LL;
    if ( *v2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 16LL))(*v2);
    operator delete(v2);
  }
  *((_QWORD *)this + 4) = 0LL;
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
  {
    v5 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v4 + 16LL);
    if ( v5 == CAudioMediaType::Release )
      CAudioMediaType::Release(*((CAudioMediaType **)this + 6));
    else
      v5(*((CAudioMediaType **)this + 6));
  }
  *(_QWORD *)this = &CProcessNode::`vftable';
  v6 = *((_QWORD *)this + 2);
  if ( v6 )
  {
    v7 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v6 + 16LL);
    if ( v7 == CAudioMediaType::Release )
      CAudioMediaType::Release(*((CAudioMediaType **)this + 2));
    else
      v7(*((CAudioMediaType **)this + 2));
  }
  v8 = (CAudioMediaType *)*((_QWORD *)this + 1);
  if ( v8 )
  {
    v9 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v8 + 16LL);
    if ( v9 == CAudioMediaType::Release )
      CAudioMediaType::Release(v8);
    else
      v9(v8);
  }
}

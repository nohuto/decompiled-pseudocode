/*
 * XREFs of ??1CDeviceProcessNode@@UEAA@XZ @ 0x140010318
 * Callers:
 *     ??_ECDeviceProcessNode@@UEAAPEAXI@Z @ 0x140010430 (--_ECDeviceProcessNode@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000BA70 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ??_EHandleSendReceiveServer@@UEAAPEAXI@Z @ 0x140015810 (--_EHandleSendReceiveServer@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CDeviceProcessNode::~CDeviceProcessNode(CDeviceProcessNode *this)
{
  _QWORD *v2; // rdi
  HandleSendReceiveServer *v3; // rcx
  CAudioMediaType *v4; // rcx
  __int64 (__fastcall *v5)(CAudioMediaType *); // rax
  CAudioMediaType *v6; // rcx
  __int64 (__fastcall *v7)(CAudioMediaType *); // rax
  CAudioMediaType *v8; // rcx
  __int64 (__fastcall *v9)(CAudioMediaType *); // rax
  void *(__fastcall *v10)(HandleSendReceiveServer *__hidden, unsigned int); // rax

  *(_QWORD *)this = &CDeviceProcessNode::`vftable';
  v2 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    v3 = (HandleSendReceiveServer *)v2[2];
    if ( v3 )
    {
      v10 = **(void *(__fastcall ***)(HandleSendReceiveServer *__hidden, unsigned int))v3;
      if ( v10 == HandleSendReceiveServer::`vector deleting destructor' )
        HandleSendReceiveServer::`vector deleting destructor'(v3, 1u);
      else
        v10(v3, 1u);
    }
    v2[2] = 0LL;
    if ( *v2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 16LL))(*v2);
    operator delete(v2);
  }
  *((_QWORD *)this + 4) = 0LL;
  v4 = (CAudioMediaType *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    v5 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v4 + 16LL);
    if ( v5 == CAudioMediaType::Release )
      CAudioMediaType::Release(v4);
    else
      v5(v4);
  }
  *(_QWORD *)this = &CProcessNode::`vftable';
  v6 = (CAudioMediaType *)*((_QWORD *)this + 2);
  if ( v6 )
  {
    v7 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v6 + 16LL);
    if ( v7 == CAudioMediaType::Release )
      CAudioMediaType::Release(v6);
    else
      v7(v6);
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

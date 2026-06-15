/*
 * XREFs of ??1CDeviceProcessNode@@UEAA@XZ @ 0x1400131E0
 * Callers:
 *     ??_GCStreamProcessNode@@UEAAPEAXI@Z @ 0x140013340 (--_GCStreamProcessNode@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400103E0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ??_EHandleSendReceiveServer@@UEAAPEAXI@Z @ 0x140016500 (--_EHandleSendReceiveServer@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1400189FC (--3@YAXPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CDeviceProcessNode::~CDeviceProcessNode(CDeviceProcessNode *this)
{
  HandleSendReceiveServer **v2; // rsi
  void *(__fastcall ***v3)(HandleSendReceiveServer *__hidden, unsigned int); // rbx
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(CAudioMediaType *); // rsi
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(CAudioMediaType *); // rsi
  CAudioMediaType *v8; // rbx
  __int64 (__fastcall *v9)(CAudioMediaType *); // rdi
  void *(__fastcall *v10)(HandleSendReceiveServer *__hidden, unsigned int); // rbp

  *(_QWORD *)this = &CDeviceProcessNode::`vftable';
  v2 = (HandleSendReceiveServer **)*((_QWORD *)this + 4);
  if ( v2 )
  {
    v3 = (void *(__fastcall ***)(HandleSendReceiveServer *__hidden, unsigned int))v2[2];
    if ( v3 )
    {
      v10 = **v3;
      if ( v10 == HandleSendReceiveServer::`vector deleting destructor' )
        HandleSendReceiveServer::`vector deleting destructor'(v2[2], 1u);
      else
        v10(v2[2], 1u);
    }
    v2[2] = 0LL;
    if ( *v2 )
      (*(void (__fastcall **)(HandleSendReceiveServer *))(*(_QWORD *)*v2 + 16LL))(*v2);
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

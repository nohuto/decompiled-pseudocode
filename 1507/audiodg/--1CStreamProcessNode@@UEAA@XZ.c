/*
 * XREFs of ??1CStreamProcessNode@@UEAA@XZ @ 0x14000C130
 * Callers:
 *     ??_GCStreamProcessNode@@UEAAPEAXI@Z @ 0x14000C2B0 (--_GCStreamProcessNode@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_EHandleSendReceiveServer@@UEAAPEAXI@Z @ 0x140003770 (--_EHandleSendReceiveServer@@UEAAPEAXI@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400088A0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x140018AB8 (--3@YAXPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CStreamProcessNode::~CStreamProcessNode(CStreamProcessNode *this)
{
  HandleSendReceiveServer **v2; // rsi
  HandleSendReceiveServer *(__fastcall ***v3)(HandleSendReceiveServer *, char); // rbx
  HandleSendReceiveServer *(__fastcall *v4)(HandleSendReceiveServer *, char); // rbp
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(CAudioMediaType *); // rsi
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(CAudioMediaType *); // rsi
  CAudioMediaType *v9; // rbx
  __int64 (__fastcall *v10)(CAudioMediaType *); // rdi

  *(_QWORD *)this = &CStreamProcessNode::`vftable';
  v2 = (HandleSendReceiveServer **)*((_QWORD *)this + 4);
  if ( v2 )
  {
    v3 = (HandleSendReceiveServer *(__fastcall ***)(HandleSendReceiveServer *, char))v2[2];
    if ( v3 )
    {
      v4 = **v3;
      if ( v4 == HandleSendReceiveServer::`vector deleting destructor' )
        HandleSendReceiveServer::`vector deleting destructor'(v2[2], 1);
      else
        v4(v2[2], 1);
    }
    v2[2] = 0LL;
    if ( *v2 )
      (*(void (__fastcall **)(HandleSendReceiveServer *))(*(_QWORD *)*v2 + 16LL))(*v2);
    operator delete(v2);
  }
  *((_QWORD *)this + 4) = 0LL;
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
  {
    v6 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v5 + 16LL);
    if ( v6 == CAudioMediaType::Release )
      CAudioMediaType::Release(*((CAudioMediaType **)this + 6));
    else
      v6(*((CAudioMediaType **)this + 6));
  }
  *(_QWORD *)this = &CProcessNode::`vftable';
  v7 = *((_QWORD *)this + 2);
  if ( v7 )
  {
    v8 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v7 + 16LL);
    if ( v8 == CAudioMediaType::Release )
      CAudioMediaType::Release(*((CAudioMediaType **)this + 2));
    else
      v8(*((CAudioMediaType **)this + 2));
  }
  v9 = (CAudioMediaType *)*((_QWORD *)this + 1);
  if ( v9 )
  {
    v10 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v9 + 16LL);
    if ( v10 == CAudioMediaType::Release )
      CAudioMediaType::Release(v9);
    else
      v10(v9);
  }
}

/*
 * XREFs of ??_GInputAcknowledge@@EEAAPEAXI@Z @ 0x18006CAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcknowledgeDelivery@InputQueue@@QEAAJPEAUInputDeliveryAcknowledgeData@@@Z @ 0x18006C754 (-AcknowledgeDelivery@InputQueue@@QEAAJPEAUInputDeliveryAcknowledgeData@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
InputAcknowledge *__fastcall InputAcknowledge::`scalar deleting destructor'(
        InputAcknowledge *this,
        char a2,
        __int64 a3,
        const char *a4)
{
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+50h] [rbp+18h] BYREF
  int v13; // [rsp+54h] [rbp+1Ch]

  *(_QWORD *)this = &InputAcknowledge::`vftable';
  if ( !*((_BYTE *)this + 16) )
  {
    v12 = *((_DWORD *)this + 5);
    v13 = 2;
    v6 = InputQueue::AcknowledgeDelivery(
           *((InputQueue **)this + 3),
           (struct InputDeliveryAcknowledgeData *)&v12,
           a3,
           a4);
    if ( v6 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x2C,
        (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputacknowledge.cpp",
        (const char *)(unsigned int)v6);
  }
  v7 = *((_QWORD *)this + 5);
  if ( v7 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 4);
  if ( v8 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 3);
  if ( v9 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

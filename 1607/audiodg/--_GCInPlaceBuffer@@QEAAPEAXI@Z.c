/*
 * XREFs of ??_GCInPlaceBuffer@@QEAAPEAXI@Z @ 0x1400252C4
 * Callers:
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x140009600 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 *     ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x140025330 (-Release@CInPlaceBuffer@@QEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CInPlaceBuffer *__fastcall CInPlaceBuffer::`scalar deleting destructor'(CInPlaceBuffer *this)
{
  __int64 v2; // rcx

  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 48LL))(
    *((_QWORD *)this + 3),
    *((_QWORD *)this + 1));
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  operator delete(this);
  return this;
}

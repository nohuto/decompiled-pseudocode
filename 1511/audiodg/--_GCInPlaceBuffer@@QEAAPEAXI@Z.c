/*
 * XREFs of ??_GCInPlaceBuffer@@QEAAPEAXI@Z @ 0x1400264CC
 * Callers:
 *     ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x140017868 (-Release@CInPlaceBuffer@@QEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400189FC (--3@YAXPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CInPlaceBuffer *__fastcall CInPlaceBuffer::`scalar deleting destructor'(CInPlaceBuffer *this)
{
  __int64 v2; // rdi

  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 48LL))(
    *((_QWORD *)this + 3),
    *((_QWORD *)this + 1));
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 3));
  operator delete(this);
  return this;
}

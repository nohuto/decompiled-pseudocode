/*
 * XREFs of ??1CConnectionInstance@@QEAA@XZ @ 0x14002614C
 * Callers:
 *     ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x140026124 (--_GCConnectionInstance@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x1400263C8 (-Release@CInPlaceBuffer@@QEAAKXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CConnectionInstance::~CConnectionInstance(CConnectionInstance *this)
{
  CInPlaceBuffer *v2; // rcx
  __int64 v3; // rdi

  if ( *((_QWORD *)this + 1) && *(_DWORD *)this )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 6) + 64LL))(
      *((_QWORD *)this + 6),
      *((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
  v2 = (CInPlaceBuffer *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    CInPlaceBuffer::Release(v2);
    *((_QWORD *)this + 7) = 0LL;
  }
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 6));
}

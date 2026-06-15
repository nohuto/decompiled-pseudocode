/*
 * XREFs of ??1CConnectionInstance@@QEAA@XZ @ 0x1400262D4
 * Callers:
 *     ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x1400262AC (--_GCConnectionInstance@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x140017868 (-Release@CInPlaceBuffer@@QEAAKXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CConnectionInstance::~CConnectionInstance(CConnectionInstance *this, unsigned int a2)
{
  CInPlaceBuffer *v3; // rcx
  __int64 v4; // rdi

  if ( *((_QWORD *)this + 1) && *(_DWORD *)this )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 6) + 64LL))(
      *((_QWORD *)this + 6),
      *((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
  v3 = (CInPlaceBuffer *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    CInPlaceBuffer::Release(v3, a2);
    *((_QWORD *)this + 7) = 0LL;
  }
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 6));
}

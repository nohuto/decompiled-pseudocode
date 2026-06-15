/*
 * XREFs of ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x1400263C8
 * Callers:
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x1400062E0 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 *     ??1CConnectionInstance@@QEAA@XZ @ 0x14002614C (--1CConnectionInstance@@QEAA@XZ.c)
 * Callees:
 *     ??_GCInPlaceBuffer@@QEAAPEAXI@Z @ 0x14002633C (--_GCInPlaceBuffer@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CInPlaceBuffer::Release(CInPlaceBuffer *this)
{
  bool v1; // zf
  unsigned int v2; // ebx

  v1 = (*((_DWORD *)this + 4))-- == 1;
  v2 = *((_DWORD *)this + 4);
  if ( v1 )
    CInPlaceBuffer::`scalar deleting destructor'(this);
  return v2;
}

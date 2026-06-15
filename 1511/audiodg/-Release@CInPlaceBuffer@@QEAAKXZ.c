/*
 * XREFs of ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x140017868
 * Callers:
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x14000DD10 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 *     ??1CConnectionInstance@@QEAA@XZ @ 0x1400262D4 (--1CConnectionInstance@@QEAA@XZ.c)
 * Callees:
 *     ??_GCInPlaceBuffer@@QEAAPEAXI@Z @ 0x1400264CC (--_GCInPlaceBuffer@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CInPlaceBuffer::Release(CInPlaceBuffer *this, unsigned int a2)
{
  bool v2; // zf
  unsigned int v3; // ebx

  v2 = (*((_DWORD *)this + 4))-- == 1;
  v3 = *((_DWORD *)this + 4);
  if ( v2 )
    CInPlaceBuffer::`scalar deleting destructor'(this, a2);
  return v3;
}

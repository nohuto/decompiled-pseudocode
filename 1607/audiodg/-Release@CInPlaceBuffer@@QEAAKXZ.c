/*
 * XREFs of ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x140025330
 * Callers:
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x140009600 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 *     ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x1400250CC (--_GCConnectionInstance@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCInPlaceBuffer@@QEAAPEAXI@Z @ 0x1400252C4 (--_GCInPlaceBuffer@@QEAAPEAXI@Z.c)
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

/*
 * XREFs of ?UpdateClientOwner@MobileCursor@@UEAAJXZ @ 0x180026F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MobileCursor::UpdateClientOwner(MobileCursor *this)
{
  *((_QWORD *)this + 6) = (unsigned int)++dword_1800D37F4;
  return 0LL;
}

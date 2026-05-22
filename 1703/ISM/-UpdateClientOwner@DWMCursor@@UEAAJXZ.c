/*
 * XREFs of ?UpdateClientOwner@DWMCursor@@UEAAJXZ @ 0x18001F730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursor::UpdateClientOwner(DWMCursor *this)
{
  *((_QWORD *)this + 8) = (unsigned int)++dword_1800D37F0;
  return 0LL;
}

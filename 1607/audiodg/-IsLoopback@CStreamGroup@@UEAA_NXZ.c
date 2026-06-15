/*
 * XREFs of ?IsLoopback@CStreamGroup@@UEAA_NXZ @ 0x140026300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CStreamGroup::IsLoopback(CStreamGroup *this)
{
  return *((_DWORD *)this + 58) == 2;
}

/*
 * XREFs of ?GetThreadId@DWMInputTarget@@UEAAJPEAK@Z @ 0x18001AAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputTarget::GetThreadId(DWMInputTarget *this, unsigned int *a2)
{
  *a2 = *((_DWORD *)this + 17);
  return 0LL;
}

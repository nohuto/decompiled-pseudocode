/*
 * XREFs of ?GetProcessId@DWMInputTarget@@UEAAJPEAK@Z @ 0x18001AA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputTarget::GetProcessId(DWMInputTarget *this, unsigned int *a2)
{
  *a2 = *((_DWORD *)this + 16);
  return 0LL;
}

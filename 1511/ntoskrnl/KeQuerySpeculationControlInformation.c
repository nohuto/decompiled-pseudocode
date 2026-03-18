/*
 * XREFs of KeQuerySpeculationControlInformation @ 0x14061B034
 * Callers:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall KeQuerySpeculationControlInformation(int *a1, size_t Size, _DWORD *a3)
{
  size_t v3; // r9
  struct _KPRCB *CurrentPrcb; // r14
  int v17; // esi
  int v18; // ecx

  v3 = (unsigned int)Size;
  CurrentPrcb = KeGetCurrentPrcb();
  *a3 = 4;
  if ( (unsigned int)Size < 4 )
    return 3221225476LL;
  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 7 )
  {
    v17 = 0;
  }
  else
  {
    _RAX = 7LL;
    __asm { cpuid }
    v17 = _RDX & 0xC000000;
  }
  memset(a1, 0, v3);
  if ( (v17 & 0x4000000) != 0 )
  {
    *a1 |= 8u;
    *a1 |= 0x10u;
  }
  *a1 ^= (*a1 ^ CurrentPrcb->BpbState) & 1;
  if ( (*a1 & 1) == 0 )
  {
    if ( (KiFeatureSettings & 1) != 0 )
      *a1 |= 2u;
    if ( (*a1 & 8) == 0 )
      *a1 |= 4u;
  }
  *a1 ^= (*a1 ^ (32 * CurrentPrcb->BpbState)) & 0x20;
  v18 = *a1 ^ (*a1 ^ (32 * CurrentPrcb->BpbState)) & 0x40;
  *a1 = v18;
  *a1 = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)(32 * CurrentPrcb->BpbState)) & 0x80;
  return 0LL;
}

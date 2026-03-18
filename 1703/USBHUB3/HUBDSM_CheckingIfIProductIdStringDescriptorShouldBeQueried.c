/*
 * XREFs of HUBDSM_CheckingIfIProductIdStringDescriptorShouldBeQueried @ 0x1C001A710
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_IsLanguageSupported @ 0x1C00136F4 (HUBPDO_IsLanguageSupported.c)
 */

__int64 __fastcall HUBDSM_CheckingIfIProductIdStringDescriptorShouldBeQueried(__int64 a1)
{
  __int64 v1; // rcx
  bool v2; // zf
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 960);
  if ( (*(_DWORD *)(v1 + 1628) & 1) != 0 )
    return 4061LL;
  v2 = HUBPDO_IsLanguageSupported(v1, 1033) == 0;
  result = 4089LL;
  if ( v2 )
    return 4061LL;
  return result;
}

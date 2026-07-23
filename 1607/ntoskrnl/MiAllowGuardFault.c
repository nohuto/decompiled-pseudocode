/*
 * XREFs of MiAllowGuardFault @ 0x1400A3950
 * Callers:
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiResolveProtoPteFault @ 0x140040EE0 (MiResolveProtoPteFault.c)
 * Callees:
 *     KeInvalidAccessAllowed @ 0x1400A39A4 (KeInvalidAccessAllowed.c)
 *     KeIsAttachedProcess @ 0x1400E5D20 (KeIsAttachedProcess.c)
 */

__int64 __fastcall MiAllowGuardFault(__int64 a1)
{
  if ( (unsigned __int8)KeIsAttachedProcess() || (a1 & 1) != 0 && *(_BYTE *)(a1 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    return 0LL;
  if ( (a1 & 1) != 0 )
  {
    if ( *(_BYTE *)(a1 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
      return 0LL;
    if ( (a1 & 1) != 0 )
      return ((unsigned int)~*(_BYTE *)&KeGetCurrentThread()->0 >> 5) & 1;
  }
  if ( (unsigned __int8)KeInvalidAccessAllowed(a1) != 1 )
    return ((unsigned int)~*(_BYTE *)&KeGetCurrentThread()->0 >> 5) & 1;
  return 0LL;
}

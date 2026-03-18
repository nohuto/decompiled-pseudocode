/*
 * XREFs of MiAllowGuardFault @ 0x1400E5F90
 * Callers:
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiZeroFault @ 0x14004D290 (MiZeroFault.c)
 *     MiResolveProtoPteFault @ 0x1400517B0 (MiResolveProtoPteFault.c)
 * Callees:
 *     KeIsAttachedProcess @ 0x1400701C0 (KeIsAttachedProcess.c)
 *     KeInvalidAccessAllowed @ 0x1400E5FF0 (KeInvalidAccessAllowed.c)
 */

__int64 __fastcall MiAllowGuardFault(__int64 a1)
{
  __int64 v2; // r9
  unsigned __int64 v4; // rbx

  if ( KeIsAttachedProcess() || (a1 & 1) != 0 && *(_BYTE *)(a1 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    return 0LL;
  if ( (a1 & 1) == 0 )
    goto LABEL_4;
  if ( *(_BYTE *)(a1 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
    return 0LL;
  if ( (a1 & 1) == 0 )
  {
LABEL_4:
    if ( (unsigned __int8)KeInvalidAccessAllowed(a1) == 1 )
      return 0LL;
    if ( !v2 )
      return ((unsigned int)~*(_BYTE *)&KeGetCurrentThread()->0 >> 5) & 1;
  }
  v4 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( *(_BYTE *)v4 != 5 || (*(_DWORD *)(v4 + 48) & 4) == 0 )
    return ((unsigned int)~*(_BYTE *)&KeGetCurrentThread()->0 >> 5) & 1;
  return 0LL;
}

/*
 * XREFs of MiAllowGuardFault @ 0x1401114C4
 * Callers:
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiZeroFault @ 0x1400C0DC0 (MiZeroFault.c)
 *     MiResolveProtoPteFault @ 0x1400C5730 (MiResolveProtoPteFault.c)
 * Callees:
 *     KeInvalidAccessAllowed @ 0x140111530 (KeInvalidAccessAllowed.c)
 */

__int64 __fastcall MiAllowGuardFault(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int64 v3; // rcx

  if ( KeGetCurrentThread()->ApcStateIndex == 1 || (a1 & 1) != 0 && *(_BYTE *)(a1 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
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
    if ( !v1 )
      return ((unsigned int)~*(_BYTE *)&KeGetCurrentThread()->0 >> 5) & 1;
  }
  v3 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( *(_BYTE *)v3 != 5 || (*(_DWORD *)(v3 + 48) & 4) == 0 )
    return ((unsigned int)~*(_BYTE *)&KeGetCurrentThread()->0 >> 5) & 1;
  return 0LL;
}

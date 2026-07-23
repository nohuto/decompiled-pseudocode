/*
 * XREFs of RtlTestProtectedAccess @ 0x1404A7060
 * Callers:
 *     PspCheckForInvalidAccessByProtection @ 0x1404A6F78 (PspCheckForInvalidAccessByProtection.c)
 *     PspProcessOpen @ 0x1404A6FB0 (PspProcessOpen.c)
 *     NtSetInformationThread @ 0x1404F1560 (NtSetInformationThread.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlTestProtectedAccess(PS_PROTECTION Source, PS_PROTECTION Target)
{
  BOOLEAN result; // al
  int v3; // eax

  result = 1;
  if ( (Target.Level & 7) != 0 )
  {
    if ( (unsigned __int8)(Source.Level & 7) < (unsigned __int8)(Target.Level & 7) )
      return 0;
    v3 = *(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)Source.Level >> 4)];
    if ( !_bittest(&v3, Target.Level >> 4) )
      return 0;
  }
  return result;
}

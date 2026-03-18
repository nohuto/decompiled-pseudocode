/*
 * XREFs of RtlTestProtectedAccess @ 0x1404BB330
 * Callers:
 *     PspCheckForInvalidAccessByProtection @ 0x1404BB248 (PspCheckForInvalidAccessByProtection.c)
 *     PspProcessOpen @ 0x1404BB280 (PspProcessOpen.c)
 *     NtSetInformationThread @ 0x14050E5D0 (NtSetInformationThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlTestProtectedAccess(unsigned __int8 a1, unsigned __int8 a2)
{
  _BOOL8 result; // rax
  int v3; // eax

  result = 1;
  if ( (a2 & 7) != 0 )
  {
    if ( (unsigned __int8)(a1 & 7) < (unsigned __int8)(a2 & 7) )
      return 0;
    v3 = *(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)a1 >> 4)];
    if ( !_bittest(&v3, a2 >> 4) )
      return 0;
  }
  return result;
}

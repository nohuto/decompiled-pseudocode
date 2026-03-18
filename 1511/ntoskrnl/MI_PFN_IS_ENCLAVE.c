/*
 * XREFs of MI_PFN_IS_ENCLAVE @ 0x1401DF9EC
 * Callers:
 *     MiIdentifyPfn @ 0x140050C60 (MiIdentifyPfn.c)
 *     MiGetPageProtection @ 0x14005F320 (MiGetPageProtection.c)
 *     MiGetWorkingSetInfoList @ 0x1400B9CE0 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_PFN_IS_ENCLAVE(__int64 a1)
{
  _QWORD *v1; // r8
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx

  v1 = (_QWORD *)MiEnclaveRegions;
  if ( MiEnclaveRegions && ((*(_QWORD *)(a1 + 40) >> 54) & 7) == 1 )
  {
    v2 = (a1 + 0x58000000000LL) / 48;
    while ( v1 )
    {
      v3 = v1[3];
      if ( v2 < v3 )
      {
        v1 = (_QWORD *)*v1;
      }
      else
      {
        if ( v2 - v3 < v1[4] )
          return 1LL;
        v1 = (_QWORD *)v1[1];
      }
    }
  }
  return 0LL;
}

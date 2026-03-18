/*
 * XREFs of HUBDSM_CheckingIfAlternateModeStringDescriptorShouldBeQueried @ 0x1C00197C0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_LogAlternateMode @ 0x1C00229F4 (HUBDTX_LogAlternateMode.c)
 */

__int64 __fastcall HUBDSM_CheckingIfAlternateModeStringDescriptorShouldBeQueried(__int64 a1)
{
  __int64 v1; // rsi
  __int64 *v2; // rbx
  __int64 v3; // rdi

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(__int64 **)(v1 + 2616);
  v3 = *v2;
  if ( *((_BYTE *)v2 + 8) == 0xFF )
    *((_BYTE *)v2 + 8) = 0;
  for ( ; *((_BYTE *)v2 + 8) < *(_BYTE *)(v3 + 4); ++*((_BYTE *)v2 + 8) )
  {
    if ( *(_BYTE *)(v3 + 4LL * *((unsigned __int8 *)v2 + 8) + 47) )
      break;
    HUBDTX_LogAlternateMode(v1, 0LL);
  }
  if ( *((_BYTE *)v2 + 8) != *(_BYTE *)(v3 + 4) )
    return 4089LL;
  *((_BYTE *)v2 + 8) = -1;
  return 4061LL;
}

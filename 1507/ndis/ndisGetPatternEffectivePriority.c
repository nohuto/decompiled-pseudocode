/*
 * XREFs of ndisGetPatternEffectivePriority @ 0x1C004453C
 * Callers:
 *     ndisOidPostRemovePMProtocolOffload @ 0x1C000DE90 (ndisOidPostRemovePMProtocolOffload.c)
 *     ndisOidPostAddPMProtocolOffload @ 0x1C000DFC0 (ndisOidPostAddPMProtocolOffload.c)
 *     ndisMiniportPostAddWOLPattern @ 0x1C000E424 (ndisMiniportPostAddWOLPattern.c)
 *     ndisMiniportPostRemoveWoLPattern @ 0x1C0044CD4 (ndisMiniportPostRemoveWoLPattern.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetPatternEffectivePriority(__int64 a1)
{
  __int64 result; // rax
  __int64 *i; // rdx

  result = 0xFFFFFFFFLL;
  for ( i = (__int64 *)(a1 + 8); i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 6) < (unsigned int)result )
      result = *((unsigned int *)i + 6);
  }
  return result;
}

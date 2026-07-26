/*
 * XREFs of ndisGetPatternEffectivePriority @ 0x1C0049124
 * Callers:
 *     ndisMiniportPostAddWOLPattern @ 0x1C0022374 (ndisMiniportPostAddWOLPattern.c)
 *     ndisMiniportPostRemoveWoLPattern @ 0x1C0049A38 (ndisMiniportPostRemoveWoLPattern.c)
 *     ndisOidPostAddPMProtocolOffload @ 0x1C0049B00 (ndisOidPostAddPMProtocolOffload.c)
 *     ndisOidPostRemovePMProtocolOffload @ 0x1C0049EA0 (ndisOidPostRemovePMProtocolOffload.c)
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

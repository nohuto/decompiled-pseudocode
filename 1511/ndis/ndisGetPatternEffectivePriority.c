/*
 * XREFs of ndisGetPatternEffectivePriority @ 0x1C0045AD4
 * Callers:
 *     ndisOidPostAddPMProtocolOffload @ 0x1C0001000 (ndisOidPostAddPMProtocolOffload.c)
 *     ndisOidPostRemovePMProtocolOffload @ 0x1C0001230 (ndisOidPostRemovePMProtocolOffload.c)
 *     ndisMiniportPostAddWOLPattern @ 0x1C0010AFC (ndisMiniportPostAddWOLPattern.c)
 *     ndisMiniportPostRemoveWoLPattern @ 0x1C004626C (ndisMiniportPostRemoveWoLPattern.c)
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

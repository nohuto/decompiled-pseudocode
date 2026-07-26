/*
 * XREFs of ndisOidPostEnableWakeUp @ 0x1C0049CF0
 * Callers:
 *     <none>
 * Callees:
 *     ndisXlatePMParametersToWakeUpEnableOid @ 0x1C004AF90 (ndisXlatePMParametersToWakeUpEnableOid.c)
 */

__int64 __fastcall ndisOidPostEnableWakeUp(__int64 a1)
{
  __int64 result; // rax
  unsigned __int8 v2; // dl

  result = *(_QWORD *)a1;
  if ( !*(_DWORD *)(a1 + 40) && *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4LL) == 1 && !*(_QWORD *)(a1 + 24) )
  {
    if ( result )
    {
      v2 = *(_BYTE *)(result + 32);
      if ( v2 > 6u || v2 == 6 && *(_BYTE *)(result + 33) >= 0x14u )
        return ndisXlatePMParametersToWakeUpEnableOid(*(_QWORD *)(a1 + 32));
    }
  }
  return result;
}

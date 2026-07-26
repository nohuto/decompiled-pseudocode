/*
 * XREFs of ndisInsertPatternListEntry @ 0x1C000E480
 * Callers:
 *     ndisOidPostAddPMProtocolOffload @ 0x1C000DFC0 (ndisOidPostAddPMProtocolOffload.c)
 *     ndisMiniportPostAddWOLPattern @ 0x1C000E424 (ndisMiniportPostAddWOLPattern.c)
 *     ndisMiniportPostAddWakeUpPattern @ 0x1C0044C60 (ndisMiniportPostAddWakeUpPattern.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ndisInsertPatternListEntry(__int64 **a1, __int64 a2)
{
  __int64 *i; // rax
  __int64 *result; // rax

  for ( i = *a1; i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 10) > *(_DWORD *)(a2 + 40) )
      break;
    a1 = (__int64 **)i;
  }
  result = *a1;
  *(_QWORD *)a2 = *a1;
  *a1 = (__int64 *)a2;
  return result;
}

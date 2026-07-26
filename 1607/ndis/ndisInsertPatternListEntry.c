/*
 * XREFs of ndisInsertPatternListEntry @ 0x1C00223D0
 * Callers:
 *     ndisMiniportPostAddWOLPattern @ 0x1C0022374 (ndisMiniportPostAddWOLPattern.c)
 *     ndisMiniportPostAddWakeUpPattern @ 0x1C00499C4 (ndisMiniportPostAddWakeUpPattern.c)
 *     ndisOidPostAddPMProtocolOffload @ 0x1C0049B00 (ndisOidPostAddPMProtocolOffload.c)
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

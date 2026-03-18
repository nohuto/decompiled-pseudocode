/*
 * XREFs of sfac_ReadNumLongVertMetrics @ 0x1C00AD348
 * Callers:
 *     sfac_LoadCriticalSfntMetrics @ 0x1C00AD920 (sfac_LoadCriticalSfntMetrics.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C00ADC14 (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C00ADC28 (sfac_GetDataPtr.c)
 */

__int64 __fastcall sfac_ReadNumLongVertMetrics(__int64 a1, _WORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0;
  result = sfac_GetDataPtr(a1, 0, 36, 19, 0, (__int64)&v7);
  if ( !(_DWORD)result )
  {
    if ( v7 )
    {
      *a2 = __ROR2__(*(_WORD *)(v7 + 34), 8);
      *a3 = 1;
      InvokeReleaseSfntFrag(*(unsigned int *)(a1 + 12));
    }
    return 0LL;
  }
  return result;
}

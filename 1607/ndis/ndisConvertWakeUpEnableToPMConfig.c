/*
 * XREFs of ndisConvertWakeUpEnableToPMConfig @ 0x1C0048DC4
 * Callers:
 *     ndisXlateWakeUpEnableToPMParametersOid @ 0x1C004AFF0 (ndisXlateWakeUpEnableToPMParametersOid.c)
 *     ndisSetOpenEnableWakeUp @ 0x1C00CAC18 (ndisSetOpenEnableWakeUp.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisConvertWakeUpEnableToPMConfig(char a1, _DWORD *a2, __int16 a3)
{
  if ( a3 == 1 )
  {
    *a2 = 1048960;
  }
  else
  {
    if ( a3 != 2 )
      return;
    *a2 = 1310720;
    *(_WORD *)a2 = 640;
  }
  if ( (a1 & 1) != 0 )
    a2[1] |= 2u;
  if ( (a1 & 2) != 0 )
    a2[1] |= 1u;
  if ( (a1 & 4) != 0 )
    a2[3] |= 1u;
}

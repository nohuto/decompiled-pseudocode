/*
 * XREFs of ndisXlateWakeUpEnableToPMParametersOid @ 0x1C0045A20
 * Callers:
 *     ndisOidPostPMParameters @ 0x1C001F3F0 (ndisOidPostPMParameters.c)
 *     ndisSetEnableWakeUp @ 0x1C00CB9C4 (ndisSetEnableWakeUp.c)
 * Callees:
 *     ndisConvertWakeUpEnableToPMConfig @ 0x1C00442B8 (ndisConvertWakeUpEnableToPMConfig.c)
 */

void __fastcall ndisXlateWakeUpEnableToPMParametersOid(__int64 a1)
{
  _DWORD *v1; // rdx
  unsigned int v2; // ecx
  bool v3; // cf
  __int16 v4; // cx
  _DWORD *v5; // r11

  v1 = *(_DWORD **)(a1 + 40);
  v2 = *(_DWORD *)(a1 + 152);
  if ( v2 >= 0x10 )
  {
    v3 = v2 < 0x14;
    v4 = 1;
    if ( !v3 )
      v4 = 2;
    ndisConvertWakeUpEnableToPMConfig(*v1, v1, v4);
    v5[8] = -50265847;
    v5[12] = v5[38];
  }
}

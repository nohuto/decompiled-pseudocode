/*
 * XREFs of wcsncpycch @ 0x1C00E9E1C
 * Callers:
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C00E9570 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     NtUserRemoteConnect @ 0x1C00EB960 (NtUserRemoteConnect.c)
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C014FAB0 (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     ?ReadSingleDigitizerToMonitorMappings@@YAXPEAUDEVICEINFO@@PEAXKKPEAU_KEY_VALUE_PARTIAL_INFORMATION@@KPEAG@Z @ 0x1C01C5CE4 (-ReadSingleDigitizerToMonitorMappings@@YAXPEAUDEVICEINFO@@PEAXKKPEAU_KEY_VALUE_PARTIAL_INFORMATI.c)
 *     _GetKeyNameText @ 0x1C0229A04 (_GetKeyNameText.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wcsncpycch(_WORD *a1, __int64 a2, int a3)
{
  _WORD *v3; // r9
  __int64 v4; // rdx
  __int16 v5; // ax

  v3 = a1;
  if ( a3 )
  {
    v4 = a2 - (_QWORD)a1;
    do
    {
      v5 = *(_WORD *)((char *)a1 + v4);
      *a1++ = v5;
      if ( !v5 )
        break;
      --a3;
    }
    while ( a3 );
  }
  return (unsigned int)(a1 - v3);
}

/*
 * XREFs of wcsncpycch @ 0x1C0059B8C
 * Callers:
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0059AA8 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     xxxInterSendMsgEx @ 0x1C006E0C0 (xxxInterSendMsgEx.c)
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C0120C4C (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C013BB3C (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     NtUserRemoteConnect @ 0x1C0153870 (NtUserRemoteConnect.c)
 *     ?ReadSingleDigitizerToMonitorMappings@@YAXPEAUDEVICEINFO@@PEAXKKPEAU_KEY_VALUE_PARTIAL_INFORMATION@@KPEAG@Z @ 0x1C01C5B7C (-ReadSingleDigitizerToMonitorMappings@@YAXPEAUDEVICEINFO@@PEAXKKPEAU_KEY_VALUE_PARTIAL_INFORMATI.c)
 *     _GetKeyNameText @ 0x1C022A594 (_GetKeyNameText.c)
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

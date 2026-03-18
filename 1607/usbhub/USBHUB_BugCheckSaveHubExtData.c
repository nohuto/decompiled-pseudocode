/*
 * XREFs of USBHUB_BugCheckSaveHubExtData @ 0x1C004B020
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

void __fastcall USBHUB_BugCheckSaveHubExtData(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        __int64 ReasonSpecificDataLength)
{
  _DWORD *v5; // rax
  unsigned int v6; // ecx

  if ( (unsigned int)ReasonSpecificDataLength >= 0x30 && WPP_MAIN_CB.Queue.ListEntry.Flink )
  {
    v5 = FdoExt(
           (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
           (__int64)Record,
           (__int64)ReasonSpecificData,
           ReasonSpecificDataLength);
    v6 = (WPP_MAIN_CB.Dpc.TargetInfoAsUlong << 12) + 5280;
    if ( *((_DWORD *)ReasonSpecificData + 2) )
    {
      ReasonSpecificData[4] = v5;
      *((_OWORD *)ReasonSpecificData + 1) = GuidSaveHubExtData;
    }
    *((_DWORD *)ReasonSpecificData + 10) = v6;
  }
}

/*
 * XREFs of USBHUB_BugCheckSavePortArrayData @ 0x1C004AA20
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 */

void __fastcall USBHUB_BugCheckSavePortArrayData(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _OWORD *ReasonSpecificData,
        __int64 ReasonSpecificDataLength)
{
  _DWORD *v5; // rax
  int v6; // edx

  if ( (unsigned int)ReasonSpecificDataLength >= 0x30 && USBHUB_CurrentFdo )
  {
    v5 = FdoExt(USBHUB_CurrentFdo, (__int64)Record, (__int64)ReasonSpecificData, ReasonSpecificDataLength);
    v6 = 2928 * *((unsigned __int8 *)v5 + 2938);
    if ( *((_DWORD *)ReasonSpecificData + 2) )
    {
      ReasonSpecificData[1] = GuidSavePortArrayData;
      *((_QWORD *)ReasonSpecificData + 4) = *((_QWORD *)v5 + 382);
    }
    *((_DWORD *)ReasonSpecificData + 10) = v6;
  }
}

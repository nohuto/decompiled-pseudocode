/*
 * XREFs of ?FxIFRValidateRecord@@YAJPEAU_WDF_IFR_RECORD@@_K1@Z @ 0x1C0072874
 * Callers:
 *     ?FxIFRSendRecordsToWpp@@YAJ_KPEAU_WDF_IFR_HEADER@@@Z @ 0x1C0072590 (-FxIFRSendRecordsToWpp@@YAJ_KPEAU_WDF_IFR_HEADER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxIFRValidateRecord(
        _WDF_IFR_RECORD *IfrRecord,
        unsigned __int64 IfrHeaderMaxValidPtr,
        unsigned __int64 IfrMaxValidPtr)
{
  unsigned __int16 Length; // ax
  char *v6; // rcx

  if ( (unsigned __int64)IfrRecord > IfrHeaderMaxValidPtr )
    return 3221225990LL;
  Length = IfrRecord->Length;
  if ( Length < 0x1Cu )
    return 3221225990LL;
  v6 = (char *)IfrRecord + Length - 1;
  if ( v6 < (char *)IfrRecord )
    return 3221225621LL;
  else
    return IfrMaxValidPtr < (unsigned __int64)v6 ? 0xC0000206 : 0;
}

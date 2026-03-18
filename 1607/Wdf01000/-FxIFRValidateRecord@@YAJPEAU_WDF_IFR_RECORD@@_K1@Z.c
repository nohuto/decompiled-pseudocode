/*
 * XREFs of ?FxIFRValidateRecord@@YAJPEAU_WDF_IFR_RECORD@@_K1@Z @ 0x1C006EF18
 * Callers:
 *     ?FxIFRSendRecordsToWpp@@YAJ_KPEAU_WDF_IFR_HEADER@@@Z @ 0x1C006EC80 (-FxIFRSendRecordsToWpp@@YAJ_KPEAU_WDF_IFR_HEADER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxIFRValidateRecord(
        _WDF_IFR_RECORD *IfrRecord,
        unsigned __int64 IfrHeaderMaxValidPtr,
        unsigned __int64 IfrMaxValidPtr)
{
  unsigned __int16 Length; // ax
  char *v5; // rdx

  if ( (unsigned __int64)IfrRecord > IfrHeaderMaxValidPtr )
    return 3221225990LL;
  Length = IfrRecord->Length;
  if ( Length < 0x1Cu )
    return 3221225990LL;
  v5 = (char *)IfrRecord + Length - 1;
  if ( v5 < (char *)IfrRecord )
    return 3221225621LL;
  else
    return IfrMaxValidPtr < (unsigned __int64)v5 ? 0xC0000206 : 0;
}

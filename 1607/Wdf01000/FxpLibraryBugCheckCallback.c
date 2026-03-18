/*
 * XREFs of FxpLibraryBugCheckCallback @ 0x1C009E120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxpLibraryBugCheckCallback(
        _KBUGCHECK_CALLBACK_REASON Reason,
        _KBUGCHECK_REASON_CALLBACK_RECORD *__formal,
        _GUID *ReasonSpecificData,
        unsigned int ReasonSpecificLength)
{
  unsigned int v4; // edx

  v4 = 56 * FxLibraryGlobals.BugCheckDriverInfoIndex;
  if ( *(_DWORD *)&ReasonSpecificData->Data4[4] < 56 * FxLibraryGlobals.BugCheckDriverInfoIndex )
    v4 = 56 * (*(_DWORD *)&ReasonSpecificData->Data4[4] / 0x38u);
  if ( v4 )
  {
    *(_QWORD *)&ReasonSpecificData[2].Data1 = FxLibraryGlobals.BugCheckDriverInfo;
    *(_DWORD *)ReasonSpecificData[2].Data4 = v4;
    ReasonSpecificData[1] = WdfDumpGuid2;
  }
}

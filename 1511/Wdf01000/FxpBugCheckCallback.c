/*
 * XREFs of FxpBugCheckCallback @ 0x1C008FD30
 * Callers:
 *     <none>
 * Callees:
 *     FxpBugCheckCallbackFilter @ 0x1C008FDD8 (FxpBugCheckCallbackFilter.c)
 */

void __fastcall FxpBugCheckCallback(
        _KBUGCHECK_CALLBACK_REASON Reason,
        _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _GUID *ReasonSpecificData,
        unsigned int ReasonSpecificLength)
{
  unsigned int v4; // ecx
  _FX_DRIVER_GLOBALS *p_Reason; // rbx
  __int64 v7; // rax
  unsigned int v8; // esi

  v4 = *(_DWORD *)&ReasonSpecificData->Data4[4];
  if ( v4 >= 0x1000 )
  {
    p_Reason = (_FX_DRIVER_GLOBALS *)&Record[-8].Reason;
    v7 = *(_QWORD *)&Record[-6].Reason;
    if ( v7 )
    {
      v8 = *(_DWORD *)(v7 + 24) + 72;
      if ( v8 <= v4 )
      {
        if ( FxpBugCheckCallbackFilter((_FX_DRIVER_GLOBALS *)&Record[-8].Reason) )
        {
          FxLibraryGlobals.BestDriverForDumpLog = p_Reason;
LABEL_9:
          *(_QWORD *)&ReasonSpecificData[2].Data1 = p_Reason->WdfLogHeader;
          *(_DWORD *)ReasonSpecificData[2].Data4 = v8;
          ReasonSpecificData[1] = WdfDumpGuid;
          return;
        }
        if ( !FxLibraryGlobals.BestDriverForDumpLog
          && p_Reason->FxTrackDriverForMiniDumpLog
          && *(_FX_DRIVER_GLOBALS **)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + HIDWORD(KeGetPcr()[1].LockArray) * FxLibraryGlobals.DriverTracker.m_EntrySize) == p_Reason )
        {
          goto LABEL_9;
        }
      }
    }
  }
}

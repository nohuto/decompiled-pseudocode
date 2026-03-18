/*
 * XREFs of ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01E17C0
 * Callers:
 *     ValidateDDEConvPair @ 0x1C01E2B94 (ValidateDDEConvPair.c)
 *     _ImpersonateDdeClientWindow @ 0x1C01E2BC8 (_ImpersonateDdeClientWindow.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01E2C4C (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x1C01E2E50 (xxxDDETrackPostHook.c)
 *     xxxDDETrackSendHook @ 0x1C01E3110 (xxxDDETrackSendHook.c)
 * Callees:
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 */

struct tagDDECONV *__fastcall FindDdeConv(struct tagWND *a1, struct tagWND *a2)
{
  struct tagDDECONV *result; // rax
  __int64 v3; // r10

  for ( result = (struct tagDDECONV *)GetProp((__int64)a1, (unsigned __int16)atomDDETrack, 1LL);
        result && *((_QWORD *)result + 6) != v3;
        result = (struct tagDDECONV *)*((_QWORD *)result + 3) )
  {
    ;
  }
  return result;
}

/*
 * XREFs of ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01EA730
 * Callers:
 *     ValidateDDEConvPair @ 0x1C01EBAF4 (ValidateDDEConvPair.c)
 *     _ImpersonateDdeClientWindow @ 0x1C01EBB28 (_ImpersonateDdeClientWindow.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01EBBAC (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x1C01EBDA4 (xxxDDETrackPostHook.c)
 *     xxxDDETrackSendHook @ 0x1C01EC060 (xxxDDETrackSendHook.c)
 * Callees:
 *     _GetProp @ 0x1C006524C (_GetProp.c)
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

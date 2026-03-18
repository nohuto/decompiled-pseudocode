/*
 * XREFs of IsFmtBlocked @ 0x1C01F09F8
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C005DAE0 (xxxInterSendMsgEx.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C0092800 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     FindClipFormat @ 0x1C00DBF5C (FindClipFormat.c)
 *     CountNumClipFormatForIL @ 0x1C01435C0 (CountNumClipFormatForIL.c)
 *     _GetPriorityClipboardFormat @ 0x1C01F0A3C (_GetPriorityClipboardFormat.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C021C090 (NtUserGetUpdatedClipboardFormats.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsFmtBlocked(int a1)
{
  __int64 v1; // rdx

  v1 = 0LL;
  if ( !gcClipFormatExceptionList )
    return 1LL;
  while ( a1 != *(_DWORD *)(gpClipFormatExceptionList + 4 * v1) )
  {
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= gcClipFormatExceptionList )
      return 1LL;
  }
  return 0LL;
}

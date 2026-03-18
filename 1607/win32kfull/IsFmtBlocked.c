/*
 * XREFs of IsFmtBlocked @ 0x1C01E6738
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C0085BE0 (xxxInterSendMsgEx.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C009B338 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     FindClipFormat @ 0x1C00F9130 (FindClipFormat.c)
 *     CountNumClipFormatForIL @ 0x1C0149F10 (CountNumClipFormatForIL.c)
 *     _GetPriorityClipboardFormat @ 0x1C01E677C (_GetPriorityClipboardFormat.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C0215250 (NtUserGetUpdatedClipboardFormats.c)
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

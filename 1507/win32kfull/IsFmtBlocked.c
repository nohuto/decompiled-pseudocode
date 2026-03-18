/*
 * XREFs of IsFmtBlocked @ 0x1C01F0A94
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C006E0C0 (xxxInterSendMsgEx.c)
 *     FindClipFormat @ 0x1C00D651C (FindClipFormat.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00E27BC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     CountNumClipFormatForIL @ 0x1C0117370 (CountNumClipFormatForIL.c)
 *     _GetPriorityClipboardFormat @ 0x1C01F0ADC (_GetPriorityClipboardFormat.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C021C2B0 (NtUserGetUpdatedClipboardFormats.c)
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

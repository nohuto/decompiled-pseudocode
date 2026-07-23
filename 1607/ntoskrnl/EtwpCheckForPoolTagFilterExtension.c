/*
 * XREFs of EtwpCheckForPoolTagFilterExtension @ 0x14049601C
 * Callers:
 *     EtwpStartLogger @ 0x14048F924 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x14053F6F8 (EtwpUpdateTrace.c)
 * Callees:
 *     EtwpUpdateTagFilter @ 0x140495FF4 (EtwpUpdateTagFilter.c)
 *     EtwpGetFlagExtension @ 0x1404960B4 (EtwpGetFlagExtension.c)
 */

__int64 __fastcall EtwpCheckForPoolTagFilterExtension(__int64 a1, __int64 a2, char a3)
{
  __int64 FlagExtension; // rax
  __int64 v5; // r11
  __int64 v6; // rcx
  unsigned __int16 v8; // dx

  FlagExtension = EtwpGetFlagExtension(a2, 4LL);
  if ( !FlagExtension )
  {
    if ( a3 )
    {
      v6 = 5 * v5;
      EtwpPoolTagFilter[2 * v6] = 1;
      *(_DWORD *)&EtwpPoolTagFilter[2 * v6 + 2] = 42;
    }
    return 0LL;
  }
  v8 = (unsigned __int16)(4 * *(_WORD *)FlagExtension - 4) >> 2;
  if ( v8 <= 4u )
  {
    EtwpUpdateTagFilter((_DWORD *)(FlagExtension + 4), v8, (__int64)&EtwpPoolTagFilter[10 * v5]);
    return 0LL;
  }
  return 3221225485LL;
}

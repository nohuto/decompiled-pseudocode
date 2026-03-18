/*
 * XREFs of McGenControlCallbackV2 @ 0x1C0001080
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00355C0 (memset.c)
 *     HUBDRIVER_EtwEnableCallback @ 0x1C0062EC4 (HUBDRIVER_EtwEnableCallback.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall McGenControlCallbackV2(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  unsigned int v8; // ebx
  unsigned __int8 v9; // cl
  __int64 v10; // rdx
  unsigned __int16 v11; // ax

  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        v8 = 0;
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        MatchAnyKeyword = 1LL;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        *((_BYTE *)CallbackContext + 40) = Level;
        for ( *((_DWORD *)CallbackContext + 9) = 1; v8 < *((unsigned __int16 *)CallbackContext + 21); ++v8 )
        {
          v9 = *((_BYTE *)CallbackContext + 40);
          v10 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * v8);
          if ( (*(_BYTE *)(v8 + *((_QWORD *)CallbackContext + 8)) <= v9 || !v9)
            && (!v10
             || (v10 & *((_QWORD *)CallbackContext + 2)) != 0
             && (v10 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3)) )
          {
            *(_QWORD *)&Level = *((_QWORD *)CallbackContext + 6);
            SourceId = (LPCGUID)(v8 & 0x1F);
            *(_DWORD *)(Level + 4 * ((unsigned __int64)v8 >> 5)) |= 1 << (char)SourceId;
          }
          else
          {
            *(_QWORD *)&Level = *((_QWORD *)CallbackContext + 6);
            SourceId = (LPCGUID)(v8 & 0x1F);
            *(_DWORD *)(Level + 4 * ((unsigned __int64)v8 >> 5)) &= ~(1 << (char)SourceId);
          }
        }
      }
    }
    else
    {
      v11 = *((_WORD *)CallbackContext + 21);
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( v11 )
        memset(*((void **)CallbackContext + 6), 0, 4LL * ((v11 - 1) / 32 + 1));
    }
    HUBDRIVER_EtwEnableCallback(SourceId, ControlCode, Level, MatchAnyKeyword);
  }
}

/*
 * XREFs of McGenControlCallbackV2 @ 0x1C0025EA0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0013300 (memset.c)
 *     StorEtwEnableCallback @ 0x1C0034F74 (StorEtwEnableCallback.c)
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
  int v7; // esi
  unsigned int v9; // r11d
  unsigned __int8 v10; // cl
  __int64 v11; // rdx
  unsigned __int16 v12; // ax

  v7 = MatchAnyKeyword;
  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        v9 = 0;
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        *((_BYTE *)CallbackContext + 40) = Level;
        for ( *((_DWORD *)CallbackContext + 9) = 1; v9 < *((unsigned __int16 *)CallbackContext + 21); ++v9 )
        {
          v10 = *((_BYTE *)CallbackContext + 40);
          v11 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * v9);
          if ( (*(_BYTE *)(v9 + *((_QWORD *)CallbackContext + 8)) <= v10 || !v10)
            && (!v11
             || (v11 & *((_QWORD *)CallbackContext + 2)) != 0
             && (v11 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3)) )
          {
            *(_QWORD *)&Level = *((_QWORD *)CallbackContext + 6);
            LODWORD(SourceId) = v9 & 0x1F;
            *(_DWORD *)(Level + 4 * ((unsigned __int64)v9 >> 5)) |= 1 << (char)SourceId;
          }
          else
          {
            *(_QWORD *)&Level = *((_QWORD *)CallbackContext + 6);
            LODWORD(SourceId) = v9 & 0x1F;
            *(_DWORD *)(Level + 4 * ((unsigned __int64)v9 >> 5)) &= ~(1 << (char)SourceId);
          }
        }
      }
    }
    else
    {
      v12 = *((_WORD *)CallbackContext + 21);
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( v12 )
        memset(*((void **)CallbackContext + 6), 0, 4LL * ((v12 - 1) / 32 + 1));
    }
    StorEtwEnableCallback((_DWORD)SourceId, ControlCode, Level, v7);
  }
}

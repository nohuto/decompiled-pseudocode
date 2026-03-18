/*
 * XREFs of McGenControlCallbackV2 @ 0x1C0001000
 * Callers:
 *     <none>
 * Callees:
 *     Etw_EnableCallback @ 0x1C0001140 (Etw_EnableCallback.c)
 *     memset @ 0x1C0011000 (memset.c)
 */

void __stdcall McGenControlCallbackV2(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  unsigned int v11; // r9d
  unsigned __int8 v12; // cl
  __int64 v13; // r8
  _DWORD *v14; // r8
  _DWORD *v15; // r8
  unsigned __int16 v16; // ax

  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        v11 = 0;
        *((_BYTE *)CallbackContext + 40) = Level;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        for ( *((_DWORD *)CallbackContext + 9) = 1; v11 < *((unsigned __int16 *)CallbackContext + 21); ++v11 )
        {
          v12 = *((_BYTE *)CallbackContext + 40);
          v13 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * v11);
          if ( *(_BYTE *)(v11 + *((_QWORD *)CallbackContext + 8)) > v12 && v12
            || v13
            && ((v13 & *((_QWORD *)CallbackContext + 2)) == 0
             || (v13 & *((_QWORD *)CallbackContext + 3)) != *((_QWORD *)CallbackContext + 3)) )
          {
            v14 = (_DWORD *)(*((_QWORD *)CallbackContext + 6) + 4 * ((unsigned __int64)v11 >> 5));
            *v14 &= ~(1 << (v11 & 0x1F));
          }
          else
          {
            v15 = (_DWORD *)(*((_QWORD *)CallbackContext + 6) + 4 * ((unsigned __int64)v11 >> 5));
            *v15 |= 1 << (v11 & 0x1F);
          }
        }
      }
    }
    else
    {
      v16 = *((_WORD *)CallbackContext + 21);
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( v16 )
        memset(*((void **)CallbackContext + 6), 0, 4LL * ((v16 - 1) / 32 + 1));
    }
    Etw_EnableCallback(SourceId, ControlCode, Level, MatchAnyKeyword, MatchAllKeyword, FilterData, CallbackContext);
  }
}

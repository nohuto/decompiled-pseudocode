/*
 * XREFs of xxxEnableScrollBar @ 0x1C014D0EC
 * Callers:
 *     NtUserEnableScrollBar @ 0x1C014D030 (NtUserEnableScrollBar.c)
 *     xxxSBWndProc @ 0x1C0234280 (xxxSBWndProc.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     xxxEnableWindow @ 0x1C0090D00 (xxxEnableWindow.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00CABF0 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D3A34 (safe_cast_fnid_to_PSBWND.c)
 */

__int64 __fastcall xxxEnableScrollBar(__int64 a1, int a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  __int64 v11; // rdx

  if ( a2 != 2 )
    return xxxEnableWndSBArrows((struct tagWND *)a1, a2, a3);
  v5 = safe_cast_fnid_to_PSBWND();
  v7 = v5;
  if ( !v5 )
    return 0LL;
  v8 = *(_DWORD *)(v5 + 380);
  v9 = v8 & 3;
  if ( v9 == (_DWORD)v6 )
    return 0LL;
  if ( (_DWORD)v6 != 3 )
  {
    if ( !(_DWORD)v6 )
    {
      if ( v9 == 3 )
      {
        v10 = v8 & 0xFFFFFFFC;
        v11 = 1LL;
        goto LABEL_13;
      }
LABEL_11:
      _InterlockedIncrement(&glSendMessage);
      return xxxSendTransformableMessageTimeout((struct tagWND *)a1, 228LL, (unsigned int)v6, 0LL, 0, 0, 0LL, 1, 1);
    }
    if ( ((unsigned int)v6 | v9) != 3 )
      goto LABEL_11;
  }
  v10 = v6 | v8;
  v11 = 0LL;
LABEL_13:
  *(_DWORD *)(v7 + 380) = v10;
  if ( (unsigned int)xxxEnableWindow((struct tagWND *)a1, v11, v6, v7) )
    return ((unsigned __int8)~*(_BYTE *)(a1 + 55) >> 3) & 1;
  else
    return *(_BYTE *)(a1 + 55) & 8;
}

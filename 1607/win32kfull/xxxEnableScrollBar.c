/*
 * XREFs of xxxEnableScrollBar @ 0x1C00FFF6C
 * Callers:
 *     NtUserEnableScrollBar @ 0x1C00FFEB0 (NtUserEnableScrollBar.c)
 *     xxxSBWndProc @ 0x1C022CE10 (xxxSBWndProc.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00FFF8C (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     xxxEnableWindow @ 0x1C011B380 (xxxEnableWindow.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01CBCEC (safe_cast_fnid_to_PSBWND.c)
 */

__int64 __fastcall xxxEnableScrollBar(struct tagWND *a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rax
  unsigned int v6; // r8d
  __int64 v7; // r9
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // edx

  if ( a2 != 2 )
    return xxxEnableWndSBArrows(a1, a2, a3);
  v5 = safe_cast_fnid_to_PSBWND();
  v7 = v5;
  if ( !v5 )
    return 0LL;
  v8 = *(_DWORD *)(v5 + 364);
  v9 = v8 & 3;
  if ( v9 == v6 )
    return 0LL;
  if ( v6 != 3 )
  {
    if ( !v6 )
    {
      if ( v9 == 3 )
      {
        v10 = v8 & 0xFFFFFFFC;
        v11 = 1;
        goto LABEL_13;
      }
LABEL_11:
      _InterlockedIncrement(&glSendMessage);
      return xxxSendTransformableMessageTimeout(a1, 228LL, v6, 0LL, 0, 0, 0LL, 1, 1);
    }
    if ( (v6 | v9) != 3 )
      goto LABEL_11;
  }
  v10 = v6 | v8;
  v11 = 0;
LABEL_13:
  *(_DWORD *)(v7 + 364) = v10;
  if ( (unsigned int)xxxEnableWindow(a1, v11) )
    return ((unsigned __int8)~*((_BYTE *)a1 + 55) >> 3) & 1;
  else
    return *((_BYTE *)a1 + 55) & 8;
}

/*
 * XREFs of GetScrollRequestCodeString @ 0x1402F5A28
 * Callers:
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1402F3D98 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1402F43C0 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1402F5658 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxSBTrackInit @ 0x1402F8934 (xxxSBTrackInit.c)
 * Callees:
 *     <none>
 */

const char *__fastcall GetScrollRequestCodeString(int a1, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx

  if ( !a2 )
  {
    if ( !a1 )
      return "SB_LINELEFT";
    v10 = a1 - 1;
    if ( !v10 )
      return "SB_LINERIGHT";
    v11 = v10 - 1;
    if ( !v11 )
      return "SB_PAGELEFT";
    v12 = v11 - 1;
    if ( !v12 )
      return "SB_PAGERIGHT";
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( !v15 )
          return "SB_LEFT";
        v8 = v15 - 1;
        if ( !v8 )
          return "SB_RIGHT";
        goto LABEL_24;
      }
      return "SB_THUMBTRACK";
    }
    return "SB_THUMBPOSITION";
  }
  if ( !a1 )
    return "SB_LINEUP";
  v2 = a1 - 1;
  if ( !v2 )
    return "SB_LINEDOWN";
  v3 = v2 - 1;
  if ( !v3 )
    return "SB_PAGEUP";
  v4 = v3 - 1;
  if ( !v4 )
    return "SB_PAGEDOWN";
  v5 = v4 - 1;
  if ( !v5 )
    return "SB_THUMBPOSITION";
  v6 = v5 - 1;
  if ( !v6 )
    return "SB_THUMBTRACK";
  v7 = v6 - 1;
  if ( !v7 )
    return "SB_TOP";
  v8 = v7 - 1;
  if ( !v8 )
    return "SB_BOTTOM";
LABEL_24:
  if ( v8 == 1 )
    return "SB_ENDSCROLL";
  else
    return "UNKNOWN";
}

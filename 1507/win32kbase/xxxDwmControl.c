/*
 * XREFs of xxxDwmControl @ 0x1C00802A0
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0070294 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007F924 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     VideoPortCalloutThread @ 0x1C00A53F4 (VideoPortCalloutThread.c)
 * Callees:
 *     PostWinlogonMessage @ 0x1C0019A20 (PostWinlogonMessage.c)
 */

__int64 __fastcall xxxDwmControl(int a1, unsigned __int16 a2)
{
  unsigned int v3; // ecx
  bool v4; // zf

  v3 = -1073741823;
  if ( !a1 )
  {
LABEL_4:
    v4 = g_pepDwm == 0LL;
    goto LABEL_5;
  }
  if ( a1 != 1 )
  {
    if ( a1 != 2 )
      return v3;
    goto LABEL_4;
  }
  if ( g_pepDwm )
  {
    v4 = g_bDwmIsShuttingDown == 0;
LABEL_5:
    if ( v4 )
      return v3;
  }
  v3 = PostWinlogonMessage(1030LL, (unsigned __int16)a1 | (a2 << 16));
  if ( (v3 & 0x80000000) == 0 && !a1 )
    g_bDwmIsShuttingDown = 1;
  return v3;
}

/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180006808
 * Callers:
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x1800168F4 (-SetText@CText@@QEAAJPEBG@Z.c)
 *     ?GetAppName@CDwmWinSqm@@QEAAJPEAVCWindowData@@PEAG_K12@Z @ 0x18007AC30 (-GetAppName@CDwmWinSqm@@QEAAJPEAVCWindowData@@PEAG_K12@Z.c)
 *     ?WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z @ 0x18007AF7C (-WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z @ 0x18007E890 (-LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyW(char *a1, __int64 a2, char *a3)
{
  int v3; // r9d
  __int64 v4; // r10
  signed __int64 v5; // r8
  unsigned __int16 v6; // ax

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( !a2 )
      return (unsigned int)v3;
  }
  else
  {
    v3 = 0;
    if ( !a2 )
      goto LABEL_12;
    v4 = 2147483646 - a2;
    v5 = a3 - a1;
    do
    {
      if ( !(v4 + a2) )
        break;
      v6 = *(_WORD *)&a1[v5];
      if ( !v6 )
        break;
      *(_WORD *)a1 = v6;
      a1 += 2;
      --a2;
    }
    while ( a2 );
    if ( !a2 )
    {
LABEL_12:
      a1 -= 2;
      v3 = -2147024774;
    }
  }
  *(_WORD *)a1 = 0;
  return (unsigned int)v3;
}

/*
 * XREFs of MultiUserCleanupDCs @ 0x1C00768DC
 * Callers:
 *     DrvCleanupAndDestroyMDEV @ 0x1C00767B0 (DrvCleanupAndDestroyMDEV.c)
 * Callees:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0037610 (-vCleanupDCs@@YAXK@Z.c)
 */

void MultiUserCleanupDCs()
{
  unsigned int CurrentProcessId; // eax
  _DWORD *SystemArgument2; // r8
  int v2; // edi
  unsigned int v3; // ebx
  unsigned int v4; // r9d
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  int v8; // r8d

  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
  v2 = 0;
  v3 = CurrentProcessId & 0xFFFFFFFC;
  if ( WPP_MAIN_CB.Dpc.SystemArgument2 )
  {
    v4 = gcMaxHmgr;
    v5 = 1LL;
    if ( (unsigned int)gcMaxHmgr > 1 )
    {
      do
      {
        if ( BYTE2(SystemArgument2[6 * (unsigned int)v5 + 3]) == 1
          && (SystemArgument2[6 * (unsigned int)v5 + 2] & 0xFFFFFFFE) != v3 )
        {
          SystemArgument2[6 * (unsigned int)v5 + 2] = v3 ^ (v3 ^ SystemArgument2[6 * (unsigned int)v5 + 2]) & 1;
          ++v2;
          SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
          v4 = gcMaxHmgr;
        }
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < v4 );
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    if ( CurrentProcessWin32Process )
      *(_DWORD *)(CurrentProcessWin32Process + 60) += v2;
    vCleanupDCs(v3, v7, v8);
  }
}

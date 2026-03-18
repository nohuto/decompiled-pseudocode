/*
 * XREFs of ?MultiUserGreHmgOwnAll@@YAXK@Z @ 0x1C0064BD0
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C0063BC4 (MultiUserNtGreCleanup.c)
 * Callees:
 *     <none>
 */

void __fastcall MultiUserGreHmgOwnAll(__int64 a1)
{
  _DWORD *SystemArgument2; // r8
  int v2; // ebx
  int v3; // r10d
  unsigned int v4; // r9d
  unsigned int i; // edx
  __int64 CurrentProcessWin32Process; // rax

  SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
  v2 = 0;
  v3 = a1;
  if ( WPP_MAIN_CB.Dpc.SystemArgument2 )
  {
    v4 = gcMaxHmgr;
    for ( i = 1; i < v4; ++i )
    {
      a1 = 3LL * i;
      if ( (unsigned __int8)(BYTE2(SystemArgument2[6 * i + 3]) - 1) <= 0x1Du )
      {
        SystemArgument2[6 * i + 2] = v3 ^ (v3 ^ SystemArgument2[6 * i + 2]) & 1;
        ++v2;
        SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
        v4 = gcMaxHmgr;
      }
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    if ( CurrentProcessWin32Process )
      *(_DWORD *)(CurrentProcessWin32Process + 60) = v2;
  }
}

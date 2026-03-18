/*
 * XREFs of _lambda_bb68417babed644e5befeb743872af35_::operator() @ 0x1401DAEAC
 * Callers:
 *     ?HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@HAEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140046B9C (-HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@HAEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1400112B8 (-BehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 */

char __fastcall lambda_bb68417babed644e5befeb743872af35_::operator()(__int64 a1, __int64 a2, int a3, char a4)
{
  char v4; // di
  __int64 TopLevelWindow; // rax
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  char v13; // bl

  v4 = 0;
  if ( a4 || *(char *)(*(_QWORD *)(a2 + 40) + 20LL) >= 0 )
  {
    TopLevelWindow = GetTopLevelWindow(a2);
    if ( TopLevelWindow )
    {
      v8 = a3 - 9;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              if ( v11 != 3 )
                return v4;
            }
          }
        }
        if ( ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)0x40) )
        {
          v13 = 1;
          if ( !ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)8) )
            return v13;
        }
      }
      else
      {
        v13 = 1;
        if ( (*(_BYTE *)(*(_QWORD *)(TopLevelWindow + 40) + 30LL) & 1) != 0
          && ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)0x80) )
        {
          return v13;
        }
      }
      return a4;
    }
  }
  return 0;
}

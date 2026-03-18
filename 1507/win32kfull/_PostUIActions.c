/*
 * XREFs of _PostUIActions @ 0x1C0223630
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall PostUIActions(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v1 = (unsigned int)a1;
  if ( (unsigned int)a1 > 2 )
  {
    v3 = 87;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    if ( (unsigned int)IsImmersiveBroker(CurrentProcessWin32Process) )
    {
      v4 = *(_QWORD *)(gptiCurrent + 416LL);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 288);
        if ( v5 )
        {
          if ( v4 == grpdeskRitInput )
            return PostMessage(v5, 0x32Eu, v1, 0LL);
        }
      }
    }
    v3 = 5;
  }
  UserSetLastError(v3);
  return 0LL;
}

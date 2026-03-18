/*
 * XREFs of _PostUIActions @ 0x1C021DB80
 * Callers:
 *     <none>
 * Callees:
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall PostUIActions(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = (unsigned int)a1;
  if ( (unsigned int)a1 > 2 )
  {
    v4 = 87LL;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
    if ( (unsigned int)IsImmersiveBroker(CurrentProcessWin32Process) )
    {
      v5 = *(_QWORD *)(gptiCurrent + 408LL);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 240);
        if ( v6 )
        {
          if ( v5 == grpdeskRitInput )
            return (int)PostMessage(v6, 814LL, v2, 0LL);
        }
      }
    }
    v4 = 5LL;
  }
  UserSetLastError(v4);
  return 0LL;
}

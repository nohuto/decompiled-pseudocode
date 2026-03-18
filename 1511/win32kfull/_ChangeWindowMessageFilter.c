/*
 * XREFs of _ChangeWindowMessageFilter @ 0x1C0092050
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z @ 0x1C00923E0 (-ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z.c)
 *     UIPISQMChangeFilter @ 0x1C009242C (UIPISQMChangeFilter.c)
 *     ?AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C0092680 (-AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     ?RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C0092AEC (-RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 */

__int64 __fastcall ChangeWindowMessageFilter(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // edi
  __int64 CurrentProcessWin32Process; // rsi
  __int64 result; // rax
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v7 = 0;
  v4 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  UIPISQMChangeFilter((struct tagPROCESSINFO *)CurrentProcessWin32Process);
  if ( !gbEnforceUIPI )
    return 1LL;
  result = ValidateChangeMessageFilter((struct tagPROCESSINFO *)CurrentProcessWin32Process, v4);
  if ( (_DWORD)result )
  {
    if ( a2 == 1 )
    {
      return (unsigned int)AddMessageToFilter((void ***)(CurrentProcessWin32Process + 800), v4, 0LL);
    }
    else if ( a2 == 2 )
    {
      v2 = RemoveMessageFromFilter((void ***)(CurrentProcessWin32Process + 800), v4, &v7);
      if ( v2 )
      {
        if ( v7 )
        {
          UserSetLastError(87);
          return 0;
        }
      }
    }
    else
    {
      UserSetLastError(87);
    }
    return v2;
  }
  return result;
}

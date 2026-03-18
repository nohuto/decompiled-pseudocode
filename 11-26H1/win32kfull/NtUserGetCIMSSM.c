/*
 * XREFs of NtUserGetCIMSSM @ 0x1402B2450
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14022E048 (-_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x14034FD00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetCIMSSM(void *a1)
{
  __int64 v2; // rcx
  int CurrentInputMessageSource; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 Src; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  Src = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v9, 1LL);
  if ( a1 && (unsigned int)_GetCurrentInputMessageSource(0LL, (struct tagINPUT_MESSAGE_SOURCE *)&Src) && !Src )
  {
    CurrentInputMessageSource = _GetCurrentInputMessageSource(1LL, (struct tagINPUT_MESSAGE_SOURCE *)&Src);
    if ( CurrentInputMessageSource )
    {
      v4 = (unsigned int)Src;
      v5 = (unsigned int)(Src - 18);
      if ( (v5 & 0xFFFFFFEF) == 0 )
        v4 = 2LL;
      LODWORD(Src) = v4;
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5, v4);
      ProbeForWrite(a1, 8uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
      RtlCopyVolatileMemory(a1, &Src, 8uLL);
    }
  }
  else
  {
    UserSetLastError(87);
    CurrentInputMessageSource = 0;
  }
  UserSessionSwitchLeaveCrit(v2);
  return CurrentInputMessageSource;
}

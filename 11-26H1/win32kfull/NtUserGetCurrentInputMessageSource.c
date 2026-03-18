/*
 * XREFs of NtUserGetCurrentInputMessageSource @ 0x14021E140
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14022E048 (-_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x1402A08EC (Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyVolatileMemory @ 0x14034FD00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetCurrentInputMessageSource(void *a1)
{
  __int64 v2; // rcx
  int CurrentInputMessageSource; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rax
  __int64 CurrentProcessWow64Process; // rax
  __int64 Src; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  Src = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v10, 1LL);
  if ( a1 )
  {
    CurrentInputMessageSource = _GetCurrentInputMessageSource(0, (struct tagINPUT_MESSAGE_SOURCE *)&Src);
    if ( !CurrentInputMessageSource )
      goto LABEL_12;
    if ( (unsigned int)Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline(v2) )
    {
      if ( (_DWORD)Src != 34 )
      {
        if ( (_DWORD)Src != 18 )
        {
LABEL_11:
          CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5, v4);
          ProbeForWrite(a1, 8uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
          RtlCopyVolatileMemory(a1, &Src, 8uLL);
          goto LABEL_12;
        }
        v6 = PtiCurrent(v5);
        if ( (unsigned int)IsTouchpadCapable(v6, 0LL) )
        {
          LODWORD(Src) = 16;
          goto LABEL_11;
        }
      }
    }
    else if ( (((_DWORD)Src - 18) & 0xFFFFFFEF) != 0 )
    {
      goto LABEL_11;
    }
    LODWORD(Src) = 2;
    goto LABEL_11;
  }
  UserSetLastError(87);
  CurrentInputMessageSource = 0;
LABEL_12:
  UserSessionSwitchLeaveCrit(v2);
  return CurrentInputMessageSource;
}

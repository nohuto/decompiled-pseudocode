/*
 * XREFs of _CloseDesktop @ 0x14018B418
 * Callers:
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x14018AF90 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     EditionCloseDesktopEntryPoint @ 0x14018B3D0 (EditionCloseDesktopEntryPoint.c)
 *     xxxCreateDesktopEx @ 0x14018BC74 (xxxCreateDesktopEx.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x14014FB64 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     CloseProtectedHandle @ 0x14018B5B0 (CloseProtectedHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CloseDesktop(unsigned __int64 Handle, KPROCESSOR_MODE a2)
{
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 UserGdiSessionState; // rax
  __int64 v10; // rdx
  PVOID v11; // rdi
  __int64 i; // rcx
  int v13; // ebx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(Handle);
  v5 = (_QWORD *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v5 = (_QWORD *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  Object = 0LL;
  v6 = ObReferenceObjectByHandle((HANDLE)Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, a2, &Object, 0LL);
  v8 = v6;
  if ( v6 < 0 )
  {
    SetLastNtError(v6);
    return v8;
  }
  else
  {
    UserGdiSessionState = W32GetUserGdiSessionState(v7);
    v11 = Object;
    if ( *v5 != *(_QWORD *)(UserGdiSessionState + 40) )
    {
      for ( i = v5[41]; i; i = *(_QWORD *)(i + 696) )
      {
        if ( ((*(_QWORD *)(i + 624) ^ Handle) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
        {
          UserSetLastError(170);
          ObfDereferenceObject(Object);
          return 2147483665LL;
        }
      }
      if ( Object == (PVOID)v5[43] && ((v5[48] ^ Handle) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
      {
        DeferrableUnlockObjectAssignment<tagDESKTOP>(v5 + 43, v10);
        v5[48] = 0LL;
      }
    }
    SetHandleFlag(Handle, 0LL);
    v13 = CloseProtectedHandle((HANDLE)Handle);
    ObfDereferenceObject(v11);
    if ( !gbIgnoreStressedOutStuff && v13 < 0 )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5511LL);
    }
    return 0LL;
  }
}

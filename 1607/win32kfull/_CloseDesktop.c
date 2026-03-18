/*
 * XREFs of _CloseDesktop @ 0x1C00DCA48
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00D9F40 (xxxCreateDesktopEx.c)
 *     NtUserCloseDesktop @ 0x1C00DCA10 (NtUserCloseDesktop.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C012F380 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     CloseProtectedHandle @ 0x1C00DCB44 (CloseProtectedHandle.c)
 */

__int64 __fastcall CloseDesktop(unsigned __int64 Handle, __int64 a2)
{
  KPROCESSOR_MODE v2; // r14
  unsigned int v4; // ebx
  __int64 CurrentProcessWin32Process; // rdi
  int v6; // eax
  unsigned int v7; // ebp
  PVOID v8; // rbp
  __int64 i; // rcx
  ULONG v11; // eax
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  v4 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(Handle, a2);
  v6 = ObReferenceObjectByHandle((HANDLE)Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, v2, &Object, 0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    v11 = RtlNtStatusToDosError(v6);
    UserSetLastError(v11);
    return v7;
  }
  else
  {
    v8 = Object;
    if ( *(_QWORD *)CurrentProcessWin32Process != gpepCSRSS )
    {
      for ( i = *(_QWORD *)(CurrentProcessWin32Process + 288); i; i = *(_QWORD *)(i + 584) )
      {
        if ( ((Handle ^ *(_QWORD *)(i + 512)) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
        {
          UserSetLastError(170LL);
          v4 = -2147483631;
          goto LABEL_11;
        }
      }
      if ( Object == *(PVOID *)(CurrentProcessWin32Process + 304)
        && ((Handle ^ *(_QWORD *)(CurrentProcessWin32Process + 360)) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
      {
        UnlockObjectAssignment(CurrentProcessWin32Process + 304);
        *(_QWORD *)(CurrentProcessWin32Process + 360) = 0LL;
      }
    }
    SetHandleFlag(Handle, 0LL, 0LL);
    CloseProtectedHandle((HANDLE)Handle);
LABEL_11:
    ObfDereferenceObject(v8);
    return v4;
  }
}

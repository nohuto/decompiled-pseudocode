/*
 * XREFs of _CloseDesktop @ 0x1C007D2C4
 * Callers:
 *     NtUserCloseDesktop @ 0x1C007D290 (NtUserCloseDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00DBDE0 (xxxCreateDesktopEx.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C0152ED8 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     CloseProtectedHandle @ 0x1C007D3C0 (CloseProtectedHandle.c)
 */

__int64 __fastcall CloseDesktop(unsigned __int64 Handle, KPROCESSOR_MODE a2)
{
  unsigned int v4; // ebx
  __int64 CurrentProcessWin32Process; // rdi
  int v6; // eax
  unsigned int v7; // ebp
  PVOID v8; // rbp
  __int64 i; // rcx
  ULONG v11; // eax
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(Handle);
  v6 = ObReferenceObjectByHandle((HANDLE)Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, a2, &Object, 0LL);
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
      for ( i = *(_QWORD *)(CurrentProcessWin32Process + 296); i; i = *(_QWORD *)(i + 592) )
      {
        if ( ((Handle ^ *(_QWORD *)(i + 520)) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
        {
          UserSetLastError(170);
          v4 = -2147483631;
          goto LABEL_11;
        }
      }
      if ( Object == *(PVOID *)(CurrentProcessWin32Process + 312)
        && ((Handle ^ *(_QWORD *)(CurrentProcessWin32Process + 368)) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
      {
        UnlockObjectAssignment(CurrentProcessWin32Process + 312);
        *(_QWORD *)(CurrentProcessWin32Process + 368) = 0LL;
      }
    }
    SetHandleFlag(Handle, 0LL, 0LL);
    CloseProtectedHandle((HANDLE)Handle);
LABEL_11:
    ObfDereferenceObject(v8);
    return v4;
  }
}

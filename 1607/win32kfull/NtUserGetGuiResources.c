/*
 * XREFs of NtUserGetGuiResources @ 0x1C01333E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetGuiResources(HANDLE Handle, unsigned int a2)
{
  PVOID v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // edi
  _DWORD *CurrentProcessWin32Process; // rax
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int *v12; // rax
  unsigned int PeakHandleCount; // eax
  NTSTATUS v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  v7 = 0;
  if ( a2 > 4 )
    goto LABEL_11;
  if ( Handle == (HANDLE)-2LL )
  {
    if ( a2 )
    {
      v10 = a2 - 1;
      if ( !v10 )
      {
        v12 = (unsigned int *)giheCount;
        goto LABEL_18;
      }
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 != 2 )
          goto LABEL_10;
        v12 = (unsigned int *)giheCountPeak;
LABEL_18:
        v7 = *v12;
        goto LABEL_10;
      }
      PeakHandleCount = GreGetPeakHandleCount();
    }
    else
    {
      PeakHandleCount = GreGetHandleCount();
    }
    v7 = PeakHandleCount;
    goto LABEL_10;
  }
  if ( Handle == (HANDLE)-1LL )
  {
    CurrentProcessWin32Process = (_DWORD *)PsGetCurrentProcessWin32Process(v6, v5);
    goto LABEL_5;
  }
  v14 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v4 = Object;
  if ( v14 < 0 )
  {
LABEL_11:
    UserSetLastError(87LL);
    goto LABEL_10;
  }
  if ( (unsigned int)PsGetProcessSessionId(Object) != gSessionId )
    goto LABEL_25;
  CurrentProcessWin32Process = (_DWORD *)PsGetProcessWin32Process(v4);
LABEL_5:
  if ( CurrentProcessWin32Process )
  {
    if ( a2 )
    {
      v15 = a2 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 == 2 )
            v7 = CurrentProcessWin32Process[18];
        }
        else
        {
          v7 = CurrentProcessWin32Process[16];
        }
      }
      else
      {
        v7 = CurrentProcessWin32Process[17];
      }
    }
    else
    {
      v7 = CurrentProcessWin32Process[15];
    }
    goto LABEL_8;
  }
LABEL_25:
  UserSetLastError(87LL);
LABEL_8:
  if ( v4 )
    ObfDereferenceObject(v4);
LABEL_10:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}

/*
 * XREFs of xxxConsoleControl @ 0x1C00804C8
 * Callers:
 *     NtUserConsoleControl @ 0x1C0080380 (NtUserConsoleControl.c)
 * Callees:
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C00806E0 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C0080BA4 (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     xxxSetWindowLong @ 0x1C0080CF0 (xxxSetWindowLong.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     SetVDMCursorBounds @ 0x1C01E69B4 (SetVDMCursorBounds.c)
 *     xxxbFullscreenSwitch @ 0x1C01EFDB8 (xxxbFullscreenSwitch.c)
 */

__int64 __fastcall xxxConsoleControl(int a1, struct _CONSOLE_PROCESS_INFO *a2, int a3)
{
  unsigned int v3; // ebx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rbp
  NTSTATUS v12; // eax
  PVOID v13; // rsi
  __int64 ProcessWin32Process; // rax
  __int64 v15; // rax
  unsigned int v16; // esi
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( !a1 )
  {
    if ( a2 )
    {
      if ( a3 != 16 )
        return (unsigned int)-1073741811;
      v16 = 1;
    }
    else
    {
      v16 = 0;
    }
    SetVDMCursorBounds(v16);
    return v3;
  }
  v5 = a1 - 1;
  if ( !v5 )
  {
    if ( a3 == 8 )
      return (unsigned int)xxxUserNotifyConsoleApplication(a2);
    return (unsigned int)-1073741811;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( a3 == 24 )
    {
      xxxbFullscreenSwitch(*(unsigned int *)a2, *((_QWORD *)a2 + 1));
      return v3;
    }
    return (unsigned int)-1073741811;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( a3 == 24 )
    {
      xxxSetConsoleCaretInfo(a2);
      return v3;
    }
    return (unsigned int)-1073741811;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( a3 == 16 )
    {
      v15 = ValidateHwnd(*(_QWORD *)a2);
      if ( v15 )
      {
        *(_DWORD *)(*(_QWORD *)(v15 + 16) + 764LL) = *((_DWORD *)a2 + 2);
        return v3;
      }
    }
    return (unsigned int)-1073741811;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
      return (unsigned int)-1073741821;
    if ( a3 == 16 )
    {
      v11 = ValidateHwnd(*(_QWORD *)a2);
      if ( v11 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v11 + 16) + 384LL) == PsGetCurrentProcessWin32Process(v10) )
        {
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&Object);
          xxxSetWindowLong((struct tagWND *)v11, 1);
          xxxSetWindowLong((struct tagWND *)v11, 1);
          *(_DWORD *)(v11 + 288) |= 0x800u;
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&Object);
        }
        else
        {
          return (unsigned int)-1073741790;
        }
      }
      return v3;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 16 )
    return (unsigned int)-1073741811;
  v12 = ObReferenceObjectByHandle(*(HANDLE *)a2, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v13 = Object;
  v3 = v12;
  if ( v12 >= 0 )
  {
    if ( (unsigned int)PsGetProcessSessionId(Object) == gSessionId )
    {
      ProcessWin32Process = PsGetProcessWin32Process(v13);
      if ( ProcessWin32Process )
      {
        if ( *((_DWORD *)a2 + 2) )
          *(_DWORD *)(ProcessWin32Process + 12) |= 0x4080000u;
        else
          *(_DWORD *)(ProcessWin32Process + 12) &= 0xFBF7FFFF;
      }
      else
      {
        v3 = -1073741816;
      }
    }
    else
    {
      v3 = -1073741811;
    }
    ObfDereferenceObject(v13);
  }
  return v3;
}

/*
 * XREFs of xxxConsoleControl @ 0x1C009A9BC
 * Callers:
 *     NtUserConsoleControl @ 0x1C009A870 (NtUserConsoleControl.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C009ABD4 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C009B08C (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     xxxSetWindowLong @ 0x1C009B210 (xxxSetWindowLong.c)
 *     SetVDMCursorBounds @ 0x1C01DD5C4 (SetVDMCursorBounds.c)
 *     xxxbFullscreenSwitch @ 0x1C01E5A54 (xxxbFullscreenSwitch.c)
 */

__int64 __fastcall xxxConsoleControl(int a1, struct _CONSOLE_PROCESS_INFO *a2, int a3)
{
  unsigned int v3; // ebx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  NTSTATUS v13; // eax
  PVOID v14; // rsi
  __int64 ProcessWin32Process; // rax
  __int64 v16; // rax
  unsigned int v17; // esi
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( !a1 )
  {
    if ( a2 )
    {
      if ( a3 != 16 )
        return (unsigned int)-1073741811;
      v17 = 1;
    }
    else
    {
      v17 = 0;
    }
    SetVDMCursorBounds(v17);
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
      v16 = ValidateHwnd(*(_QWORD *)a2);
      if ( v16 )
      {
        *(_DWORD *)(*(_QWORD *)(v16 + 16) + 764LL) = *((_DWORD *)a2 + 2);
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
      v12 = ValidateHwnd(*(_QWORD *)a2);
      if ( v12 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v12 + 16) + 376LL) == PsGetCurrentProcessWin32Process(v11, v10) )
        {
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&Object);
          xxxSetWindowLong((struct tagWND *)v12, 1);
          xxxSetWindowLong((struct tagWND *)v12, 1);
          *(_DWORD *)(v12 + 288) |= 0x800u;
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
  v13 = ObReferenceObjectByHandle(*(HANDLE *)a2, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v14 = Object;
  v3 = v13;
  if ( v13 >= 0 )
  {
    if ( (unsigned int)PsGetProcessSessionId(Object) == gSessionId )
    {
      ProcessWin32Process = PsGetProcessWin32Process(v14);
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
    ObfDereferenceObject(v14);
  }
  return v3;
}

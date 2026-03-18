/*
 * XREFs of _OpenThreadDesktop @ 0x1401C69B4
 * Callers:
 *     NtUserOpenThreadDesktop @ 0x1401C6910 (NtUserOpenThreadDesktop.c)
 * Callees:
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     CloseProtectedHandle @ 0x14018B5B0 (CloseProtectedHandle.c)
 *     OpenDesktopCompletion @ 0x1401A20EC (OpenDesktopCompletion.c)
 *     GetConsoleDesktop @ 0x1401C6DA0 (GetConsoleDesktop.c)
 */

__int64 __fastcall OpenThreadDesktop(__int64 a1, __int64 a2, int a3, int a4, HANDLE *Object)
{
  unsigned int v7; // ebx
  __int64 v8; // rax
  HANDLE *v9; // r14
  ACCESS_MASK v10; // esi
  __int64 v11; // r10
  __int64 result; // rax
  PRKPROCESS *v13; // rcx
  HANDLE v14; // rax
  NTSTATUS v15; // eax
  HANDLE *v16; // rdi
  NTSTATUS v17; // ebx
  __int64 v18; // rcx
  int v19; // ebx
  NTSTATUS v20; // ecx
  NTSTATUS v21; // eax
  HANDLE Handle; // [rsp+40h] [rbp-10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+48h] [rbp-8h] BYREF

  v7 = a1;
  v8 = PtiFromThreadId(a1);
  v9 = Object;
  v10 = a4 | 0x81;
  HandleInformation = 0LL;
  v11 = v8;
  Handle = 0LL;
  *Object = 0LL;
  if ( v8 )
  {
    v14 = *(HANDLE *)(v8 + 624);
    Handle = v14;
    v13 = *(PRKPROCESS **)(v11 + 456);
  }
  else
  {
    result = GetConsoleDesktop(v7, &Handle, 0LL, &HandleInformation);
    if ( (int)result < 0 )
      return result;
    v13 = (PRKPROCESS *)HandleInformation;
    v14 = Handle;
  }
  if ( !v14 )
    return 0;
  HandleInformation = 0LL;
  KeAttachProcess(*v13);
  Object = 0LL;
  v15 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, (PVOID *)&Object, &HandleInformation);
  v16 = Object;
  v17 = v15;
  KeDetachProcess();
  if ( v17 >= 0 )
  {
    v19 = *(_DWORD *)v16;
    if ( v19 == (unsigned int)W32GetCurrentWin32kSessionId(v18) && ((_DWORD)v16[6] & 0xE) == 0 )
    {
      v21 = ObOpenObjectByPointer(v16, a3 != 0 ? 66 : 64, 0LL, v10, (POBJECT_TYPE)ExDesktopObjectType, 1, &Handle);
      v17 = v21;
      if ( v21 >= 0 )
      {
        v17 = OpenDesktopCompletion((__int64)v16, (__int64)Handle);
        if ( v17 >= 0 )
        {
          if ( (unsigned int)SetHandleFlag(Handle, 1LL) )
          {
            v17 = 0;
            *v9 = Handle;
          }
          else
          {
            CloseProtectedHandle(Handle, 1);
            v17 = -1073741801;
          }
        }
        else
        {
          CloseProtectedHandle(Handle, 1);
          Handle = 0LL;
        }
        goto LABEL_19;
      }
      v20 = v21;
    }
    else
    {
      v20 = -1073741816;
      v17 = -1073741816;
    }
    SetLastNtError(v20);
LABEL_19:
    ObfDereferenceObject(v16);
    return (unsigned int)v17;
  }
  SetLastNtError(v17);
  return (unsigned int)v17;
}

/*
 * XREFs of _OpenThreadDesktop @ 0x1C01E8C58
 * Callers:
 *     NtUserOpenThreadDesktop @ 0x1C021E5F0 (NtUserOpenThreadDesktop.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PtiFromThreadId @ 0x1C0065AC8 (PtiFromThreadId.c)
 *     CloseProtectedHandle @ 0x1C00CEC44 (CloseProtectedHandle.c)
 *     OpenDesktopCompletion @ 0x1C0122050 (OpenDesktopCompletion.c)
 *     GetConsoleDesktop @ 0x1C01E8AE8 (GetConsoleDesktop.c)
 */

__int64 __fastcall OpenThreadDesktop(int a1, char a2, int a3, int a4, HANDLE *Object)
{
  __int64 v9; // rax
  HANDLE *v10; // r14
  ACCESS_MASK v11; // esi
  __int64 v12; // r10
  __int64 result; // rax
  PRKPROCESS *v14; // rcx
  HANDLE v15; // rax
  NTSTATUS v16; // eax
  HANDLE *v17; // rdi
  NTSTATUS v18; // ebx
  ULONG v19; // eax
  NTSTATUS v20; // ecx
  ULONG v21; // edx
  NTSTATUS v22; // eax
  ULONG v23; // eax
  HANDLE Handle; // [rsp+40h] [rbp-10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+48h] [rbp-8h] BYREF

  v9 = PtiFromThreadId(a1);
  v10 = Object;
  v11 = a4 | 0x81;
  v12 = v9;
  *Object = 0LL;
  if ( v9 )
  {
    v15 = *(HANDLE *)(v9 + 512);
    Handle = v15;
    v14 = *(PRKPROCESS **)(v12 + 376);
  }
  else
  {
    result = GetConsoleDesktop(a1, &Handle, 0LL, (__int64 *)&Object);
    if ( (int)result < 0 )
      return result;
    v14 = (PRKPROCESS *)Object;
    v15 = Handle;
  }
  if ( !v15 )
    return 0;
  KeAttachProcess(*v14);
  v16 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, (PVOID *)&Object, &HandleInformation);
  v17 = Object;
  v18 = v16;
  KeDetachProcess();
  if ( v18 >= 0 )
  {
    if ( *(_DWORD *)v17 == gSessionId && ((_DWORD)v17[4] & 0xE) == 0 )
    {
      v21 = 64;
      if ( a3 )
        v21 = 66;
      v22 = ObOpenObjectByPointer(v17, v21, 0LL, v11, (POBJECT_TYPE)ExDesktopObjectType, 1, &Handle);
      v18 = v22;
      if ( v22 >= 0 )
      {
        v18 = OpenDesktopCompletion((__int64)v17, (__int64)Handle, a2);
        if ( v18 >= 0 )
        {
          if ( (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
          {
            v18 = 0;
            *v10 = Handle;
          }
          else
          {
            CloseProtectedHandle(Handle, 1);
            v18 = -1073741801;
          }
        }
        else
        {
          CloseProtectedHandle(Handle, 1);
          Handle = 0LL;
        }
        goto LABEL_21;
      }
      v20 = v22;
    }
    else
    {
      v20 = -1073741816;
      v18 = -1073741816;
    }
    v23 = RtlNtStatusToDosError(v20);
    UserSetLastError(v23);
LABEL_21:
    ObfDereferenceObject(v17);
    return (unsigned int)v18;
  }
  v19 = RtlNtStatusToDosError(v18);
  UserSetLastError(v19);
  return (unsigned int)v18;
}

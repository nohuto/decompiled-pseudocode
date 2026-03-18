/*
 * XREFs of _OpenDesktop @ 0x1C00D9150
 * Callers:
 *     NtUserOpenDesktop @ 0x1C00D90D0 (NtUserOpenDesktop.c)
 *     xxxResolveDesktop @ 0x1C00D93C0 (xxxResolveDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1C01DF6EC (xxxResolveDesktopForWOW.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     OpenDesktopCompletion @ 0x1C00DA998 (OpenDesktopCompletion.c)
 *     CloseProtectedHandle @ 0x1C00DCB44 (CloseProtectedHandle.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@AEAU_SECURITY_QUALITY_OF_SERVICE@@AEAPEAXAEAU_UNICODE_STRING@@AEAPEAG@Z @ 0x1C01E0EE0 (-ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@A.c)
 */

__int64 __fastcall OpenDesktop(struct _OBJECT_ATTRIBUTES *a1, __int64 a2, __int64 a3, int a4, HANDLE *a5)
{
  unsigned int v5; // r15d
  KPROCESSOR_MODE v6; // si
  __int64 v8; // rcx
  NTSTATUS v9; // ebx
  __int64 CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  ULONG v13; // eax
  int v14; // eax
  ULONG v15; // eax
  PVOID v16; // rdi
  ULONG v17; // eax
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  void *v21; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v22; // [rsp+58h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES v23; // [rsp+68h] [rbp-98h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v24; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int16 v25[256]; // [rsp+B0h] [rbp-50h] BYREF

  v5 = a3;
  v6 = 1;
  LOBYTE(a3) = 1;
  v9 = ObOpenObjectByName(a1, ExDesktopObjectType, a3, 0LL, a4 | 0x81u, 0LL, &Handle);
  if ( v9 < 0 )
  {
    CurrentProcess = PsGetCurrentProcess(v8);
    if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    {
      v21 = 0LL;
      Object = 0LL;
      v9 = ProbeAndDeepCaptureWinStaDesktopObjectAttributes(
             0,
             a1,
             (unsigned __int16 (*)[256])v25,
             &v23,
             &v24,
             &v21,
             &v22,
             (unsigned __int16 **)&Object);
      if ( v9 < 0 )
      {
LABEL_8:
        v13 = RtlNtStatusToDosError(v9);
        UserSetLastError(v13);
        return (unsigned int)v9;
      }
      v6 = 0;
      v9 = ObOpenObjectByName(&v23, ExDesktopObjectType, 0LL, 0LL, 193, 0LL, &Handle);
      if ( v21 )
      {
        LOBYTE(v11) = 1;
        SeReleaseSecurityDescriptor(v21, v11, 0LL);
        v21 = 0LL;
      }
      Win32FreePool(Object, v11, v12);
    }
    if ( v9 < 0 )
      goto LABEL_8;
  }
  v14 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, v6, &Object, 0LL);
  v9 = v14;
  if ( v14 < 0 )
  {
    v15 = RtlNtStatusToDosError(v14);
    UserSetLastError(v15);
LABEL_13:
    CloseProtectedHandle(Handle);
    return (unsigned int)v9;
  }
  v16 = Object;
  if ( *(_DWORD *)Object != gSessionId )
  {
    v9 = -1073741816;
    v17 = RtlNtStatusToDosError(-1073741816);
    UserSetLastError(v17);
    ObfDereferenceObject(v16);
    goto LABEL_13;
  }
  v9 = OpenDesktopCompletion(Object, Handle, v5);
  if ( v9 < 0 )
  {
    CloseProtectedHandle(Handle);
    Handle = 0LL;
  }
  ObfDereferenceObject(v16);
  if ( v9 >= 0 )
  {
    if ( (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
    {
      v9 = 0;
      *a5 = Handle;
    }
    else
    {
      CloseProtectedHandle(Handle);
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v9;
}

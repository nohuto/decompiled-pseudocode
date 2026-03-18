/*
 * XREFs of _OpenDesktop @ 0x1C00DAFEC
 * Callers:
 *     NtUserOpenDesktop @ 0x1C00DAF70 (NtUserOpenDesktop.c)
 *     xxxResolveDesktop @ 0x1C00DB260 (xxxResolveDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1C01E882C (xxxResolveDesktopForWOW.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     CloseProtectedHandle @ 0x1C007D3C0 (CloseProtectedHandle.c)
 *     OpenDesktopCompletion @ 0x1C00DCAB8 (OpenDesktopCompletion.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@AEAU_SECURITY_QUALITY_OF_SERVICE@@AEAPEAXAEAU_UNICODE_STRING@@AEAPEAG@Z @ 0x1C01E9E50 (-ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@A.c)
 */

__int64 __fastcall OpenDesktop(struct _OBJECT_ATTRIBUTES *a1, __int64 a2, __int64 a3, int a4, HANDLE *a5)
{
  unsigned int v5; // r15d
  KPROCESSOR_MODE v6; // si
  __int64 v8; // rdx
  __int64 v9; // rcx
  NTSTATUS v10; // ebx
  __int64 CurrentProcess; // rax
  __int64 v12; // rdx
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
  v10 = ObOpenObjectByName(a1, ExDesktopObjectType, a3, 0LL, a4 | 0x81u, 0LL, &Handle);
  if ( v10 < 0 )
  {
    CurrentProcess = PsGetCurrentProcess(v9, v8);
    if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    {
      v21 = 0LL;
      Object = 0LL;
      v10 = ProbeAndDeepCaptureWinStaDesktopObjectAttributes(
              0,
              a1,
              (unsigned __int16 (*)[256])v25,
              &v23,
              &v24,
              &v21,
              &v22,
              (unsigned __int16 **)&Object);
      if ( v10 < 0 )
      {
LABEL_8:
        v13 = RtlNtStatusToDosError(v10);
        UserSetLastError(v13);
        return (unsigned int)v10;
      }
      v6 = 0;
      v10 = ObOpenObjectByName(&v23, ExDesktopObjectType, 0LL, 0LL, 193, 0LL, &Handle);
      if ( v21 )
      {
        LOBYTE(v12) = 1;
        SeReleaseSecurityDescriptor(v21, v12, 0LL);
        v21 = 0LL;
      }
      Win32FreePool(Object);
    }
    if ( v10 < 0 )
      goto LABEL_8;
  }
  v14 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, v6, &Object, 0LL);
  v10 = v14;
  if ( v14 < 0 )
  {
    v15 = RtlNtStatusToDosError(v14);
    UserSetLastError(v15);
LABEL_13:
    CloseProtectedHandle(Handle, v6);
    return (unsigned int)v10;
  }
  v16 = Object;
  if ( *(_DWORD *)Object != gSessionId )
  {
    v10 = -1073741816;
    v17 = RtlNtStatusToDosError(-1073741816);
    UserSetLastError(v17);
    ObfDereferenceObject(v16);
    goto LABEL_13;
  }
  v10 = OpenDesktopCompletion(Object, Handle, v5);
  if ( v10 < 0 )
  {
    CloseProtectedHandle(Handle, v6);
    Handle = 0LL;
  }
  ObfDereferenceObject(v16);
  if ( v10 >= 0 )
  {
    if ( (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
    {
      v10 = 0;
      *a5 = Handle;
    }
    else
    {
      CloseProtectedHandle(Handle, v6);
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v10;
}

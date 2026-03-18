/*
 * XREFs of _OpenDesktop @ 0x14018ACD8
 * Callers:
 *     NtUserOpenDesktop @ 0x14018AC40 (NtUserOpenDesktop.c)
 *     xxxResolveDesktop @ 0x1402A52F0 (xxxResolveDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1402A5F20 (xxxResolveDesktopForWOW.c)
 * Callees:
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     CloseProtectedHandle @ 0x14018B5B0 (CloseProtectedHandle.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1401A20C0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     OpenDesktopCompletion @ 0x1401A20EC (OpenDesktopCompletion.c)
 *     ?ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@AEAU_SECURITY_QUALITY_OF_SERVICE@@AEAPEAXAEAU_UNICODE_STRING@@AEAPEAG@Z @ 0x140200920 (-ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@A.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall OpenDesktop(struct _OBJECT_ATTRIBUTES *a1, __int64 a2, __int64 a3, int a4, HANDLE *a5)
{
  unsigned int v5; // r15d
  KPROCESSOR_MODE v6; // di
  NTSTATUS v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  PVOID v12; // rsi
  int v13; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  void *v17; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v18; // [rsp+58h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES v19; // [rsp+68h] [rbp-98h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v20; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int16 v21[256]; // [rsp+B0h] [rbp-50h] BYREF

  v5 = a3;
  v6 = 1;
  LOBYTE(a3) = 1;
  Handle = 0LL;
  v8 = ObOpenObjectByName(a1, ExDesktopObjectType, a3, 0LL, a4 | 0x81u, 0LL, &Handle);
  if ( v8 < 0 )
  {
    if ( !(unsigned int)IsCurrentProcessDwm() )
      goto LABEL_7;
    *(_QWORD *)&v20.Length = 0LL;
    *(_DWORD *)&v20.ContextTrackingMode = 0;
    v17 = 0LL;
    Object = 0LL;
    memset(&v19, 0, sizeof(v19));
    v18 = 0LL;
    v8 = ProbeAndDeepCaptureWinStaDesktopObjectAttributes(
           0,
           a1,
           (unsigned __int16 (*)[256])v21,
           &v19,
           &v20,
           &v17,
           &v18,
           (unsigned __int16 **)&Object);
    if ( v8 < 0 )
      goto LABEL_7;
    v8 = ObOpenObjectByName(&v19, ExDesktopObjectType, 0LL, 0LL, 193, 0LL, &Handle);
    if ( v17 )
    {
      LOBYTE(v9) = 1;
      SeReleaseSecurityDescriptor(v17, v9, 0LL);
      v17 = 0LL;
    }
    Win32FreePool(Object);
    v6 = 0;
    if ( v8 < 0 )
    {
LABEL_7:
      SetLastNtError(v8);
      return (unsigned int)v8;
    }
  }
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, v6, &Object, 0LL);
  v8 = v10;
  if ( v10 < 0 )
  {
    SetLastNtError(v10);
LABEL_12:
    CloseProtectedHandle(Handle);
    return (unsigned int)v8;
  }
  v12 = Object;
  v13 = *(_DWORD *)Object;
  if ( v13 != (unsigned int)W32GetCurrentWin32kSessionId(v11) )
  {
    v8 = -1073741816;
    SetLastNtError(-1073741816);
    ObfDereferenceObject(v12);
    goto LABEL_12;
  }
  v8 = OpenDesktopCompletion(v12, Handle, v5);
  if ( v8 < 0 )
  {
    CloseProtectedHandle(Handle);
    Handle = 0LL;
  }
  ObfDereferenceObject(v12);
  if ( v8 >= 0 )
  {
    if ( (unsigned int)SetHandleFlag(Handle, 1LL) )
    {
      v8 = 0;
      *a5 = Handle;
    }
    else
    {
      CloseProtectedHandle(Handle);
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v8;
}

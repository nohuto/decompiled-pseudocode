/*
 * XREFs of NtUserCreateDCompositionHwndTarget @ 0x1C00D1DE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C0007BB0 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     NtUserDestroyDCompositionHwndTarget @ 0x1C00D1980 (NtUserDestroyDCompositionHwndTarget.c)
 *     ?AttachWindowCompositionTarget@@YAJPEAUHWND__@@HPEAUCompositionObject@@@Z @ 0x1C00D1F08 (-AttachWindowCompositionTarget@@YAJPEAUHWND__@@HPEAUCompositionObject@@@Z.c)
 *     ?TestWindowForCompositionTarget@@YAJPEAUHWND__@@H@Z @ 0x1C00D20B4 (-TestWindowForCompositionTarget@@YAJPEAUHWND__@@H@Z.c)
 */

__int64 __fastcall NtUserCreateDCompositionHwndTarget(HWND a1, int a2, HANDLE *a3)
{
  unsigned int v6; // ebx
  int v7; // r15d
  NTSTATUS v8; // edi
  HANDLE Handle; // [rsp+40h] [rbp-48h] BYREF
  struct CompositionObject *v11; // [rsp+A8h] [rbp+20h] BYREF

  v6 = 0;
  Handle = (HANDLE)-1LL;
  v7 = 0;
  KeEnterCriticalRegion();
  v8 = TestWindowForCompositionTarget(a1, a2);
  if ( v8 < 0 )
    goto LABEL_11;
  v8 = CreateSharedSystemVisualObject(&v11);
  if ( v8 >= 0 )
  {
    v8 = AttachWindowCompositionTarget(a1, a2, v11);
    if ( v8 >= 0 )
    {
      v7 = 1;
      v8 = CompositionObject::CreateHandle(v11, 1u, 0, 0, &Handle);
    }
    CompositionObject::Release(v11);
  }
  if ( v8 < 0 )
  {
LABEL_11:
    if ( v7 )
      NtUserDestroyDCompositionHwndTarget(a1, a2);
    if ( Handle != (HANDLE)-1LL )
      ObCloseHandle(Handle, 1);
    UserSetLastStatus(v8, 0);
  }
  else
  {
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      a3 = (HANDLE *)W32UserProbeAddress;
    *a3 = Handle;
  }
  KeLeaveCriticalRegion();
  LOBYTE(v6) = v8 >= 0;
  return v6;
}

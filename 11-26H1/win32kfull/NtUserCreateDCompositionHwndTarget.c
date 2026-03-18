/*
 * XREFs of NtUserCreateDCompositionHwndTarget @ 0x1401F6750
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x14001F7CC (UserSetLastStatus.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     NtUserDestroyDCompositionHwndTarget @ 0x1401D2000 (NtUserDestroyDCompositionHwndTarget.c)
 *     ?AttachWindowCompositionTarget@@YAJPEAUHWND__@@KPEAUCompositionObject@@@Z @ 0x1401F68DC (-AttachWindowCompositionTarget@@YAJPEAUHWND__@@KPEAUCompositionObject@@@Z.c)
 *     ?TestWindowForCompositionTarget@@YAJPEAUHWND__@@K@Z @ 0x1402065E0 (-TestWindowForCompositionTarget@@YAJPEAUHWND__@@K@Z.c)
 *     RtlWriteULong64ToUser @ 0x1403E2324 (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall NtUserCreateDCompositionHwndTarget(HWND a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rsi
  int v7; // r12d
  NTSTATUS v8; // edi
  HANDLE Handle; // [rsp+40h] [rbp-48h] BYREF
  struct CompositionObject *v11; // [rsp+A8h] [rbp+20h] BYREF

  v6 = 0LL;
  Handle = (HANDLE)-1LL;
  v7 = 0;
  KeEnterCriticalRegion();
  v8 = 0;
  if ( !a3 )
    v8 = -1073741811;
  if ( v8 < 0 )
    goto LABEL_14;
  if ( a2 >= 3 )
    v8 = -1073741811;
  if ( v8 < 0 )
    goto LABEL_14;
  v8 = TestWindowForCompositionTarget(a1, a2);
  if ( v8 < 0 )
    goto LABEL_14;
  v11 = 0LL;
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
LABEL_14:
    if ( v7 )
      NtUserDestroyDCompositionHwndTarget(a1, a2);
    if ( Handle != (HANDLE)-1LL )
      ObCloseHandle(Handle, 1);
    UserSetLastStatus(v8, 0);
  }
  else
  {
    RtlWriteULong64ToUser(a3, Handle);
  }
  KeLeaveCriticalRegion();
  LOBYTE(v6) = v8 >= 0;
  return v6;
}

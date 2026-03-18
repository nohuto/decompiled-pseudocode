/*
 * XREFs of NtUserDestroyDCompositionHwndTarget @ 0x1C00E95B0
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1C00E9730 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     UserSetLastStatus @ 0x1C0005C30 (UserSetLastStatus.c)
 *     ?DetachWindowCompositionTarget@@YAJPEAUHWND__@@H@Z @ 0x1C00E95FC (-DetachWindowCompositionTarget@@YAJPEAUHWND__@@H@Z.c)
 */

__int64 __fastcall NtUserDestroyDCompositionHwndTarget(HWND a1, int a2)
{
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  NTSTATUS v6; // edi

  KeEnterCriticalRegion();
  v4 = DetachWindowCompositionTarget(a1, a2);
  v5 = 0;
  v6 = v4;
  if ( v4 < 0 )
    UserSetLastStatus(v4, 1);
  KeLeaveCriticalRegion();
  LOBYTE(v5) = v6 >= 0;
  return v5;
}

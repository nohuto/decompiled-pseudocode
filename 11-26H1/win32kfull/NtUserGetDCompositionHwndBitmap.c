/*
 * XREFs of NtUserGetDCompositionHwndBitmap @ 0x1402B32D0
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?GetWindowCompositionVisualBitmap@@YAJPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x14025BA0C (-GetWindowCompositionVisualBitmap@@YAJPEAUHWND__@@PEAPEAUCompositionObject@@@Z.c)
 *     RtlWriteULong64ToUser @ 0x1403E2324 (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall NtUserGetDCompositionHwndBitmap(HWND a1, __int64 a2)
{
  __int64 v4; // rdi
  int WindowCompositionVisualBitmap; // esi
  struct CompositionObject *v7; // [rsp+68h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0LL;
  Handle = (HANDLE)-1LL;
  KeEnterCriticalRegion();
  WindowCompositionVisualBitmap = 0;
  if ( !a2 )
    WindowCompositionVisualBitmap = -1073741811;
  if ( WindowCompositionVisualBitmap >= 0 )
  {
    v7 = 0LL;
    WindowCompositionVisualBitmap = GetWindowCompositionVisualBitmap(a1, &v7);
    if ( WindowCompositionVisualBitmap >= 0 )
    {
      WindowCompositionVisualBitmap = CompositionObject::CreateHandle(v7, 1u, 0, 1, &Handle);
      CompositionObject::Release(v7);
    }
    if ( WindowCompositionVisualBitmap >= 0 )
      RtlWriteULong64ToUser(a2, Handle);
  }
  KeLeaveCriticalRegion();
  LOBYTE(v4) = WindowCompositionVisualBitmap >= 0;
  return v4;
}

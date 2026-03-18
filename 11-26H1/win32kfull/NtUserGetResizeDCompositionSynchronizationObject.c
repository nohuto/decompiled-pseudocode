/*
 * XREFs of NtUserGetResizeDCompositionSynchronizationObject @ 0x1402B4750
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x14001F7CC (UserSetLastStatus.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1401F5B28 (-GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z.c)
 *     RtlWriteULong64ToUser @ 0x1403E2324 (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall NtUserGetResizeDCompositionSynchronizationObject(HWND a1, __int64 a2)
{
  __int64 v4; // rdi
  NTSTATUS v5; // esi
  CompositionObject *v6; // r14
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF
  struct CompositionObject *v9; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0LL;
  Handle = 0LL;
  KeEnterCriticalRegion();
  v5 = 0;
  if ( !a2 )
    v5 = -1073741811;
  if ( v5 < 0 )
    goto LABEL_9;
  v9 = 0LL;
  if ( (unsigned int)GetResizeDCompositionSynchronizationObject(a1, &v9) )
  {
    v6 = v9;
    if ( v9 )
    {
      v5 = CompositionObject::CreateHandle(v9, 1u, 0, 0, &Handle);
      CompositionObject::Release(v6);
    }
  }
  if ( v5 < 0 )
  {
LABEL_9:
    if ( Handle )
      ObCloseHandle(Handle, 1);
    UserSetLastStatus(v5, 0);
  }
  else
  {
    RtlWriteULong64ToUser(a2, Handle);
  }
  KeLeaveCriticalRegion();
  LOBYTE(v4) = v5 >= 0;
  return v4;
}

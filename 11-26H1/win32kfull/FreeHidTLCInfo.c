/*
 * XREFs of FreeHidTLCInfo @ 0x1401703CC
 * Callers:
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x1401702C0 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     ?DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z @ 0x140171D60 (-DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z.c)
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x140172A84 (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     ?DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z @ 0x14029A908 (-DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z.c)
 *     CleanupHidRequestList @ 0x14029A9D0 (CleanupHidRequestList.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeHidTLCInfo(_QWORD *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = 0LL;
  if ( *(struct _KTHREAD **)(UserSessionState + 112) != KeGetCurrentThread() )
  {
    v4 = UserSessionState + 104;
    RIMLockExclusive();
  }
  v5 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v6 = (_QWORD *)a1[1], (_QWORD *)*v6 != a1) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  Win32FreePool(a1);
  if ( v4 )
    RIMUnlockExclusive(v4);
}

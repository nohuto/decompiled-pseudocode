/*
 * XREFs of CleanupHidRequestList @ 0x14029A9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x14009A620 (-FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z.c)
 *     FreeHidTLCInfo @ 0x1401703CC (FreeHidTLCInfo.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1402296F0 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x140236D14 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 */

void __fastcall CleanupHidRequestList(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  char v14; // [rsp+30h] [rbp+8h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
    (RIMLOCKExclusiveIfNeeded *)&v14,
    (struct _KTHREAD **)(UserSessionState + 104));
  v7 = *(_QWORD **)(W32GetUserSessionState(v4, v3) + 192);
  while ( v7 != (_QWORD *)(W32GetUserSessionState(v6, v5) + 192) )
  {
    v6 = v7;
    v7 = (_QWORD *)*v7;
    v8 = *((_DWORD *)v6 + 5) == 0;
    *(_QWORD *)((char *)v6 + 36) = 0LL;
    *((_DWORD *)v6 + 8) = 0;
    *((_DWORD *)v6 + 6) = 0;
    if ( v8 )
      FreeHidTLCInfo(v6, v5);
  }
  while ( 1 )
  {
    v10 = W32GetUserSessionState(v9, v5);
    if ( *(_QWORD *)(v10 + 208) == v10 + 208 )
      break;
    v13 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 208);
    *(_DWORD *)(v13 + 20) = 0;
    FreeHidPageOnlyRequest((struct tagHID_PAGEONLY_REQUEST ***)v13);
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v14);
}

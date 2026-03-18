/*
 * XREFs of FreeWindowStation @ 0x1401B1640
 * Callers:
 *     <none>
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140039C58 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ForceEmptyClipboard @ 0x1401B18B0 (ForceEmptyClipboard.c)
 */

__int64 __fastcall FreeWindowStation(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  void *v3; // rcx
  bool v4; // bl
  struct _RTL_ATOM_TABLE *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  void *v8; // rcx
  struct _EX_RUNDOWN_REF *v9; // rax
  __int64 UserSessionState; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // r15
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD v23[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v24 = 0LL;
  *(_DWORD *)(v2 + 32) |= 0x10u;
  v3 = *(void **)(v2 + 176);
  if ( v3 )
  {
    Win32FreePool(v3);
    *(_QWORD *)(v2 + 176) = 0LL;
    *(_DWORD *)(v2 + 168) = 0;
  }
  if ( (*(_DWORD *)(v2 + 32) & 4) == 0 && *(_QWORD *)(W32GetUserSessionState(v3, a2) + 62960) )
  {
    UserSessionState = W32GetUserSessionState(v3, a2);
    KeSetEvent(*(PRKEVENT *)(UserSessionState + 62960), 1, 0);
    v14 = W32GetUserSessionState(v13, v12);
    ObfDereferenceObject(*(PVOID *)(v14 + 62960));
    *(_QWORD *)(W32GetUserSessionState(v16, v15) + 62960) = 0LL;
  }
  v4 = IS_USERCRIT_OWNED_EXCLUSIVE((__int64)v3, a2);
  if ( !v4 )
    EnterCrit(1LL, 0LL);
  v5 = *(struct _RTL_ATOM_TABLE **)(v2 + 136);
  if ( v5 )
    RtlDestroyAtomTable(v5);
  ForceEmptyClipboard((struct tagWINDOWSTATION *)v2);
  while ( 1 )
  {
    v7 = *(_QWORD *)(v2 + 120);
    if ( !v7 )
      break;
    v24 = *(_QWORD *)(v2 + 120);
    *(_QWORD *)(v2 + 120) = *(_QWORD *)(v7 + 240);
    *(_QWORD *)(v24 + 240) = 0LL;
    *(_DWORD *)(v24 + 380) &= ~0x800000u;
    HMAssignmentUnlock(&v24);
  }
  if ( (*(_DWORD *)(v2 + 32) & 4) == 0 )
  {
    v17 = *(_QWORD *)(v2 + 40);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 24);
      while ( v17 != v18 )
      {
        v19 = *(_QWORD *)(v17 + 16);
        HMMarkObjectDestroy(v17);
        *(_DWORD *)(v17 + 32) |= 0x20000000u;
        v23[0] = v2 + 40;
        v23[1] = v19;
        HMAssignmentLock(v23, 0LL);
        v17 = *(_QWORD *)(v2 + 40);
      }
      HMMarkObjectDestroy(v17);
      *(_DWORD *)(v17 + 32) |= 0x20000000u;
      HMAssignmentUnlock(v2 + 40);
      v22 = W32GetUserSessionState(v21, v20);
      *(_DWORD *)(v22 + 68928) |= 0x10000u;
    }
  }
  v8 = *(void **)(v2 + 160);
  if ( v8 )
  {
    Win32FreePool(v8);
    *(_QWORD *)(v2 + 160) = 0LL;
  }
  v9 = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(v8, v6);
  ExReleaseRundownProtection(v9 + 7940);
  if ( !v4 )
    UserSessionSwitchLeaveCritWithNonPaged();
  return 0LL;
}

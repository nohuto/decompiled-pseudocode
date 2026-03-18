/*
 * XREFs of zzzCalcStartCursorHide @ 0x14028AAB0
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxGetInputEvent @ 0x140022BD0 (xxxGetInputEvent.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1400237A0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     zzzWakeInputIdle @ 0x140025990 (zzzWakeInputIdle.c)
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 *     ?xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z @ 0x1401A4FFC (-xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z.c)
 *     ?OnHideAppStartCursor@@YAXXZ @ 0x1401F2180 (-OnHideAppStartCursor@@YAXXZ.c)
 *     zzzShowStartGlass @ 0x1402A76B8 (zzzShowStartGlass.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x14002AEE0 (zzzUpdateCursorImage.c)
 *     ??0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x140140358 (--0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ?IsSessionGlobalsAreaAllocatedAndFullyInitialized@Umfd@Gre@@YA_NXZ @ 0x1401985DC (-IsSessionGlobalsAreaAllocatedAndFullyInitialized@Umfd@Gre@@YA_NXZ.c)
 */

void __fastcall zzzCalcStartCursorHide(struct W32_PUSH_LOCK *a1, __int64 a2, __int64 a3)
{
  struct W32_PUSH_LOCK *i; // rcx
  int v5; // r14d
  unsigned __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 *v17; // rcx
  __int64 *v18; // rdi
  __int64 v19; // rbx
  __int64 UserSessionState; // rax
  __int64 v21; // rcx
  unsigned int v22; // ebp
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct W32_PUSH_LOCK *v25; // [rsp+40h] [rbp+8h] BYREF

  i = (struct W32_PUSH_LOCK *)0xFFFFF78000000004LL;
  v5 = a2;
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a1 )
  {
    v7 = *(_QWORD *)a1;
    if ( Gre::Umfd::IsSessionGlobalsAreaAllocatedAndFullyInitialized((Gre::Umfd *)0xFFFFF78000000004LL, a2, a3) )
    {
      UmfdHostLifeTimeManager::UmfdHostSharedReadyLock::UmfdHostSharedReadyLock(
        (UmfdHostLifeTimeManager::UmfdHostSharedReadyLock *)&v25,
        a2,
        v8);
      v11 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v10, v9) + 96) + 24176LL);
      i = v25;
      if ( v25 )
      {
        GreReleasePushLockShared(v25);
        v25 = 0LL;
      }
      if ( v11 == v7 )
        __debugbreak();
    }
    if ( (*((_DWORD *)a1 + 3) & 4) == 0 )
    {
      for ( i = *(struct W32_PUSH_LOCK **)(W32GetUserSessionState(i, a2) + 36264);
            i;
            i = (struct W32_PUSH_LOCK *)*((_QWORD *)i + 4) )
      {
        if ( i == a1 )
          goto LABEL_13;
      }
      v12 = *(_QWORD *)(W32GetUserSessionState(0LL, a2) + 36264);
      *((_QWORD *)a1 + 4) = v12;
      *(_QWORD *)(W32GetUserSessionState(v12, v13) + 36264) = a1;
    }
LABEL_13:
    *((_DWORD *)a1 + 6) = v6 + v5;
    *((_DWORD *)a1 + 3) |= 4u;
  }
  *(_DWORD *)(W32GetUserSessionState(i, a2) + 36280) = 0;
  v18 = (__int64 *)(W32GetUserSessionState(v15, v14) + 36264);
  v19 = *v18;
  while ( v19 )
  {
    v17 = (__int64 *)*(unsigned int *)(v19 + 12);
    LOBYTE(v17) = (unsigned __int8)v17 & 6;
    if ( (_BYTE)v17 == 4 )
    {
      UserSessionState = W32GetUserSessionState(v17, v16);
      v22 = *(_DWORD *)(v19 + 24);
      if ( *(_DWORD *)(UserSessionState + 36280) < v22 )
        *(_DWORD *)(W32GetUserSessionState(v21, v16) + 36280) = v22;
      v17 = (__int64 *)(v19 + 32);
      if ( (int)v6 - *(_DWORD *)(v19 + 24) > 0 )
      {
        *(_DWORD *)(v19 + 12) &= ~4u;
        v19 = *v17;
        goto LABEL_22;
      }
      v19 = *v17;
      v18 = v17;
    }
    else
    {
      v19 = *(_QWORD *)(v19 + 32);
LABEL_22:
      *v18 = v19;
    }
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v17, v16) + 36280) <= (unsigned int)v6 )
    *(_DWORD *)(W32GetUserSessionState(v24, v23) + 36280) = 0;
  zzzUpdateCursorImage(v24, v23);
}

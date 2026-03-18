/*
 * XREFs of ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x14002ABE8
 * Callers:
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x14002A488 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     _anonymous_namespace_::MoveCursor @ 0x1400F8EAC (_anonymous_namespace_--MoveCursor.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x1401AE4CC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1401BFAEC (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14002ADCC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     zzzUpdateCursorImage @ 0x14002AEE0 (zzzUpdateCursorImage.c)
 *     GetCursorSizesIndexFromDpi @ 0x14002BC2C (GetCursorSizesIndexFromDpi.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140039C58 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?ChangeSize@Cursor@InputTraceLogging@@SAXII@Z @ 0x1402645A8 (-ChangeSize@Cursor@InputTraceLogging@@SAXII@Z.c)
 */

void __fastcall CCursorSizes::zzzUpdateGlobalCursorSize(CCursorSizes *this, const struct tagPOINT *a2, char a3)
{
  CPushLock *v4; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  char v8; // si
  __int128 v9; // xmm6
  unsigned int v10; // ebp
  unsigned int v11; // ebp
  char v12; // si
  _QWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (CCursorSizes *)((char *)this + 64);
  if ( !a3 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v4, 0LL);
    v6 = (unsigned __int64)*a2;
    if ( a2->x >= *((_DWORD *)this + 2) && (int)v6 < *((_DWORD *)this + 4) )
    {
      v7 = HIDWORD(v6);
      if ( (int)v7 >= *((_DWORD *)this + 3) && (int)v7 < *((_DWORD *)this + 5) )
      {
        if ( PsGetCurrentThreadId() == *((HANDLE *)v4 + 1) )
        {
          *((_QWORD *)v4 + 1) = 0LL;
          ExReleasePushLockExclusiveEx(v4, 0LL);
        }
        else
        {
          ExReleasePushLockSharedEx(v4, 0LL);
        }
        KeLeaveCriticalRegion();
        return;
      }
    }
    CPushLock::ReleaseLock(v4);
  }
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  CLockedInputSpaceRegion::CLockedInputSpaceRegion((CLockedInputSpaceRegion *)v13);
  if ( (unsigned __int8)InputConfig::Mouse::RegionFromPoint(*a2, v13, 0LL) )
  {
    v8 = 1;
    v9 = *(_OWORD *)v13[0];
    v10 = *(unsigned __int16 *)(v13[0] + 20LL);
  }
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)v13[1]);
  if ( v8 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v4, 0LL);
    *((_QWORD *)v4 + 1) = PsGetCurrentThreadId();
    *(_OWORD *)((char *)this + 8) = v9;
    v11 = *((_DWORD *)this + 2 * (unsigned int)GetCursorSizesIndexFromDpi(v10) + 7);
    if ( v11 == *(_DWORD *)this )
    {
      v12 = 0;
    }
    else
    {
      v12 = 1;
      InputTraceLogging::Cursor::ChangeSize(v11, *(_DWORD *)this);
      *(_DWORD *)this = v11;
    }
    CPushLock::ReleaseLock(v4);
    if ( v12 )
    {
      if ( IS_USERCRIT_OWNED_EXCLUSIVE() )
      {
        zzzUpdateCursorImage();
      }
      else
      {
        EnterCrit(1LL, 0LL);
        zzzUpdateCursorImage();
        UserSessionSwitchLeaveCritWithNonPaged();
      }
    }
  }
}

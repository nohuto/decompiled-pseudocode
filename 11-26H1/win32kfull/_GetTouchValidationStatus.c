/*
 * XREFs of _GetTouchValidationStatus @ 0x14025F7C0
 * Callers:
 *     NtUserGetTouchValidationStatus @ 0x1402B4E70 (NtUserGetTouchValidationStatus.c)
 *     ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1402C3608 (-_IsLegacyDevice@Edgy@@YAHPEAX@Z.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140071770 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140071870 (-W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

__int64 __fastcall GetTouchValidationStatus(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  __int16 v4; // ax
  int v5; // ecx
  __int64 UserSessionState; // rax
  struct W32_PUSH_LOCK *Lock; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  struct DEVICEINFO *i; // rdx
  __int64 v12; // rax

  v2 = 3;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 48) == 2 )
    {
      v3 = *(_QWORD *)(a1 + 440);
      if ( *(_WORD *)(v3 + 42) == 13 )
      {
        v4 = *(_WORD *)(v3 + 40);
        if ( v4 == 4 || v4 == 5 )
        {
          v5 = *(_DWORD *)(*(_QWORD *)(a1 + 456) + 368LL);
          if ( (v5 & 8) == 0 )
            return 2 - (unsigned int)((v5 & 0x100) != 0);
        }
      }
    }
  }
  else
  {
    UserSessionState = W32GetUserSessionState(0LL, a2);
    Lock = CBaseInput::TmpGetLock(*(CBaseInput **)(UserSessionState + 16832));
    W32AcquirePushLockSharedEx(Lock, 0);
    v10 = W32GetUserSessionState(v9, v8);
    for ( i = CBaseInput::TmpGetDeviceList(*(CBaseInput **)(v10 + 16832)); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    {
      if ( *((_DWORD *)i + 12) == 2 && (*((_DWORD *)i + 42) & 0x2000) == 0 )
      {
        v12 = *((_QWORD *)i + 55);
        if ( *(_WORD *)(v12 + 42) == 13 && *(_WORD *)(v12 + 40) == 4 )
        {
          if ( (*(_DWORD *)(*((_QWORD *)i + 57) + 368LL) & 0x100) != 0 )
          {
            v2 = 1;
            break;
          }
          v2 = 2;
        }
      }
    }
    W32ReleasePushLockSharedEx(Lock, 0LL);
  }
  return v2;
}

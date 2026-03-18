/*
 * XREFs of NtUserSetThreadInputBlocked @ 0x1C0075FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C007680C (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetThreadInputBlocked(int a1, int a2)
{
  unsigned int v4; // edi
  int v5; // eax
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v10; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = 0;
  v10 = 0;
  ++gdwInAtomicOperation;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)&v10);
  if ( a1 != 4096 )
    goto LABEL_9;
  v5 = *(_DWORD *)(gptiCurrent + 1096LL);
  if ( !a2 )
  {
    if ( (v5 & 0x8000) != 0 )
    {
      v6 = v5 & 0xFFFF7FFF;
      goto LABEL_5;
    }
LABEL_9:
    UserSetLastError(87LL);
    goto LABEL_6;
  }
  if ( (v5 & 0x8000) != 0 )
    goto LABEL_9;
  v6 = v5 | 0x8000;
LABEL_5:
  *(_DWORD *)(gptiCurrent + 1096LL) = v6;
  v4 = 1;
LABEL_6:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v10);
  UserSessionSwitchLeaveCrit(v8, v7);
  return v4;
}

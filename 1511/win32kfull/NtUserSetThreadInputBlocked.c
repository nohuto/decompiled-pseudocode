/*
 * XREFs of NtUserSetThreadInputBlocked @ 0x1C004C380
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetThreadInputBlocked(int a1, int a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v10; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
  if ( a1 != 4096 )
  {
    v4 = 0;
    goto LABEL_10;
  }
  v4 = 0;
  v5 = *(_DWORD *)(gptiCurrent + 1072LL);
  if ( !a2 )
  {
    if ( (v5 & 0x8000) != 0 )
    {
      v6 = v5 & 0xFFFF7FFF;
      goto LABEL_5;
    }
LABEL_10:
    UserSetLastError(87LL);
    goto LABEL_6;
  }
  if ( (v5 & 0x8000) != 0 )
    goto LABEL_10;
  v6 = v5 | 0x8000;
LABEL_5:
  *(_DWORD *)(gptiCurrent + 1072LL) = v6;
  v4 = 1;
LABEL_6:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v10);
  UserSessionSwitchLeaveCrit(v8, v7);
  return v4;
}

/*
 * XREFs of NtUserUnhookWinEvent @ 0x1C004D680
 * Callers:
 *     <none>
 * Callees:
 *     _UnhookWinEvent @ 0x1C004D6D4 (_UnhookWinEvent.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 */

__int64 __fastcall NtUserUnhookWinEvent(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v8; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v8);
  LOBYTE(v2) = 15;
  v3 = HMValidateHandle(a1, v2);
  v4 = 0;
  if ( v3 )
    v4 = UnhookWinEvent(v3);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v8);
  UserSessionSwitchLeaveCrit(v6, v5);
  return v4;
}

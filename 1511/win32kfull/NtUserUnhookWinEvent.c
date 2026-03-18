/*
 * XREFs of NtUserUnhookWinEvent @ 0x1C00DCB70
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     _UnhookWinEvent @ 0x1C00DCBC4 (_UnhookWinEvent.c)
 */

__int64 __fastcall NtUserUnhookWinEvent(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v7; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v7);
  v2 = HMValidateHandle(a1, 15);
  v3 = 0;
  if ( v2 )
    v3 = UnhookWinEvent(v2);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v7);
  UserSessionSwitchLeaveCrit(v5, v4);
  return v3;
}

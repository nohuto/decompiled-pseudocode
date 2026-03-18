/*
 * XREFs of NtUserUnhookWinEvent @ 0x14013BD30
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400272EC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_WINEVENT@@@?$DomainShared@$$V@@QEAA@XZ @ 0x14013BF44 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_WINEVENT@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     _UnhookWinEvent @ 0x14013C0C0 (_UnhookWinEvent.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserUnhookWinEvent(__int64 a1)
{
  int v2; // edi
  struct _HEAD *v3; // rax
  __int64 v4; // rcx
  _BYTE v6[8]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v7; // [rsp+28h] [rbp-50h]
  _BYTE v8[48]; // [rsp+30h] [rbp-48h] BYREF

  EnterSharedCrit(0LL, 1LL);
  v2 = 0;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v6);
  DomainShared<>::DomainExclusive<DLT_WINEVENT>::ObjectLock<>::ObjectLock<>(v8);
  v3 = (struct _HEAD *)HMValidateHandleWithDescriptor(a1, 0xFu);
  if ( v3 )
    v2 = UnhookWinEvent(v3);
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v8);
  if ( v6[0] )
  {
    v4 = v7;
    --*(_DWORD *)(v7 + 28);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}

/*
 * XREFs of NtUserRemoveProp @ 0x140279DB0
 * Callers:
 *     <none>
 * Callees:
 *     InternalRemoveProp @ 0x14000FD98 (InternalRemoveProp.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14018CD00 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z @ 0x14027C710 (-ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z.c)
 */

__int64 __fastcall NtUserRemoveProp(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  _BYTE v9[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  v4 = 0LL;
  EnterSharedCrit(0LL, 0LL);
  v9[0] = 0;
  v10 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v9, v5);
  v6 = ValidatePropWindow(a1, 3LL);
  if ( v6 )
    v4 = InternalRemoveProp(v6, a2, 0);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v9);
  UserSessionSwitchLeaveCrit(v7);
  return v4;
}

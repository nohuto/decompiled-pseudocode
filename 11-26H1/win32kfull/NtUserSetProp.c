/*
 * XREFs of NtUserSetProp @ 0x14027A1C0
 * Callers:
 *     <none>
 * Callees:
 *     InternalSetProp @ 0x14000FF58 (InternalSetProp.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14018CD00 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z @ 0x14027C710 (-ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z.c)
 */

__int64 __fastcall NtUserSetProp(__int64 a1, int a2, __int64 a3)
{
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _BYTE v11[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  v6 = 0;
  EnterSharedCrit(0LL, 0LL);
  v11[0] = 0;
  v12 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v11, v7);
  v8 = ValidatePropWindow(a1, 3LL);
  if ( v8 )
    v6 = InternalSetProp(v8, (unsigned __int16)a2, a3, HIWORD(a2) != 0 ? 2 : 0);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v11);
  UserSessionSwitchLeaveCrit(v9);
  return v6;
}

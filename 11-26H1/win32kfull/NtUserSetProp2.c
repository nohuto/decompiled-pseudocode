/*
 * XREFs of NtUserSetProp2 @ 0x14027A270
 * Callers:
 *     <none>
 * Callees:
 *     InternalSetProp @ 0x14000FF58 (InternalSetProp.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?CaptureAtomName@@YAHPEAU_UNICODE_STRING@@PEAG_K@Z @ 0x140156820 (-CaptureAtomName@@YAHPEAU_UNICODE_STRING@@PEAG_K@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z @ 0x14027C710 (-ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserSetProp2(__int64 a1, struct _UNICODE_STRING *a2, __int64 a3)
{
  int v6; // edi
  __int64 v7; // r14
  __int64 v8; // rax
  struct _RTL_ATOM_TABLE *v9; // rbx
  int v10; // eax
  ULONG v11; // ecx
  __int64 v12; // rcx
  RTL_ATOM v14; // [rsp+20h] [rbp-258h] BYREF
  _QWORD v15[3]; // [rsp+28h] [rbp-250h] BYREF
  unsigned __int16 v16[256]; // [rsp+40h] [rbp-238h] BYREF

  v6 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(v15, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v15);
  v7 = ValidatePropWindow(a1, 3LL);
  if ( v7 && (unsigned int)CaptureAtomName(a2, v16) )
  {
    v8 = UserGlobalAtomTableCallout();
    v9 = (struct _RTL_ATOM_TABLE *)v8;
    if ( !v8 )
    {
      v11 = 5;
      goto LABEL_9;
    }
    v14 = 0;
    v10 = RtlAddAtomToAtomTableEx(v8, v16, &v14, 0LL);
    if ( v10 < 0 || (v6 = InternalSetProp(v7, v14, a3, 2u)) == 0 && (v10 = RtlDeleteAtomFromAtomTable(v9, v14), v10 < 0) )
    {
      v11 = RtlNtStatusToDosError(v10);
LABEL_9:
      UserSetLastError(v11);
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v15);
  UserSessionSwitchLeaveCrit(v12);
  return v6;
}

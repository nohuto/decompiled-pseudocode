/*
 * XREFs of NtUserGetProp2 @ 0x140279820
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     ?CaptureAtomName@@YAHPEAU_UNICODE_STRING@@PEAG_K@Z @ 0x140156820 (-CaptureAtomName@@YAHPEAU_UNICODE_STRING@@PEAG_K@Z.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14018CD00 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z @ 0x14027C710 (-ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetProp2(__int64 a1, struct _UNICODE_STRING *a2)
{
  __int64 Prop; // rdi
  __int64 v5; // rdx
  __int64 v6; // rbx
  struct _RTL_ATOM_TABLE *v7; // rax
  int v8; // eax
  ULONG v9; // ecx
  __int64 v10; // rcx
  USHORT Atom; // [rsp+20h] [rbp-238h] BYREF
  _BYTE v13[8]; // [rsp+28h] [rbp-230h] BYREF
  __int64 v14; // [rsp+30h] [rbp-228h]
  WCHAR AtomName[256]; // [rsp+40h] [rbp-218h] BYREF

  EnterSharedCrit(0LL, 1LL);
  Prop = 0LL;
  v13[0] = 0;
  v14 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v13, v5);
  v6 = ValidatePropWindow(a1, 0LL);
  if ( v6 && (unsigned int)CaptureAtomName(a2, AtomName) )
  {
    v7 = (struct _RTL_ATOM_TABLE *)UserGlobalAtomTableCallout();
    if ( v7 )
    {
      Atom = 0;
      v8 = RtlLookupAtomInAtomTable(v7, AtomName, &Atom);
      if ( v8 >= 0 )
      {
        Prop = GetProp(v6, Atom, 0);
        goto LABEL_9;
      }
      v9 = RtlNtStatusToDosError(v8);
    }
    else
    {
      v9 = 5;
    }
    UserSetLastError(v9);
  }
LABEL_9:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v13);
  UserSessionSwitchLeaveCrit(v10);
  return Prop;
}

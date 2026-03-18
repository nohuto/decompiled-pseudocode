/*
 * XREFs of NtUserGetProp @ 0x140279740
 * Callers:
 *     <none>
 * Callees:
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     ?ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z @ 0x14027C710 (-ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z.c)
 */

__int64 __fastcall NtUserGetProp(__int64 a1, unsigned __int16 a2)
{
  unsigned int v2; // esi
  __int64 Prop; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx

  v2 = a2;
  EnterSharedCrit(0LL, 1LL);
  Prop = 0LL;
  if ( !*(_QWORD *)W32GetUserSessionState(v6, v5) || (*(_DWORD *)(PsGetCurrentThreadWin32Thread(v7) + 24) & 0xC) == 0 )
    KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v8);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 28);
  v10 = ValidatePropWindow(a1, 0LL);
  if ( v10 )
    Prop = GetProp(v10, v2, 0);
  --*(_DWORD *)(CurrentThreadWin32Thread + 28);
  UserSessionSwitchLeaveCrit(v11);
  return Prop;
}

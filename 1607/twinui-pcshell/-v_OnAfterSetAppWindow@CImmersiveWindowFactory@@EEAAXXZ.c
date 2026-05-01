/*
 * XREFs of ?v_OnAfterSetAppWindow@CImmersiveWindowFactory@@EEAAXXZ @ 0x18002BFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x18002D608 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveWindowFactory::v_OnAfterSetAppWindow(HWND *this, __int64 a2)
{
  int CallingProcessHandle; // esi
  DWORD ProcessId; // edi
  char *v5; // rcx
  HANDLE v6; // rcx
  LPVOID v7; // rcx
  DWORD dwProcessId; // [rsp+50h] [rbp+20h] BYREF
  HANDLE Process; // [rsp+58h] [rbp+28h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp+30h] BYREF

  if ( !*((_DWORD *)this + 25) )
  {
    Process = 0LL;
    CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(this, a2, &Process);
    if ( CallingProcessHandle < 0 )
      ProcessId = dwProcessId;
    else
      ProcessId = GetProcessId(Process);
    v5 = (char *)Process;
    Process = 0LL;
    if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v5);
    if ( CallingProcessHandle >= 0 && GetWindowThreadProcessId(this[8], &dwProcessId) && ProcessId == dwProcessId )
    {
      ppv = 0LL;
      if ( CoCreateInstance(
             &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
             0LL,
             0x404u,
             &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
             &ppv) >= 0 )
      {
        Process = 0LL;
        if ( (*(int (__fastcall **)(LPVOID, GUID *, GUID *, HANDLE *))(*(_QWORD *)ppv + 24LL))(
               ppv,
               &GUID_203e0af6_3e82_4224_9e81_1cd9a6fe638b,
               &GUID_203e0af6_3e82_4224_9e81_1cd9a6fe638b,
               &Process) >= 0 )
          (*(void (__fastcall **)(HANDLE, HWND))(*(_QWORD *)Process + 40LL))(Process, this[8]);
        v6 = Process;
        if ( Process )
        {
          Process = 0LL;
          (*(void (__fastcall **)(HANDLE))(*(_QWORD *)v6 + 16LL))(v6);
        }
      }
      v7 = ppv;
      if ( ppv )
      {
        ppv = 0LL;
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
  }
}

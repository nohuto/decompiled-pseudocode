/*
 * XREFs of ?OnKeyChange@RegistryWatcher@@AEAAJXZ @ 0x18000984C
 * Callers:
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x1800094B8 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?OnChangeCallbackStatic@RegistryWatcher@@SAJPEAXK0@Z @ 0x1800097F0 (-OnChangeCallbackStatic@RegistryWatcher@@SAJPEAXK0@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RegistryWatcher::OnKeyChange(RegistryWatcher *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx

  v2 = 0;
  (*((void (__fastcall **)(_QWORD, _QWORD))this + 6))(*((_QWORD *)this + 5), *((_QWORD *)this + 3));
  if ( RegNotifyChangeKeyValue(*((HKEY *)this + 3), 0, 0x10000004u, *((HANDLE *)this + 4), 1) )
  {
    v2 = -2147418113;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v3, &MinInput_Warning_CheckResult, 0, 208, 255);
  }
  return v2;
}

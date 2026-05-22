/*
 * XREFs of ?GetHMonitor@DisplayBinding@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x18001C310
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DisplayBinding::GetHMonitor(DisplayBinding *this, HMONITOR *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx

  v2 = *((_QWORD *)this + 13);
  v3 = v2 == 0 ? 0x8007139F : 0;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v2 + 24LL))(v2, a2);
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq(0LL, &MinInput_Warning_CheckResult, 0, 153, 159);
  }
  return v3;
}

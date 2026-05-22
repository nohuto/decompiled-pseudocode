/*
 * XREFs of ?OnInputReport@HeatDeviceCollection@@MEAAJKPEAXK@Z @ 0x18007D990
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HeatDeviceCollection::OnInputReport(HeatDeviceCollection *this, int a2, void *a3, int a4)
{
  DWORD TickCount; // ebx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-7A8h] BYREF
  _DWORD v13[4]; // [rsp+40h] [rbp-798h] BYREF
  LARGE_INTEGER v14; // [rsp+50h] [rbp-788h]
  int v15; // [rsp+68h] [rbp-770h]
  int v16; // [rsp+300h] [rbp-4D8h]
  void *v17; // [rsp+308h] [rbp-4D0h]

  TickCount = GetTickCount();
  QueryPerformanceCounter(&PerformanceCount);
  v9 = *((_QWORD *)this + 2);
  v14 = PerformanceCount;
  v13[1] = a2;
  v13[0] = 2048;
  v13[2] = TickCount;
  v15 = 1888;
  v17 = a3;
  v16 = a4;
  LODWORD(result) = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v9 + 24LL))(v9, v13);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v11, &MinInput_Warning_CheckResult, 0, 183, result);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  return (unsigned int)result;
}

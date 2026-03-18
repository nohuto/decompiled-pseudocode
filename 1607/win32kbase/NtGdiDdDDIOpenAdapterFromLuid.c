/*
 * XREFs of NtGdiDdDDIOpenAdapterFromLuid @ 0x1C007AC60
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C004B5A0 (UserIsCurrentProcessDwm.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDdDDIOpenAdapterFromLuid(ULONGLONG a1)
{
  __int64 *v2; // rdx
  __int64 v4; // rcx
  __int64 v5; // [rsp+20h] [rbp-18h]

  v2 = (__int64 *)a1;
  if ( a1 >= W32UserProbeAddress )
    v2 = (__int64 *)W32UserProbeAddress;
  v5 = *v2;
  if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu
    || !Object
    || (PVOID)PsGetCurrentProcess(65533LL) == gpepCSRSS
    || UserIsCurrentProcessDwm(v4)
    || MEMORY[0xFFFFF78000000264] != 3
    || (MEMORY[0xFFFFF780000002D0] & 0x110) != 0x10
    || v5 == qword_1C011BC74 )
  {
    return ((__int64 (__fastcall *)(ULONGLONG))qword_1C011B238)(a1);
  }
  else
  {
    return 3221225485LL;
  }
}

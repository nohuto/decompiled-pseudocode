/*
 * XREFs of InternalOpRegionHandler @ 0x1C001CD70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0004BB0 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InternalOpRegionHandler(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 (__fastcall *v6)(_QWORD, __int64); // rax
  unsigned int v7; // ebx
  int v8; // edx

  if ( a6 && (v6 = *(__int64 (__fastcall **)(_QWORD, __int64))(a6 + 16)) != 0LL )
  {
    v7 = v6(a1, a2);
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      3,
      12,
      (__int64)&WPP_4fe430ae90f433c7fddb9329622b7a32_Traceguids,
      v7);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v7;
}

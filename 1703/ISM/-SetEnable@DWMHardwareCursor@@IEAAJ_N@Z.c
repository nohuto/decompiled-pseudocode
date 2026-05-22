/*
 * XREFs of ?SetEnable@DWMHardwareCursor@@IEAAJ_N@Z @ 0x180020BCC
 * Callers:
 *     ?UpdateHardwareCursor@DWMHardwareCursor@@UEAAJII@Z @ 0x1800213D0 (-UpdateHardwareCursor@DWMHardwareCursor@@UEAAJII@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMHardwareCursor::SetEnable(DWMHardwareCursor *this, char a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  _BYTE v8[64]; // [rsp+30h] [rbp-58h] BYREF

  v8[24] = a2;
  v3 = *((_QWORD *)this + 15);
  v8[0] = 9;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _BYTE *, int))(*(_QWORD *)v3 + 152LL))(
         v3,
         *((unsigned int *)this + 42),
         4LL,
         v8,
         64);
  v6 = v4;
  if ( v4 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v5, &MinInput_Warning_CheckResult, 0, 208, v4);
  return v6;
}

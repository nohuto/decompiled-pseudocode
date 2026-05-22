/*
 * XREFs of ?QueryInterface@Win32kInterop@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000B120
 * Callers:
 *     ?QueryInterface@Win32kInterop@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000CD00 (-QueryInterface@Win32kInterop@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@Win32kInterop@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000CD10 (-QueryInterface@Win32kInterop@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32kInterop::QueryInterface(Win32kInterop *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( *(_OWORD *)a2 == *(_OWORD *)&GUID_00000000_0000_0000_c000_000000000046 )
  {
    (*(void (__fastcall **)(Win32kInterop *))(*(_QWORD *)this + 8LL))(this);
    *a3 = (char *)this + 16;
  }
  else
  {
    v3 = -2147467262;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 135, 2);
  }
  return v3;
}

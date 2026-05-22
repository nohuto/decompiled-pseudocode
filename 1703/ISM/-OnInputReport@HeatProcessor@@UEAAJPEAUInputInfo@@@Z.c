/*
 * XREFs of ?OnInputReport@HeatProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18003B9F0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HeatProcessor::OnInputReport(HeatProcessor *this, struct InputInfo *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  _DWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h]
  __int64 v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+48h] [rbp-10h]

  if ( *(_DWORD *)a2 == 2048 )
  {
    v2 = *((_QWORD *)this + 7);
    if ( v2 )
    {
      v6[0] = *((_DWORD *)a2 + 1);
      v7 = *((_QWORD *)a2 + 2);
      v6[1] = *((_DWORD *)a2 + 2);
      v8 = *((_QWORD *)a2 + 89);
      v9 = *((_DWORD *)a2 + 176);
      v3 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v2 + 40LL))(v2, v6);
      if ( v3 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v4, &MinInput_Warning_CheckResult, 0, 235, v3);
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 218, 87);
  }
  return 0LL;
}

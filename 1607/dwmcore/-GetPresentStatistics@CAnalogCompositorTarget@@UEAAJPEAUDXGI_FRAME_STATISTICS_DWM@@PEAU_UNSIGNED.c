/*
 * XREFs of ?GetPresentStatistics@CAnalogCompositorTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1801670E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnalogCompositorTarget::GetPresentStatistics(
        CAnalogCompositorTarget *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2,
        struct _UNSIGNED_RATIO *a3)
{
  __int64 v6; // rax
  _DWORD v8[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]

  (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)xmmword_1801F03A0 + 88LL))(xmmword_1801F03A0, v8);
  *(_DWORD *)a2 = v8[0];
  *((_DWORD *)a2 + 1) = v8[1];
  *((_DWORD *)a2 + 4) = v8[2];
  v6 = v9;
  *((_QWORD *)a2 + 3) = v9;
  *((_QWORD *)a2 + 1) = v6;
  *a3 = *(struct _UNSIGNED_RATIO *)(*((_QWORD *)this + 6) + 272LL);
  return 0LL;
}

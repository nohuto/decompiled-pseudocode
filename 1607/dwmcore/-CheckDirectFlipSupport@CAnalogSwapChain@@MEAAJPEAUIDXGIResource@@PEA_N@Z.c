/*
 * XREFs of ?CheckDirectFlipSupport@CAnalogSwapChain@@MEAAJPEAUIDXGIResource@@PEA_N@Z @ 0x1801680F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnalogSwapChain::CheckDirectFlipSupport(CAnalogSwapChain *this, struct IDXGIResource *a2, bool *a3)
{
  __int64 v6; // [rsp+20h] [rbp-48h] BYREF
  _DWORD v7[12]; // [rsp+28h] [rbp-40h] BYREF

  v6 = 0LL;
  *a3 = 0;
  if ( ((__int64 (__fastcall *)(struct IDXGIResource *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
         &v6) >= 0 )
  {
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v6 + 80LL))(v6, v7);
    if ( v7[0] == *((_DWORD *)this + 32) && v7[1] == *((_DWORD *)this + 33) && v7[4] == *((_DWORD *)this + 36) )
      *a3 = 1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return 0LL;
}

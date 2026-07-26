/*
 * XREFs of ?NdisPDPIProviderControl@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_PROVIDER_CONTROL_CODE@@PEAXK3KPEAK@Z @ 0x1C00DF9D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qLLS @ 0x1C006D374 (WPP_SF_qLLS.c)
 *     WPP_SF_qLLd @ 0x1C006D438 (WPP_SF_qLLd.c)
 */

__int64 __fastcall NdisPDPIProviderControl(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  int v10; // ebp
  const wchar_t *v12; // rax
  unsigned int v13; // ebx
  __int64 v15; // [rsp+20h] [rbp-38h]
  __int64 v16; // [rsp+28h] [rbp-30h]

  v10 = a2;
  if ( (unsigned __int8)byte_1C0085324 >= 4u )
  {
    v12 = L"PASS_THROUGH";
    if ( !*(_BYTE *)(a1 + 96) )
      v12 = L" ";
    WPP_SF_qLLS((__int64)L" ", a2, a1, a2, a3, v12);
  }
  if ( a3 == 1 )
  {
    a2 = 1LL;
    if ( v10 != 1 || a4 || a5 || !a8 )
      v13 = -1073741811;
    else
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _DWORD, __int64, int, __int64))(*(_QWORD *)(a1 + 88) + 96LL))(
              *(_QWORD *)(a1 + 80),
              1LL,
              1LL,
              0LL,
              0,
              a6,
              a7,
              a8);
  }
  else
  {
    v13 = -1073741637;
  }
  if ( (unsigned __int8)byte_1C0085324 >= 4u )
  {
    LODWORD(v16) = v13;
    LODWORD(v15) = a3;
    WPP_SF_qLLd(0x3Cu, a2, a1, v10, v15, v16);
  }
  return v13;
}

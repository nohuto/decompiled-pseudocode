/*
 * XREFs of ?IsStale@CEndpointCharacteristics@@QEAAHXZ @ 0x18004EFF4
 * Callers:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180008370 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGPEAPEAVCEndpointChara.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::IsStale(CEndpointCharacteristics *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  __int64 v4; // rbx
  PROPVARIANT pvar; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  pvar = 0LL;
  v7 = 0LL;
  v2 = *((_QWORD *)this + 4);
  v3 = 0;
  v8 = 0LL;
  v4 = 0LL;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(
         v2,
         &PKEY_MMDEVAPI_ActiveTime,
         &pvar) >= 0
    && (_WORD)pvar == 21 )
  {
    v4 = v7;
  }
  PropVariantClear(&pvar);
  LOBYTE(v3) = *((_QWORD *)this + 47) != v4;
  return v3;
}

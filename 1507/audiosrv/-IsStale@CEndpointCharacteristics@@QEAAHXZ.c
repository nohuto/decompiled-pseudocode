/*
 * XREFs of ?IsStale@CEndpointCharacteristics@@QEAAHXZ @ 0x180066154
 * Callers:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180023D70 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::IsStale(CEndpointCharacteristics *this)
{
  __int64 v1; // rdi
  unsigned int v3; // ebp
  __int64 v4; // rsi
  PROPVARIANT pvar; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v1 = *((_QWORD *)this + 4);
  pvar = 0LL;
  v7 = 0LL;
  v3 = 0;
  v8 = 0LL;
  v4 = 0LL;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v1 + 40LL))(
         v1,
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

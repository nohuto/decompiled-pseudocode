/*
 * XREFs of ?GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ @ 0x1800A8DA4
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18003B4FC (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetOemEnginePeriodicity(CEndpointCharacteristics *this)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  PROPVARIANT pvar; // [rsp+20h] [rbp-20h] BYREF
  __int64 v6; // [rsp+28h] [rbp-18h]
  __int64 *v7; // [rsp+30h] [rbp-10h]

  v1 = *((_QWORD *)this + 4);
  pvar = 0LL;
  v6 = 0LL;
  v3 = 0LL;
  v7 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v1 + 40LL))(
         v1,
         &PKEY_AudioEngine_PeriodUseDefault,
         &pvar) >= 0
    && (_WORD)pvar == 11
    && (_WORD)v6 == 0xFFFF )
  {
    v3 = 100000LL;
  }
  else
  {
    PropVariantClear(&pvar);
    if ( (*(int (__fastcall **)(_QWORD, const struct _tagpropertykey *, PROPVARIANT *))(**((_QWORD **)this + 4) + 40LL))(
           *((_QWORD *)this + 4),
           &PKEY_AudioEngine_OEMPeriod,
           &pvar) >= 0
      && (_WORD)pvar == 65
      && (_DWORD)v6 == 8
      && (unsigned __int64)(*v7 - 50000) <= 0xC350 )
    {
      v3 = *v7;
    }
  }
  PropVariantClear(&pvar);
  return v3;
}

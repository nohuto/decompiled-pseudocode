/*
 * XREFs of ?ClearApplicationDefaultEndpoint@CPolicyConfig@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180084A90
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180068054 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?RemoveKey@?$CAtlMap@KV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@K@2@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@QEAA_NK@Z @ 0x180087DA8 (-RemoveKey@-$CAtlMap@KV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElement.c)
 */

__int64 __fastcall CPolicyConfig::ClearApplicationDefaultEndpoint(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned int a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a3,
        unsigned int a4)
{
  __int64 v5; // rbp
  LPVOID v8; // rbx
  HRESULT v9; // esi
  __int64 v10; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v13; // [rsp+38h] [rbp-20h]
  LPVOID ppv; // [rsp+60h] [rbp+8h] BYREF

  v5 = a3;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this + 3);
  v8 = 0LL;
  ppv = 0LL;
  if ( (unsigned int)v5 > 2 )
  {
    v9 = -2147024809;
  }
  else
  {
    if ( a4 > 1 )
    {
      v9 = -2147024809;
      goto LABEL_12;
    }
    v9 = CoCreateInstance(
           &GUID_06cca63e_9941_441b_b004_39f999ada412,
           0LL,
           0x17u,
           &GUID_8079001f_4cbb_4eb9_85df_a7e5eb250e7d,
           &ppv);
    if ( v9 >= 0 )
    {
      v10 = 8 * v5 + 20;
      if ( a4 )
        v10 = 8 * v5 + 47;
      ATL::CAtlMap<unsigned long,ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::RemoveKey(
        (char *)this + 8 * v5 + 8 * v10,
        a2);
      v9 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, __int16 *, unsigned int))(*(_QWORD *)ppv + 104LL))(
             ppv,
             a4,
             (unsigned int)v5,
             &word_1800B1B90,
             a2);
    }
    v8 = ppv;
  }
  if ( v8 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v8 + 16LL))(v8);
LABEL_12:
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v9;
}

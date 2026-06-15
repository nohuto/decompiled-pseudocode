/*
 * XREFs of ?SetNeverSetAsDefaultProperty@@YAJPEAUIMMDevice@@H@Z @ 0x180088DD8
 * Callers:
 *     ?SetEndpointAbilityToBeDefault@CPolicyConfig@@UEAAJPEBGH@Z @ 0x180088830 (-SetEndpointAbilityToBeDefault@CPolicyConfig@@UEAAJPEBGH@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SetNeverSetAsDefaultProperty(struct IMMDevice *a1, int a2)
{
  int v3; // esi
  PROPVARIANT pvar; // [rsp+28h] [rbp-18h] BYREF
  __int64 v6; // [rsp+30h] [rbp-10h]
  __int64 v7; // [rsp+38h] [rbp-8h]
  __int64 v8; // [rsp+60h] [rbp+20h] BYREF

  v8 = 0LL;
  pvar = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( a1 )
  {
    v3 = ((__int64 (__fastcall *)(struct IMMDevice *, __int64, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 1LL, &v8);
    if ( v3 >= 0 )
    {
      LOWORD(pvar) = 19;
      if ( a2 )
        LOWORD(v6) = 263;
      else
        LOWORD(v6) = 0;
      v3 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v8 + 48LL))(
             v8,
             &PKEY_AudioDevice_NeverSetAsDefaultEndpoint,
             &pvar);
    }
  }
  else
  {
    v3 = -2147024809;
  }
  PropVariantClear(&pvar);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v3;
}

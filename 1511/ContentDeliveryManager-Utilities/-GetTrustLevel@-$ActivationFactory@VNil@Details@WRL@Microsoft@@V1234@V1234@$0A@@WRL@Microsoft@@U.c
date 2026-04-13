/*
 * XREFs of ?GetTrustLevel@?$ActivationFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x180007980
 * Callers:
 *     <none>
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    *a2 = (*(__int64 (__fastcall **)(_QWORD))(v2 + 16))(*(_QWORD *)(v2 + 16));
  else
    *a2 = 2;
  return 0LL;
}

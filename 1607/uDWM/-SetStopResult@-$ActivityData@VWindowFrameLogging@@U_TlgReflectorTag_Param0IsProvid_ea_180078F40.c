/*
 * XREFs of ?SetStopResult@?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x180078F40
 * Callers:
 *     ?Destroy@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180077D94 (-Destroy@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800790D0 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvide.c)
 * Callees:
 *     <none>
 */

bool __fastcall wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        __int64 a1,
        int a2,
        _DWORD *a3)
{
  int v3; // r10d

  v3 = *(_DWORD *)(a1 + 72);
  if ( v3 < 1 )
    __fastfail(7u);
  if ( *(int *)(a1 + 76) >= 0 )
    *(_DWORD *)(a1 + 76) = a2;
  if ( a3 )
    *a3 = *(_DWORD *)(a1 + 76);
  *(_DWORD *)(a1 + 72) = v3 - 1;
  return v3 == 1;
}

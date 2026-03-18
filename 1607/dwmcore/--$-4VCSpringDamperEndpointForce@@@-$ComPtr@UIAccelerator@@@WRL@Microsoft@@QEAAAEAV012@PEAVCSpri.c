/*
 * XREFs of ??$?4VCSpringDamperEndpointForce@@@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@QEAAAEAV012@PEAVCSpringDamperEndpointForce@@@Z @ 0x18015D4C0
 * Callers:
 *     ?CheckInertiaModifiers@CScrollAnimation@@AEAA?AW4InertiaModifierType@@XZ @ 0x18015DB38 (-CheckInertiaModifiers@CScrollAnimation@@AEAA-AW4InertiaModifierType@@XZ.c)
 *     ?ValueAtTimeDefault@CScrollAnimation@@IEAAMMPEA_N@Z @ 0x18015EF40 (-ValueAtTimeDefault@CScrollAnimation@@IEAAMMPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180007904 (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A5868 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 (__fastcall ****__fastcall Microsoft::WRL::ComPtr<IAccelerator>::operator=<CSpringDamperEndpointForce>(
        __int64 (__fastcall ****a1)(_QWORD),
        __int64 (__fastcall ***a2)(_QWORD)))(_QWORD)
{
  __int64 (__fastcall ***v5)(_QWORD); // [rsp+30h] [rbp+8h] BYREF

  v5 = a2;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v5);
  v5 = *a1;
  *a1 = a2;
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&v5);
  return a1;
}

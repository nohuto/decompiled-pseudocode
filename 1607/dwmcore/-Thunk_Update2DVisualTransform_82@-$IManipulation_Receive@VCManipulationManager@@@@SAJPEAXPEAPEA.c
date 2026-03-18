/*
 * XREFs of ?Thunk_Update2DVisualTransform_82@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x18016B4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall IManipulation_Receive<CManipulationManager>::Thunk_Update2DVisualTransform_82(
        __int64 a1,
        __int64 a2)
{
  __int128 *v2; // r8
  __int128 v3; // xmm0
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  v2 = *(__int128 **)(a2 + 8);
  v3 = *v2;
  v4 = **(_QWORD **)a2;
  v6 = v4;
  *(_OWORD *)(v4 + 344) = v3;
  *(_OWORD *)(v4 + 360) = v2[1];
  *(_OWORD *)(v4 + 376) = v2[2];
  *(_OWORD *)(v4 + 392) = v2[3];
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v6);
  return 0LL;
}

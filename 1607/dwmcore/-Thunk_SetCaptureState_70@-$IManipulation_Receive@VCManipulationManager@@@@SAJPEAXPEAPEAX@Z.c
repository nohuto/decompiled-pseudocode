/*
 * XREFs of ?Thunk_SetCaptureState_70@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x18016B4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulation@@@WRL@Microsoft@@IEAAKXZ @ 0x18014AD54 (-InternalRelease@-$ComPtr@VCManipulation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Attach@?$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z @ 0x18016A9E8 (-Attach@-$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z.c)
 */

__int64 __fastcall IManipulation_Receive<CManipulationManager>::Thunk_SetCaptureState_70(__int64 a1, __int64 a2)
{
  int *v2; // rax
  __int64 *v3; // rdx
  int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  v2 = *(int **)(a2 + 8);
  v3 = *(__int64 **)a2;
  v6 = 0LL;
  v4 = *v2;
  Microsoft::WRL::ComPtr<CManipulation>::Attach(&v6, *v3);
  *(_DWORD *)(v6 + 420) = v4;
  Microsoft::WRL::ComPtr<CManipulation>::InternalRelease(&v6);
  return 0LL;
}

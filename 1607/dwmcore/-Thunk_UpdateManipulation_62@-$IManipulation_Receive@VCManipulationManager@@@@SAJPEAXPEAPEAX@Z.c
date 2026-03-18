/*
 * XREFs of ?Thunk_UpdateManipulation_62@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x18016B550
 * Callers:
 *     <none>
 * Callees:
 *     ?Update@CManipulation@@QEAAJPEAUManipulationData@@@Z @ 0x180145EE8 (-Update@CManipulation@@QEAAJPEAUManipulationData@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCManipulation@@@WRL@Microsoft@@IEAAKXZ @ 0x18014AD54 (-InternalRelease@-$ComPtr@VCManipulation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Attach@?$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z @ 0x18016A9E8 (-Attach@-$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z.c)
 */

__int64 __fastcall IManipulation_Receive<CManipulationManager>::Thunk_UpdateManipulation_62(
        CManipulation *a1,
        __int64 a2)
{
  struct ManipulationData *v2; // rbx
  __int64 *v3; // rdx
  CManipulation *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  v2 = *(struct ManipulationData **)(a2 + 8);
  v3 = *(__int64 **)a2;
  v5 = 0LL;
  Microsoft::WRL::ComPtr<CManipulation>::Attach((__int64 *)&v5, *v3);
  LODWORD(v2) = CManipulation::Update(v5, v2);
  Microsoft::WRL::ComPtr<CManipulation>::InternalRelease((__int64 *)&v5);
  return (unsigned int)v2;
}

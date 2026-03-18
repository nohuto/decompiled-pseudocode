/*
 * XREFs of ?IsBufferingOutput@CInteractionProcessor@@QEAA_NW4InputType@@@Z @ 0x18000DDE0
 * Callers:
 *     ?IsBufferingOutput@CInteraction@@UEAA_NW4InputType@@@Z @ 0x18000D940 (-IsBufferingOutput@CInteraction@@UEAA_NW4InputType@@@Z.c)
 *     ?IsBufferingOutput@CInteractionRoot@@UEAA_NW4InputType@@@Z @ 0x180171140 (-IsBufferingOutput@CInteractionRoot@@UEAA_NW4InputType@@@Z.c)
 * Callees:
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x18000DD9C (-GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrappe.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CInteractionProcessor::IsBufferingOutput(__int64 a1, int a2)
{
  char v2; // bl
  int v3; // edi
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v3 = a2;
  if ( !a2 )
    v3 = *(_DWORD *)(a1 + 388);
  v6 = 0LL;
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v6);
  CInteractionProcessor::GetInteractionContext((_QWORD *)a1, v3, &v6);
  if ( v6 )
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 80LL))(v6);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v6);
  return v2;
}

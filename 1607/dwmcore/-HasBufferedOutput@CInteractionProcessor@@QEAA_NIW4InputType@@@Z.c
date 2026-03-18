/*
 * XREFs of ?HasBufferedOutput@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x18016E96C
 * Callers:
 *     ?HasBufferedOutput@CInteraction@@UEAA_NIW4InputType@@@Z @ 0x180145390 (-HasBufferedOutput@CInteraction@@UEAA_NIW4InputType@@@Z.c)
 *     ?HasBufferedOutput@CInteractionRoot@@UEAA_NIW4InputType@@@Z @ 0x180170F40 (-HasBufferedOutput@CInteractionRoot@@UEAA_NIW4InputType@@@Z.c)
 * Callees:
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x18000DD9C (-GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrappe.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CInteractionProcessor::HasBufferedOutput(__int64 a1, unsigned int a2, int a3)
{
  char v3; // bl
  int v4; // edi
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a3;
  if ( !a3 )
    v4 = *(_DWORD *)(a1 + 388);
  v8 = 0LL;
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v8);
  CInteractionProcessor::GetInteractionContext((_QWORD *)a1, v4, &v8);
  if ( v8 )
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 88LL))(v8, a2);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease(&v8);
  return v3;
}

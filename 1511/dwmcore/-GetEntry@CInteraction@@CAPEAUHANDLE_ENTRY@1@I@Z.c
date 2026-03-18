/*
 * XREFs of ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800A88DC
 * Callers:
 *     ?ResolveInteractionHandle@CInteraction@@SAXI_KPEAPEAV1@@Z @ 0x180001E6C (-ResolveInteractionHandle@CInteraction@@SAXI_KPEAPEAV1@@Z.c)
 *     ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x1800A7840 (--0CInteraction@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Release@CInteraction@@UEAAKXZ @ 0x1800A7970 (-Release@CInteraction@@UEAAKXZ.c)
 * Callees:
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180092D18 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 */

struct CInteraction::HANDLE_ENTRY *__fastcall CInteraction::GetEntry(unsigned int a1)
{
  __int64 v1; // r8
  int v2; // r9d

  if ( HANDLE_TABLE::ValidEntry((HANDLE_TABLE *)&CInteraction::s_InteractionHandleTable, a1) )
    return (struct CInteraction::HANDLE_ENTRY *)((char *)Buffer + (unsigned int)(v2 * Size));
  return (struct CInteraction::HANDLE_ENTRY *)v1;
}

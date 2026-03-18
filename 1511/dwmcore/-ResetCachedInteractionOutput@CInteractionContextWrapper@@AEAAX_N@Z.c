/*
 * XREFs of ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z @ 0x1800A80A4
 * Callers:
 *     ??0CInteractionContextWrapper@@QEAA@XZ @ 0x1800A83F8 (--0CInteractionContextWrapper@@QEAA@XZ.c)
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@@Z @ 0x1800B8560 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@@Z.c)
 *     ?ResetOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x180143150 (-ResetOutput@CInteractionContextWrapper@@UEAAXXZ.c)
 * Callees:
 *     ?ResetInteractionOutput@?A0x1819c433@@YAXPEAUInteractionOutput@@_N@Z @ 0x1800A8540 (-ResetInteractionOutput@-A0x1819c433@@YAXPEAUInteractionOutput@@_N@Z.c)
 */

void __fastcall CInteractionContextWrapper::ResetCachedInteractionOutput(
        CInteractionContextWrapper *this,
        struct InteractionOutput *a2)
{
  _BOOL8 v2; // r8
  struct InteractionOutput *v3; // rdx

  `anonymous namespace'::ResetInteractionOutput((CInteractionContextWrapper *)((char *)this + 32), a2, (bool)this);
  `anonymous namespace'::ResetInteractionOutput((_anonymous_namespace_ *)(v2 + 84), v3, v2);
}

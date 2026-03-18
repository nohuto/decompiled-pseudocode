/*
 * XREFs of ?ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z @ 0x180143000
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ @ 0x1800A8310 (-EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ.c)
 *     ?ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSetupInfo@@@Z @ 0x1800FB8CC (-ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSet.c)
 */

__int64 __fastcall CInteractionContextWrapper::ApplySetupInfo(
        struct HINTERACTIONCONTEXT__ **this,
        const struct SetupInfo *a2)
{
  __int64 result; // rax

  result = CInteractionContextWrapper::EnsureInteractionContext((CInteractionContextWrapper *)this);
  if ( (int)result >= 0 )
    return CInteractionContextWrapper::ConfigureInteractionContext((CInteractionContextWrapper *)this, this[3], a2);
  return result;
}

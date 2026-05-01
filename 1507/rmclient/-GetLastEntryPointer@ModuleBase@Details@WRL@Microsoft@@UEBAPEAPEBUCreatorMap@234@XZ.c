/*
 * XREFs of ?GetLastEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ @ 0x180003610
 * Callers:
 *     ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z @ 0x180003170 (--$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAP.c)
 *     ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x180003500 (-TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z.c)
 * Callees:
 *     <none>
 */

const struct Microsoft::WRL::Details::CreatorMap **__fastcall Microsoft::WRL::Details::ModuleBase::GetLastEntryPointer(
        Microsoft::WRL::Details::ModuleBase *this)
{
  return (const struct Microsoft::WRL::Details::CreatorMap **)&_pobjectentrylast;
}

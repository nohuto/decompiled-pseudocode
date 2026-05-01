/*
 * XREFs of ?GetObjectCount@ModuleBase@Details@WRL@Microsoft@@UEBAKXZ @ 0x180003620
 * Callers:
 *     ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x1800017F0 (-TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ModuleBase::GetObjectCount(Microsoft::WRL::Details::ModuleBase *this)
{
  return Microsoft::WRL::Details::ModuleBase::objectCount_;
}

/*
 * XREFs of ?SilenceAndRevokePLMExemption@CProcess@@UEAAJXZ @ 0x1800A0D20
 * Callers:
 *     <none>
 * Callees:
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001E7FC (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 */

__int64 __fastcall CProcess::SilenceAndRevokePLMExemption(struct CApplication **this)
{
  if ( g_ApplicationManager )
    CApplicationManager::SilenceAndRevokePLMExemption(g_ApplicationManager, this[26]);
  return 0LL;
}

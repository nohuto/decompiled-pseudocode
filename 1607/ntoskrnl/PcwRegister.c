/*
 * XREFs of PcwRegister @ 0x140553DEC
 * Callers:
 *     EtwRegisterCounters @ 0x140553AE4 (EtwRegisterCounters.c)
 *     ExpPcwHostCallback @ 0x140553BC0 (ExpPcwHostCallback.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1400B4CB0 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1400B4CBC (ExGetExtensionTable.c)
 *     ExpPcwDisabledStatus @ 0x1406B6B54 (ExpPcwDisabledStatus.c)
 */

NTSTATUS __stdcall PcwRegister(PPCW_REGISTRATION *Registration, PPCW_REGISTRATION_INFORMATION Info)
{
  __int64 (__fastcall **ExtensionTable)(PPCW_REGISTRATION *, PPCW_REGISTRATION_INFORMATION); // rax
  NTSTATUS v5; // ebx

  ExtensionTable = (__int64 (__fastcall **)(PPCW_REGISTRATION *, PPCW_REGISTRATION_INFORMATION))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  if ( ExtensionTable )
  {
    v5 = (*ExtensionTable)(Registration, Info);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  }
  else
  {
    *Registration = 0LL;
    return ExpPcwDisabledStatus();
  }
  return v5;
}

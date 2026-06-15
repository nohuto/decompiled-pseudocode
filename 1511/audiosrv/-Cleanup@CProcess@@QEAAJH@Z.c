/*
 * XREFs of ?Cleanup@CProcess@@QEAAJH@Z @ 0x18002A1CC
 * Callers:
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001F6CC (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x18009E378 (--1CApplicationManager@@MEAA@XZ.c)
 * Callees:
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x180028F10 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x18002A470 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 */

__int64 __fastcall CProcess::Cleanup(struct _TP_WAIT **this, int a2)
{
  CProcess::CleanupProcessTerminationWatcher(this, a2);
  CProcess::NotifyPLM(this, 1LL);
  return 0LL;
}

/*
 * XREFs of ??_E_AUTO_KM@?3??DrvChangeDisplaySettings@@9@UEAAPEAXI@Z @ 0x1C00B7AF0
 * Callers:
 *     <none>
 * Callees:
 *     _DrvChangeDisplaySettings_::_4_::_AUTO_KM::__AUTO_KM @ 0x1C001BCF0 (_DrvChangeDisplaySettings_--_4_--_AUTO_KM--__AUTO_KM.c)
 */

AUTO_TGO *__fastcall `DrvChangeDisplaySettings'::`4'::_AUTO_KM::`vector deleting destructor'(AUTO_TGO *a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax

  DrvChangeDisplaySettings_::_4_::_AUTO_KM::__AUTO_KM(a1);
  if ( (a2 & 1) != 0 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v5);
  }
  return a1;
}

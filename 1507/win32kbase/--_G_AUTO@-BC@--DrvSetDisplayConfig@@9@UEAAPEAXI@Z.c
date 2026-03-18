/*
 * XREFs of ??_G_AUTO@?BC@??DrvSetDisplayConfig@@9@UEAAPEAXI@Z @ 0x1C00B7AB0
 * Callers:
 *     <none>
 * Callees:
 *     _DrvSetDisplayConfig_::_18_::_AUTO::__AUTO @ 0x1C001C858 (_DrvSetDisplayConfig_--_18_--_AUTO--__AUTO.c)
 */

AUTO_TGO *__fastcall `DrvSetDisplayConfig'::`18'::_AUTO::`scalar deleting destructor'(AUTO_TGO *a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax

  DrvSetDisplayConfig_::_18_::_AUTO::__AUTO(a1);
  if ( (a2 & 1) != 0 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v5);
  }
  return a1;
}

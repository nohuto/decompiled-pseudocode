/*
 * XREFs of ??_E_AUTO_KM@?3??DrvChangeDisplaySettings@@9@UEAAPEAXI@Z @ 0x1C00B99D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0050B08 @ 0x1C0050B08 (sub_1C0050B08.c)
 */

AUTO_TGO *__fastcall `DrvChangeDisplaySettings'::`4'::_AUTO_KM::`vector deleting destructor'(AUTO_TGO *a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax

  sub_1C0050B08(a1);
  if ( (a2 & 1) != 0 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    WdLogEvent5_WdAssertion(v8);
  }
  return a1;
}

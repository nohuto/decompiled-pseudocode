/*
 * XREFs of ??_G_AUTO@?BF@??DrvSetDisplayConfig@@9@UEAAPEAXI@Z @ 0x1C00B9990
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00524F0 @ 0x1C00524F0 (sub_1C00524F0.c)
 */

AUTO_TGO *__fastcall `DrvSetDisplayConfig'::`21'::_AUTO::`scalar deleting destructor'(AUTO_TGO *a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax

  sub_1C00524F0(a1);
  if ( (a2 & 1) != 0 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    WdLogEvent5_WdAssertion(v8);
  }
  return a1;
}

/*
 * XREFs of ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C006DC34
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C00152C0 (McGenControlCallbackV2.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkEtwEnableCallback()
{
  if ( (qword_1C002F070 & 0x188ED7) == 0 || (bTracingEnabled = 1, (qword_1C002F078 & 0xFFFFFFFFFFE77128uLL) != 0) )
    bTracingEnabled = 0;
}

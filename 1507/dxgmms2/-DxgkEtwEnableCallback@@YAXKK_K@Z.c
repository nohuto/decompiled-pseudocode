/*
 * XREFs of ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C0044994
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0006B30 (McGenControlCallbackV2.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkEtwEnableCallback()
{
  if ( (qword_1C0027060 & 0x188ED7) == 0 || (bTracingEnabled = 1, (qword_1C0027068 & 0xFFFFFFFFFFE77128uLL) != 0) )
    bTracingEnabled = 0;
}

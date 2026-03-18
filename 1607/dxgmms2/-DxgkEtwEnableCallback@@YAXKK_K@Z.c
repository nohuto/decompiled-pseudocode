/*
 * XREFs of ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C0073E18
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0013410 (McGenControlCallbackV2.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkEtwEnableCallback()
{
  if ( (qword_1C0035050 & 0x188ED7) == 0 || (bTracingEnabled = 1, (qword_1C0035058 & 0xFFFFFFFFFFE77128uLL) != 0) )
    bTracingEnabled = 0;
}

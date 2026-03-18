/*
 * XREFs of ?CitpBitmapUpdateBit@@YAXPEAU_CIT_BITMAP@@PEBU_CIT_TIME_CONTEXT@@@Z @ 0x1C00F5F8C
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00112CC (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpLastInputUpdate@@YAXEGI@Z @ 0x1C0011C30 (-CitpLastInputUpdate@@YAXEGI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitpBitmapUpdateBit(struct _CIT_BITMAP *a1, const struct _CIT_TIME_CONTEXT *a2)
{
  unsigned __int64 v2; // r8

  v2 = *((unsigned int *)a2 + 17);
  if ( *((_QWORD *)a1 + 1) > v2 )
    *(_BYTE *)(*(_QWORD *)a1 + v2) |= *((_BYTE *)a2 + 72);
}

/*
 * XREFs of ?CitpBitmapUpdateBit@@YAXPEAU_CIT_BITMAP@@PEBU_CIT_TIME_CONTEXT@@@Z @ 0x1C00E4004
 * Callers:
 *     ?CitpLastInputUpdate@@YAXEGI@Z @ 0x1C004779C (-CitpLastInputUpdate@@YAXEGI@Z.c)
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0049518 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
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

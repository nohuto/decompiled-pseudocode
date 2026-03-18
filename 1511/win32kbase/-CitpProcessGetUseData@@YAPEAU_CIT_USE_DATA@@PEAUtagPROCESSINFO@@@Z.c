/*
 * XREFs of ?CitpProcessGetUseData@@YAPEAU_CIT_USE_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C0047C28
 * Callers:
 *     CitProcessCallout @ 0x1C0044D54 (CitProcessCallout.c)
 *     ?CitpLastInputUpdate@@YAXEGI@Z @ 0x1C004779C (-CitpLastInputUpdate@@YAXEGI@Z.c)
 * Callees:
 *     ?CitpProcessGetProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C00E4420 (-CitpProcessGetProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 */

struct _CIT_USE_DATA *__fastcall CitpProcessGetUseData(struct tagPROCESSINFO *a1)
{
  struct _CIT_PROG_DATA *ProgData; // rax
  __int64 v3; // r11

  if ( !byte_1C0107171 )
    return 0LL;
  ProgData = CitpProcessGetProgData(a1);
  if ( ProgData )
    return (struct _CIT_PROG_DATA *)((char *)ProgData + 88);
  if ( !*(_QWORD *)(v3 + 880) )
    return 0LL;
  return (struct _CIT_IMPACT_CONTEXT *)((char *)qword_1C0107180 + 216);
}

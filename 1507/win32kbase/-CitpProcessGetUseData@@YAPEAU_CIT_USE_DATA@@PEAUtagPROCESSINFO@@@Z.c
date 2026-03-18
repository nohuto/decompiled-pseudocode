/*
 * XREFs of ?CitpProcessGetUseData@@YAPEAU_CIT_USE_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C0052AD8
 * Callers:
 *     CitProcessCallout @ 0x1C00511F4 (CitProcessCallout.c)
 *     ?CitpLastInputUpdate@@YAXEGI@Z @ 0x1C00525D8 (-CitpLastInputUpdate@@YAXEGI@Z.c)
 * Callees:
 *     ?CitpProcessGetProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C0052AF8 (-CitpProcessGetProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 */

struct _CIT_USE_DATA *__fastcall CitpProcessGetUseData(struct tagPROCESSINFO *a1)
{
  struct _CIT_PROG_DATA *ProgData; // rax
  __int64 v2; // r11

  ProgData = CitpProcessGetProgData(a1);
  if ( ProgData )
    return (struct _CIT_PROG_DATA *)((char *)ProgData + 80);
  if ( *(_QWORD *)(v2 + 896) )
    return (struct _CIT_IMPACT_CONTEXT *)((char *)qword_1C0101FE0 + 216);
  return 0LL;
}

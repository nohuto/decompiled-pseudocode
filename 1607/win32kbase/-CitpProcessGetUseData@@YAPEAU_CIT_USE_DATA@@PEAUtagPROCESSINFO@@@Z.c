/*
 * XREFs of ?CitpProcessGetUseData@@YAPEAU_CIT_USE_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C0011A84
 * Callers:
 *     ?CitpLastInputUpdate@@YAXEGI@Z @ 0x1C0011C30 (-CitpLastInputUpdate@@YAXEGI@Z.c)
 *     CitProcessCallout @ 0x1C0013014 (CitProcessCallout.c)
 * Callees:
 *     ?CitpProcessGetProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C00F636C (-CitpProcessGetProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 */

struct _CIT_USE_DATA *__fastcall CitpProcessGetUseData(struct tagPROCESSINFO *a1)
{
  struct _CIT_PROG_DATA *ProgData; // rax
  __int64 v3; // r11

  if ( !byte_1C011E5C0 )
    return 0LL;
  ProgData = CitpProcessGetProgData(a1);
  if ( ProgData )
    return (struct _CIT_PROG_DATA *)((char *)ProgData + 88);
  if ( !*(_QWORD *)(v3 + 872) )
    return 0LL;
  return (struct _CIT_IMPACT_CONTEXT *)((char *)qword_1C011E5D0 + 216);
}

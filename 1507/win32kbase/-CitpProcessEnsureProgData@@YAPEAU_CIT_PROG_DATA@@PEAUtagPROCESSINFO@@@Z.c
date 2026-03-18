/*
 * XREFs of ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C00569F4
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0057258 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 * Callees:
 *     ?CitpProcessGetProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C0052AF8 (-CitpProcessGetProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C0057D10 (-CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z @ 0x1C0058020 (-CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z.c)
 */

struct _CIT_PROG_DATA *__fastcall CitpProcessEnsureProgData(struct tagPROCESSINFO *a1)
{
  struct _CIT_IMPACT_CONTEXT *v1; // rdi
  struct _CIT_PROG_DATA *ProgData; // r11
  __int64 v5; // rbx
  struct _CIT_PROG_DATA *v6; // rax
  int v7; // [rsp+38h] [rbp+10h]

  v1 = qword_1C0101FE0;
  ProgData = CitpProcessGetProgData(a1);
  if ( !ProgData )
  {
    CitpProcessEnsureContext(a1);
    v5 = *((_QWORD *)a1 + 112);
    if ( v5 && *(_QWORD *)(v5 + 16) )
    {
      v6 = CitpProgDataEnsure(v1, (const struct _CIT_PROGRAM_ID *)(v5 + 16));
      ProgData = v6;
      if ( v6 )
      {
        HIWORD(v7) = *((_WORD *)v6 + 16);
        LOWORD(v7) = ((__int64)v6 - *((_QWORD *)v1 + 38)) / 168;
        *(_DWORD *)(v5 + 8) = v7;
      }
    }
    else
    {
      return 0LL;
    }
  }
  return ProgData;
}

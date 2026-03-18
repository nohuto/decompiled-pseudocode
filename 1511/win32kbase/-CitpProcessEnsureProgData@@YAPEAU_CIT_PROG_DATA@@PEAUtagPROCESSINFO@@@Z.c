/*
 * XREFs of ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C00E4374
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0049518 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@@Z @ 0x1C00773F8 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 * Callees:
 *     ?CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z @ 0x1C004B304 (-CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpProcessGetProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C00E4420 (-CitpProcessGetProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C00E4498 (-CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 */

struct _CIT_PROG_DATA *__fastcall CitpProcessEnsureProgData(struct tagPROCESSINFO *a1)
{
  struct _CIT_IMPACT_CONTEXT *v1; // rdi
  struct _CIT_PROG_DATA *ProgData; // r8
  __int64 v4; // rbx
  struct _CIT_PROG_DATA *v5; // rax
  int v7; // [rsp+38h] [rbp+10h]

  v1 = qword_1C0107180;
  ProgData = 0LL;
  if ( byte_1C0107171 )
  {
    ProgData = CitpProcessGetProgData(a1);
    if ( !ProgData )
    {
      CitpProcessEnsureContext(a1);
      v4 = *((_QWORD *)a1 + 110);
      if ( v4 && *(_QWORD *)(v4 + 16) )
      {
        v5 = CitpProgDataEnsure(v1, (const struct _CIT_PROGRAM_ID *)(v4 + 16));
        ProgData = v5;
        if ( v5 )
        {
          HIWORD(v7) = *((_WORD *)v5 + 16);
          LOWORD(v7) = ((__int64)v5 - *((_QWORD *)v1 + 38)) / 176;
          *(_DWORD *)(v4 + 8) = v7;
        }
      }
      else
      {
        return 0LL;
      }
    }
  }
  return ProgData;
}

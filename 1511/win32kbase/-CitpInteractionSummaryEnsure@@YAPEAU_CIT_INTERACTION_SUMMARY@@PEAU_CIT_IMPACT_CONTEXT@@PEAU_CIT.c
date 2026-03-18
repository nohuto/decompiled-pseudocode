/*
 * XREFs of ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@@Z @ 0x1C00773F8
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0049518 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 * Callees:
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C005034C (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C007749C (-CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C00E4374 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 */

struct _CIT_INTERACTION_SUMMARY *__fastcall CitpInteractionSummaryEnsure(
        struct _CIT_IMPACT_CONTEXT *a1,
        struct tagPROCESSINFO **a2,
        unsigned int a3)
{
  __int64 v3; // rbx
  struct _CIT_PROG_DATA *v5; // rsi
  struct _CIT_INTERACTION_SUMMARY **v6; // rdi
  struct _CIT_INTERACTION_SUMMARY *result; // rax
  struct _CIT_PROG_DATA *v8; // rax
  struct _CIT_INTERACTION_SUMMARY *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v9 = 0LL;
  if ( (dword_1C0107160 & 1) == 0 )
    return (struct _CIT_INTERACTION_SUMMARY *)v3;
  v5 = 0LL;
  if ( (dword_1C0107160 & 2) != 0 )
  {
    v8 = CitpProcessEnsureProgData(*a2);
    v5 = v8;
    if ( !v8 )
      return (struct _CIT_INTERACTION_SUMMARY *)v3;
    v6 = (struct _CIT_INTERACTION_SUMMARY **)((char *)v8 + 80);
  }
  else
  {
    v6 = a2 + 10;
  }
  if ( *v6 )
  {
    if ( ((*((unsigned __int16 *)*v6 + 32) >> 2) & 0x1FFF) == dword_1C0107178 )
      return *v6;
    CitpInteractionSummaryDelete(v6, (__int64)a2, a3);
  }
  CitpInteractionSummaryAllocate(&v9);
  result = v9;
  if ( v9 )
  {
    if ( v5 )
    {
      *((_WORD *)v9 + 32) |= 1u;
      *((_QWORD *)result + 2) = v5;
    }
    else
    {
      *((_QWORD *)v9 + 2) = a2;
    }
    *v6 = result;
    return result;
  }
  return result;
}

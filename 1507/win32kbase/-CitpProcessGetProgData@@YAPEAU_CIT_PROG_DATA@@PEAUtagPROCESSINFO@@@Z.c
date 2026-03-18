/*
 * XREFs of ?CitpProcessGetProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C0052AF8
 * Callers:
 *     ?CitpProcessGetUseData@@YAPEAU_CIT_USE_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C0052AD8 (-CitpProcessGetUseData@@YAPEAU_CIT_USE_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C00569F4 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     <none>
 */

struct _CIT_PROG_DATA *__fastcall CitpProcessGetProgData(struct tagPROCESSINFO *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int16 v3; // r9
  __int64 v4; // rax
  __int64 v5; // r8

  v1 = *((_QWORD *)a1 + 112);
  v2 = 0LL;
  if ( !v1 )
    return 0LL;
  v3 = *(_WORD *)(v1 + 10);
  if ( v3 )
  {
    v4 = *(unsigned __int16 *)(v1 + 8);
    if ( (unsigned int)v4 < *((_DWORD *)qword_1C0101FE0 + 90) )
    {
      v5 = *((_QWORD *)qword_1C0101FE0 + 38) + 168 * v4;
      if ( *(_WORD *)(v5 + 32) == v3 )
      {
        if ( *(_QWORD *)(v5 + 56) != *(_QWORD *)(v1 + 32) )
          return 0LL;
        return (struct _CIT_PROG_DATA *)v5;
      }
    }
  }
  return (struct _CIT_PROG_DATA *)v2;
}

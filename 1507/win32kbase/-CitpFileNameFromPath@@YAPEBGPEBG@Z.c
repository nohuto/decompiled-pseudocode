/*
 * XREFs of ?CitpFileNameFromPath@@YAPEBGPEBG@Z @ 0x1C005898C
 * Callers:
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C0058100 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpProgramIdToString@@YAXPEBU_CIT_PROGRAM_ID@@PEAGI1I@Z @ 0x1C00E3298 (-CitpProgramIdToString@@YAXPEBU_CIT_PROGRAM_ID@@PEAGI1I@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall CitpFileNameFromPath(const unsigned __int16 *a1)
{
  __int64 v1; // rax
  const unsigned __int16 *result; // rax

  v1 = -1LL;
  do
    ++v1;
  while ( a1[v1] );
  for ( result = &a1[v1]; result > a1; --result )
  {
    if ( *result == 92 )
      return ++result;
  }
  return result;
}

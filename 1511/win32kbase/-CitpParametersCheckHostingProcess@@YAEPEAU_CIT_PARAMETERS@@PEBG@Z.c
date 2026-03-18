/*
 * XREFs of ?CitpParametersCheckHostingProcess@@YAEPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C00500D0
 * Callers:
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C004DB34 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall CitpParametersCheckHostingProcess(struct _CIT_PARAMETERS *a1, const unsigned __int16 *a2)
{
  __int64 v2; // rbx
  const unsigned __int16 *v3; // rdi
  const wchar_t *v5; // rcx
  wchar_t *v6; // rax

  v2 = -1LL;
  v3 = a2;
  do
    ++v2;
  while ( a2[v2] );
  v5 = (const wchar_t *)*((_QWORD *)a1 + 8);
  while ( 1 )
  {
    v6 = wcsstr(v5, a2);
    if ( !v6 )
      break;
    v5 = v6 + 1;
    if ( v6 != *((wchar_t **)a1 + 8) && *(v6 - 1) == 58 && v6[v2] == 58 )
    {
      LOBYTE(v6) = 1;
      return (unsigned __int8)v6;
    }
    a2 = v3;
  }
  return (unsigned __int8)v6;
}

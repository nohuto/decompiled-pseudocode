/*
 * XREFs of DesktopOpenProcedure @ 0x140259100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DesktopOpenProcedure(__int64 a1)
{
  int *v1; // rbx
  int v3; // eax
  int v4; // ebx

  v1 = *(int **)(a1 + 32);
  v3 = v1[12];
  if ( (v3 & 8) == 0
    && (*(_DWORD *)(a1 + 44) == 1 || (v3 & 0x10) != 0)
    && (!*(_WORD *)(a1 + 40)
     || (unsigned __int8)PsIsSystemProcess(*(_QWORD *)(a1 + 24))
     || (v4 = *v1, (unsigned int)PsGetProcessSessionIdEx(*(_QWORD *)(a1 + 24)) == v4)) )
  {
    return 0LL;
  }
  else
  {
    return 3221225506LL;
  }
}

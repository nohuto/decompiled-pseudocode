/*
 * XREFs of SeQueryHSTIResults @ 0x1407212E0
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 */

__int64 __fastcall SeQueryHSTIResults(void *a1, unsigned int a2, _DWORD *a3)
{
  size_t v3; // rax
  unsigned int v4; // ebx

  v3 = (unsigned int)dword_14078D530;
  *a3 = dword_14078D530;
  v4 = 0;
  if ( (_DWORD)v3 )
  {
    if ( a2 >= (unsigned int)v3 )
      memmove(a1, qword_14078D538, v3);
    else
      return (unsigned int)-1073741820;
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v4;
}

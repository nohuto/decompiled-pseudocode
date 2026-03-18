/*
 * XREFs of CmpBuildRegMultiSz @ 0x1407820D8
 * Callers:
 *     CmpInitializeSystemBiosInformation @ 0x140782144 (CmpInitializeSystemBiosInformation.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 */

unsigned __int64 __fastcall CmpBuildRegMultiSz(__int64 a1, __int64 a2, _DWORD *a3, const void *a4, unsigned int Size)
{
  unsigned __int64 result; // rax
  int v7; // ebp
  char *v8; // rdi
  char *v9; // rdi

  result = Size;
  v7 = a1;
  if ( Size )
  {
    v8 = (char *)(a1 + (unsigned int)*a3);
    result = (unsigned __int64)memmove(v8, a4, Size);
    v9 = &v8[Size];
    *(_WORD *)v9 = 0;
    *a3 = (_DWORD)v9 - v7 + 2;
  }
  return result;
}

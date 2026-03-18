/*
 * XREFs of MiCreatePageFileSpaceBitmaps @ 0x1405B50B0
 * Callers:
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x1405B4DBC (MiCreatePagefile.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiCreatePageFileSpaceBitmaps(unsigned int a1)
{
  unsigned int v2; // ebx
  _QWORD *result; // rax

  v2 = ((a1 & 0x3F) != 0) + (a1 >> 6);
  result = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * (((a1 & 0x3F) != 0) + (a1 >> 6)) + 40, 0x62506D4Du);
  if ( result )
  {
    *(_DWORD *)result = 1;
    result[2] = result + 5;
    *((_DWORD *)result + 2) = a1;
    *((_DWORD *)result + 6) = a1;
    result[4] = &result[v2 + 5];
  }
  return result;
}

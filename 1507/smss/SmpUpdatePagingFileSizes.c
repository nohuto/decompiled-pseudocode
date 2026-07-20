/*
 * XREFs of SmpUpdatePagingFileSizes @ 0x140009C74
 * Callers:
 *     SmpCreateWorkingSetSwapPagingFile @ 0x14000986C (SmpCreateWorkingSetSwapPagingFile.c)
 *     SmpProcessPagefileDescriptor @ 0x14000AE90 (SmpProcessPagefileDescriptor.c)
 * Callees:
 *     <none>
 */

char __fastcall SmpUpdatePagingFileSizes(__int64 *a1, unsigned __int64 *a2)
{
  __int64 v2; // r9
  char result; // al
  unsigned __int64 v4; // r8

  v2 = *a1;
  result = 0;
  v4 = *a2;
  if ( (unsigned __int64)*a1 > 0xFFFFFFFF000LL )
  {
    result = 1;
    v2 = 0xFFFFFFFF000LL;
  }
  if ( v4 > 0xFFFFFFFF000LL )
  {
    result = 1;
    v4 = 0xFFFFFFFF000LL;
  }
  if ( result )
  {
    *a1 = v2;
    *a2 = v4;
  }
  return result;
}

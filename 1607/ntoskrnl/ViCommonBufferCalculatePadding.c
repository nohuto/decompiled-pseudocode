/*
 * XREFs of ViCommonBufferCalculatePadding @ 0x140709038
 * Callers:
 *     ViSpecialAllocateCommonBuffer @ 0x14070A40C (ViSpecialAllocateCommonBuffer.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ViCommonBufferCalculatePadding(unsigned int a1, _DWORD *a2, int *a3)
{
  int v3; // r9d
  unsigned __int64 result; // rax

  v3 = 4096;
  result = a1 + 8LL;
  *a2 = 4096;
  if ( result <= 0x1000 )
  {
    v3 = 4096 - a1;
LABEL_3:
    *a3 = v3;
    return result;
  }
  if ( (a1 & 0xFFF) == 0 )
    goto LABEL_3;
  result = (unsigned __int64)((result & 0xFFF) != 0) << 12;
  *a3 = result + ((a1 + 8) & 0xFFFFF000) - a1;
  return result;
}

/*
 * XREFs of ViInitializePadding @ 0x140709E0C
 * Callers:
 *     ViAllocateMapRegisterFile @ 0x1407087FC (ViAllocateMapRegisterFile.c)
 *     ViSpecialAllocateCommonBuffer @ 0x14070A40C (ViSpecialAllocateCommonBuffer.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ViTagBuffer @ 0x14070A724 (ViTagBuffer.c)
 */

void *__fastcall ViInitializePadding(void *a1, unsigned int a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // r15
  __int64 v5; // rbp
  unsigned __int16 v9; // di

  v4 = a2;
  v5 = a4;
  if ( !a4 )
    return memset(a1, 15, a2);
  memset(a1, 15, a3 - (_QWORD)a1);
  memset((void *)(a3 + v5), 15, (size_t)a1 + v4 - (a3 + v5));
  v9 = (unsigned __int64)a1 + 8 <= a3;
  if ( a3 + v5 - (unsigned __int64)a1 + 8 <= v4 )
    v9 |= 2u;
  return (void *)ViTagBuffer(a3, (unsigned int)v5, v9);
}

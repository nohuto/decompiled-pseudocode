/*
 * XREFs of sub_140158738 @ 0x140158738
 * Callers:
 *     <none>
 * Callees:
 *     MmFreePagesFromMdl @ 0x1400996F0 (MmFreePagesFromMdl.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MmUnmapReservedMapping @ 0x1401E3FC4 (MmUnmapReservedMapping.c)
 *     ExFreePool @ 0x140255B30 (ExFreePool.c)
 */

void __fastcall sub_140158738(void *a1)
{
  void *v2; // rcx
  struct _MDL *v3; // rdi
  void *v4; // rsi

  v2 = (void *)*((_QWORD *)a1 + 1);
  v3 = *(struct _MDL **)a1;
  v4 = (void *)*((_QWORD *)a1 + 3);
  if ( v2 )
    MmUnmapReservedMapping(v2, *((_DWORD *)a1 + 4), v3);
  if ( v3 )
  {
    MmFreePagesFromMdl(v3);
    ExFreePool(v3);
  }
  memset(a1, 0, 0x20uLL);
  ExFreePool(v4);
}

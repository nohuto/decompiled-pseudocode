/*
 * XREFs of sub_1401581C8 @ 0x1401581C8
 * Callers:
 *     <none>
 * Callees:
 *     MmFreePagesFromMdl @ 0x140099EF0 (MmFreePagesFromMdl.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     MmUnmapReservedMapping @ 0x1401E4198 (MmUnmapReservedMapping.c)
 *     ExFreePool @ 0x140255B30 (ExFreePool.c)
 */

void __fastcall sub_1401581C8(void *a1)
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

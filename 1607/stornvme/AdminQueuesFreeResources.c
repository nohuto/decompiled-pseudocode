/*
 * XREFs of AdminQueuesFreeResources @ 0x1C000520C
 * Callers:
 *     NVMeControllerRemove @ 0x1C0007134 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C0007424 (NVMeControllerStop.c)
 * Callees:
 *     memset @ 0x1C0003180 (memset.c)
 *     NVMeFreePool @ 0x1C000761C (NVMeFreePool.c)
 */

void *__fastcall AdminQueuesFreeResources(__int64 a1)
{
  void *result; // rax
  void *v3; // rcx
  void **v4; // rbx
  __int64 v5; // rdi

  if ( !*(_BYTE *)(a1 + 16) )
  {
    NVMeFreePool(a1);
    *(_QWORD *)(a1 + 264) = 0LL;
    result = (void *)NVMeFreePool(a1);
    v3 = *(void **)(a1 + 656);
    *(_QWORD *)(a1 + 272) = 0LL;
    *(_DWORD *)(a1 + 560) = 0;
    if ( v3 )
      result = memset(v3, 0, 0x1098uLL);
    v4 = (void **)(a1 + 760);
    v5 = 4LL;
    do
    {
      *((_DWORD *)v4 - 24) = 0;
      if ( *v4 )
        result = memset(*v4, 0, 0x1098uLL);
      v4 += 13;
      --v5;
    }
    while ( v5 );
  }
  return result;
}

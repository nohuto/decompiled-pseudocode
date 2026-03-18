/*
 * XREFs of EtwpCaptureRegistryData @ 0x1406E70E4
 * Callers:
 *     EtwpRegTraceCallback @ 0x1406E717C (EtwpRegTraceCallback.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpCaptureRegistryData(_QWORD *a1, const void *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  PVOID v6; // rdi
  PVOID PoolWithTag; // rax

  v3 = a3;
  v6 = 0LL;
  if ( a3 )
  {
    if ( a3 > 0x800 )
      v3 = 2048;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3, 0x31777445u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
      memmove(PoolWithTag, a2, v3);
    else
      LOWORD(v3) = 0;
  }
  *a1 = v6;
  return (unsigned __int16)v3;
}

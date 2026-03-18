/*
 * XREFs of ?Create@UmfdUMBuffer@@SAPEAV1@XZ @ 0x1C02D5E40
 * Callers:
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C02D4A0C (-Create@UmfdTls@@CAPEAV1@XZ.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 */

PVOID *UmfdUMBuffer::Create(void)
{
  PVOID *v0; // rax
  PVOID *v1; // rbx
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF

  v0 = (PVOID *)EngAllocMem(0, 0x28u, 0x6D554446u);
  v1 = v0;
  if ( v0 )
  {
    memset(v0, 0, 0x28uLL);
    RegionSize = 0x400000LL;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v1 + 3, 0LL, &RegionSize, 0x2000u, 4u) < 0 )
    {
      EngFreeMem(v1);
      return 0LL;
    }
    *((_DWORD *)v1 + 9) = RegionSize;
  }
  return v1;
}

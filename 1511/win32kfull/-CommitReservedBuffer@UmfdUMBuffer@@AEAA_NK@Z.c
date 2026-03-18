/*
 * XREFs of ?CommitReservedBuffer@UmfdUMBuffer@@AEAA_NK@Z @ 0x1C02D7188
 * Callers:
 *     ?CommitBuffer@UmfdUMBuffer@@QEAAPEAXK@Z @ 0x1C02D7100 (-CommitBuffer@UmfdUMBuffer@@QEAAPEAXK@Z.c)
 * Callees:
 *     ?AlignSizeTo@UmfdUMBuffer@@CA_NKKPEAK@Z @ 0x1C02D6FF0 (-AlignSizeTo@UmfdUMBuffer@@CA_NKKPEAK@Z.c)
 */

char __fastcall UmfdUMBuffer::CommitReservedBuffer(UmfdUMBuffer *this, unsigned int a2)
{
  ULONG_PTR v2; // rdi
  __int64 v4; // rdx
  unsigned int v6; // edx
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2;
  v4 = *((unsigned int *)this + 8);
  if ( (unsigned int)v2 <= (unsigned int)v4 )
    return 1;
  if ( UmfdUMBuffer::AlignSizeTo(v2, v4, &v8) )
  {
    if ( v8 >= v6 && v8 >= (unsigned int)v2 && v8 <= *((_DWORD *)this + 9) )
    {
      RegionSize = v8;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 3, 0LL, &RegionSize, 0x1000u, 4u) >= 0
        && RegionSize >= v2 )
      {
        if ( RegionSize <= 0xFFFFFFFF )
        {
          *((_DWORD *)this + 8) = RegionSize;
          return 1;
        }
        *((_DWORD *)this + 8) = -1;
      }
    }
  }
  return 0;
}

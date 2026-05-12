/*
 * XREFs of RaidAllocateAddressMapping @ 0x1C000E700
 * Callers:
 *     StorPortGetDeviceBase @ 0x1C000E650 (StorPortGetDeviceBase.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000245C (RaidAllocatePool.c)
 *     memset @ 0x1C001AD80 (memset.c)
 */

__int64 __fastcall RaidAllocateAddressMapping(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
  _QWORD *Pool; // rax
  _QWORD *v10; // rbx
  __int64 result; // rax

  Pool = RaidAllocatePool(NonPagedPoolNx, 0x28uLL, 0x4D416152u, a6);
  v10 = Pool;
  if ( !Pool )
    return 3221225495LL;
  memset(Pool, 0, 0x28uLL);
  *v10 = *a1;
  *a1 = v10;
  v10[3] = a2;
  *((_DWORD *)v10 + 8) = a5;
  result = 0LL;
  v10[1] = a3;
  *((_DWORD *)v10 + 4) = a4;
  return result;
}

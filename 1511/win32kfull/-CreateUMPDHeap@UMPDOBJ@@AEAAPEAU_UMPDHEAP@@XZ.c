/*
 * XREFs of ?CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ @ 0x1C0146EA0
 * Callers:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C01468CC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C0146C80 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 */

struct _UMPDHEAP *__fastcall UMPDOBJ::CreateUMPDHeap(UMPDOBJ *this)
{
  _DWORD *v1; // rbx
  PVOID v2; // rax
  PVOID BaseAddress; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF

  BaseAddress = this;
  v1 = PALLOCMEM2(0x20uLL, 1886221639LL, 1);
  if ( v1 )
  {
    BaseAddress = 0LL;
    RegionSize = 0x400000LL;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u) >= 0 )
    {
      v2 = BaseAddress;
      v1[6] = 0;
      *(_QWORD *)v1 = v2;
      return (struct _UMPDHEAP *)v1;
    }
    Win32FreePool(v1);
  }
  return 0LL;
}

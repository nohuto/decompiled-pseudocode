/*
 * XREFs of ?GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z @ 0x1C011C6FC
 * Callers:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C011C2D0 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UMPDOBJ::GrowUMPDHeap(UMPDOBJ *this, struct _UMPDHEAP *a2, unsigned int a3)
{
  unsigned __int64 v4; // rdx
  HANDLE v5; // rdi
  void *v6; // rcx
  __int64 result; // rax
  SIZE_T Size; // [rsp+40h] [rbp+8h] BYREF
  PVOID Address; // [rsp+48h] [rbp+10h] BYREF

  Size = (SIZE_T)this;
  v4 = *((_QWORD *)a2 + 2) + a3;
  if ( v4 < *((_QWORD *)a2 + 2) )
    return 0LL;
  if ( v4 + 4095 < v4 )
    return 0LL;
  Size = (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( Size > 0x400000 )
    return 0LL;
  Address = *(PVOID *)a2;
  v5 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Address, 0LL, &Size, 0x1000u, 4u) < 0
     ? 0LL
     : MmSecureVirtualMemory(Address, Size, 4u);
  if ( !v5 )
    return 0LL;
  v6 = (void *)*((_QWORD *)a2 + 1);
  if ( v6 )
    MmUnsecureVirtualMemory(v6);
  *((_QWORD *)a2 + 2) = Size;
  result = 1LL;
  *((_QWORD *)a2 + 1) = v5;
  return result;
}

/*
 * XREFs of VslAllocatePool @ 0x1401C252C
 * Callers:
 *     PsDispatchIumService @ 0x14020FA50 (PsDispatchIumService.c)
 * Callees:
 *     VslpLockPagesForTransfer @ 0x1401C32B4 (VslpLockPagesForTransfer.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VslAllocatePool(SIZE_T NumberOfBytes, ULONG Tag, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  unsigned int v7; // ebx
  PVOID PoolWithTag; // rsi
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  int v12; // ebx

  v7 = NumberOfBytes;
  if ( NumberOfBytes > 0x1FA000 )
    return 3221225659LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, Tag);
  if ( !PoolWithTag )
    return 3221225626LL;
  v10 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x54736D56u);
  v11 = v10;
  if ( !v10 )
  {
    v12 = -1073741670;
LABEL_9:
    ExFreePoolWithTag(PoolWithTag, 0);
    return (unsigned int)v12;
  }
  v12 = VslpLockPagesForTransfer(v10, PoolWithTag, v7, 1LL, 0);
  if ( v12 < 0 )
  {
    ExFreePoolWithTag(v11, 0);
    goto LABEL_9;
  }
  *a3 = v11[7];
  *a4 = *v11;
  *a5 = v11;
  return 0LL;
}

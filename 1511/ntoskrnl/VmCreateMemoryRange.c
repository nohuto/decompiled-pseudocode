/*
 * XREFs of VmCreateMemoryRange @ 0x14065C0CC
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     VmpInsertMemoryRange @ 0x14020C69C (VmpInsertMemoryRange.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     VmValidateMemoryRangeParameters @ 0x14065C314 (VmValidateMemoryRangeParameters.c)
 */

__int64 __fastcall VmCreateMemoryRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  _KPROCESS *Process; // rdi
  int inserted; // ebx
  _QWORD *v10; // rbx
  _QWORD *PoolWithTag; // rax
  __int64 v12; // rax
  _RTL_BALANCED_NODE *v13; // rax
  _RTL_BALANCED_NODE *v14; // rdi
  _RTL_BALANCED_NODE *v15; // r14
  unsigned __int64 v16; // rbp

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (unsigned int)VmValidateMemoryRangeParameters() )
    return (unsigned int)-1073741811;
  if ( !VmTbFlushEnabled )
    VmTbFlushEnabled = 1;
  v10 = (_QWORD *)Process[2].ActiveProcessors.Bitmap[12];
  if ( !v10 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x63506D56u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, 0x48uLL);
    v10[8] = a4;
    v10[1] = 0LL;
    v10[2] = 0LL;
    v10[3] = 0LL;
    v10[4] = 0LL;
    v10[5] = 0LL;
    v10[6] = 0LL;
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&Process[2].ActiveProcessors.Bitmap[12],
           (signed __int64)v10,
           0LL) )
    {
      ExFreePoolWithTag(v10, 0);
      v10 = (_QWORD *)Process[2].ActiveProcessors.Bitmap[12];
    }
  }
  v12 = v10[8];
  if ( v12 != -1 && v12 != a4 )
    return (unsigned int)-1073740007;
  v13 = (_RTL_BALANCED_NODE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x724D6D56u);
  v14 = v13;
  if ( !v13 )
    return (unsigned int)-1073741670;
  memset(v13, 0, 0x50uLL);
  v15 = (_RTL_BALANCED_NODE *)(a1 >> 12);
  v16 = a2 >> 12;
  v14[2].Children[1] = (_RTL_BALANCED_NODE *)((char *)v15 + a3 - 1);
  v14[2].Children[0] = v15;
  v14[2].ParentValue = v16;
  v14[3].Children[0] = (_RTL_BALANCED_NODE *)(v16 + a3 - 1);
  inserted = VmpInsertMemoryRange((PEX_SPIN_LOCK)v10, v14, a4);
  if ( inserted >= 0 )
  {
    v14 = 0LL;
    inserted = 0;
  }
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  return (unsigned int)inserted;
}

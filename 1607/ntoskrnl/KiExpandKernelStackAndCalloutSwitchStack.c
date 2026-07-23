/*
 * XREFs of KiExpandKernelStackAndCalloutSwitchStack @ 0x1400EEEF0
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400EEE30 (KeExpandKernelStackAndCalloutInternal.c)
 * Callees:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400EF0F0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     MmGrowKernelStackEx @ 0x140136A80 (MmGrowKernelStackEx.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KeGetCurrentStackPointer @ 0x14015E0C0 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall KiExpandKernelStackAndCalloutSwitchStack(int a1, int a2, unsigned __int64 a3, int a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 CurrentStackPointer; // rax
  char *StackLimit; // r12
  __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  unsigned __int8 CurrentIrql; // cl
  unsigned __int64 v16; // r8
  char *IsrStack; // rax
  struct _KTHREAD *v18; // r9
  char *v19; // rdx
  void *volatile v20; // rcx
  void *StackBase; // rdx

  if ( a3 > 0x11800 )
    return 3221225713LL;
  CurrentThread = KeGetCurrentThread();
  CurrentStackPointer = KeGetCurrentStackPointer();
  StackLimit = (char *)CurrentThread->StackLimit;
  v12 = CurrentStackPointer;
  v13 = *((_QWORD *)CurrentThread->InitialStack + 1) & 0xFFFFFFFFFFFFFFFEuLL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0xAu, 2uLL, CurrentIrql, 0LL, 0LL);
  if ( CurrentIrql == 2 )
  {
    if ( (a4 & 2) != 0 )
      return 3221225714LL;
    if ( (KiBugCheckActive & 3) == 0 )
    {
      v16 = KeGetCurrentStackPointer();
      if ( KeGetCurrentIrql() < 2u
        || (IsrStack = (char *)KeGetPcr()->Prcb.IsrStack, (unsigned __int64)(IsrStack - 24576) > v16)
        || v16 >= (unsigned __int64)IsrStack )
      {
        v18 = KeGetCurrentThread();
        if ( v18->InitialStack == (void *)KeGetPcr()->Prcb.RspBase )
        {
          if ( KeGetCurrentIrql() < 2u
            || (v19 = (char *)KeGetPcr()->Prcb.DpcStack + 80,
                (unsigned __int64)&v19[-(unsigned int)KeKernelStackSize] > v16)
            || v16 >= (unsigned __int64)v19 )
          {
            v20 = v18->StackLimit;
            StackBase = v18->StackBase;
            if ( v20 >= StackBase )
            {
              StackBase = v18->StackBase;
              v20 = v18->StackLimit;
            }
            if ( v16 >= (unsigned __int64)StackBase || (unsigned __int64)v20 > v16 )
              __fastfail(4u);
          }
          else
          {
            StackLimit = &v19[-(unsigned int)KeKernelStackSize];
            v13 = (unsigned __int64)StackLimit;
          }
        }
      }
    }
  }
  else if ( a3 == (unsigned int)KeKernelStackSize || a3 == 24576 && (unsigned int)KeKernelStackSize >= 0x6000 )
  {
    a4 |= 9u;
  }
  if ( v12 - v13 < a3 || (a4 & 1) != 0 || v12 - (__int64)StackLimit < a3 && (int)MmGrowKernelStackEx(v12, a3) < 0 )
    return KiExpandKernelStackAndCalloutOnStackSegment(a1, a2, a3, a4, a5);
  else
    return 3221226635LL;
}

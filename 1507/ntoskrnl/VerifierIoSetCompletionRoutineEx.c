/*
 * XREFs of VerifierIoSetCompletionRoutineEx @ 0x140739CA0
 * Callers:
 *     <none>
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x1400257A0 (VfPoolDelayFreeIfPossible.c)
 *     IoSetCompletionRoutineEx @ 0x140156F28 (IoSetCompletionRoutineEx.c)
 *     VeAllocatePoolWithTagPriority @ 0x140736208 (VeAllocatePoolWithTagPriority.c)
 *     VfFaultsInjectResourceFailure @ 0x14074657C (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierIoSetCompletionRoutineEx(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        PIO_COMPLETION_ROUTINE CompletionRoutine,
        PVOID Context,
        BOOLEAN InvokeOnSuccess,
        BOOLEAN InvokeOnError,
        BOOLEAN InvokeOnCancel)
{
  unsigned int v11; // ebx
  int v13; // edi
  _OWORD *PoolWithTagPriority; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  _SLIST_ENTRY *v16; // rcx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v11 = 0;
  if ( (unsigned int)VfFaultsInjectResourceFailure(0LL) )
    return 3221225626LL;
  v13 = pXdvIoSetCompletionRoutineEx(
          DeviceObject,
          Irp,
          CompletionRoutine,
          Context,
          InvokeOnSuccess,
          InvokeOnError,
          InvokeOnCancel);
  if ( v13 >= 0 )
  {
    PoolWithTagPriority = VeAllocatePoolWithTagPriority((POOL_TYPE)640, 0x20uLL, 0x73556656u, HighPoolPriority, retaddr);
    if ( PoolWithTagPriority )
    {
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      v16 = (_SLIST_ENTRY *)CurrentStackLocation[-1].Context;
      *PoolWithTagPriority = *v16;
      PoolWithTagPriority[1] = v16[1];
      CurrentStackLocation[-1].Context = PoolWithTagPriority;
      LOBYTE(v11) = KeGetCurrentIrql() != 2;
      VfPoolDelayFreeIfPossible(v16, v11);
    }
  }
  return (unsigned int)v13;
}

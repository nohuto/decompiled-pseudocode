/*
 * XREFs of MiJoinSession @ 0x1405097A8
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x14050921C (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiJoinSession(volatile signed __int32 **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int32 *v2; // r8
  signed __int32 v3; // eax
  signed __int32 v4; // ett

  CurrentThread = KeGetCurrentThread();
  *a1 = 0LL;
  v2 = (volatile signed __int32 *)CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  if ( !v2 )
    return 1LL;
  v3 = *v2;
  while ( v3 )
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange(v2, v3 + 1, v3);
    if ( v4 == v3 )
    {
      _InterlockedIncrement(v2 + 3);
      *a1 = v2;
      return 1LL;
    }
  }
  return 0LL;
}

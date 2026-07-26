/*
 * XREFs of ndisMediaDisconnectTimeout @ 0x1C00635E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisScheduleWorkItemInternal @ 0x1C0019FE8 (ndisScheduleWorkItemInternal.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

void __fastcall ndisMediaDisconnectTimeout(
        PVOID SystemSpecific1,
        KSPIN_LOCK *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  KSPIN_LOCK *v5; // rcx
  int v6; // eax
  _QWORD *PoolWithTag; // rax

  if ( (unsigned __int8)byte_1C00895D5 >= 4u )
    WPP_SF_q(0x17u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, (__int64)FunctionContext);
  KeAcquireSpinLockAtDpcLevel(FunctionContext + 12);
  v5 = FunctionContext + 12;
  FunctionContext[65] = (KSPIN_LOCK)KeGetCurrentThread();
  FunctionContext[65] = 0LL;
  v6 = *((_DWORD *)FunctionContext + 31);
  *((_DWORD *)FunctionContext + 464) = 1704534;
  *((_DWORD *)FunctionContext + 464) = 0;
  if ( (v6 & 8) != 0 )
  {
    *((_DWORD *)FunctionContext + 31) = v6 & 0xFFFFFFF7;
    KeReleaseSpinLockFromDpcLevel(v5);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x6977444Eu);
    if ( PoolWithTag )
    {
      *PoolWithTag = FunctionContext;
      PoolWithTag[1] = ndisMediaDisconnectWorker;
      *((_DWORD *)FunctionContext + 31) |= 0x400u;
      ndisScheduleWorkItemInternal((__int64)PoolWithTag);
    }
    else
    {
      ndisDereferenceMiniport((__int64)FunctionContext);
    }
  }
  else
  {
    KeReleaseSpinLockFromDpcLevel(v5);
    ndisDereferenceMiniport((__int64)FunctionContext);
    if ( (unsigned __int8)byte_1C00895D5 < 4u )
      return;
    WPP_SF_q(0x18u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, (__int64)FunctionContext);
  }
  if ( (unsigned __int8)byte_1C00895D5 >= 4u )
    WPP_SF_q(0x19u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, (__int64)FunctionContext);
}

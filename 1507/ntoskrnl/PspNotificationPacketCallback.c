/*
 * XREFs of PspNotificationPacketCallback @ 0x14055923C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     IoSetIoCompletionEx @ 0x14012CB98 (IoSetIoCompletionEx.c)
 */

void __fastcall PspNotificationPacketCallback(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  signed __int32 v4; // r8d
  int v5; // edx
  unsigned int v6; // ecx
  bool v7; // zf
  signed __int32 v8; // eax
  unsigned int v9; // esi
  __int16 v10; // ax

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a2 + 56), 1u);
  v4 = *(_DWORD *)(a2 + 1296);
  do
  {
    v5 = 0;
    v6 = v4;
    if ( (v4 & 0x4000) != 0 && (v6 = v4 & 0xFFFFBFFF, (*(_DWORD *)(a2 + 884) & 0x800) != 0) )
    {
      v5 = 11;
    }
    else if ( (v6 & 0x10000) != 0 && (v6 &= ~0x10000u, (*(_DWORD *)(a2 + 884) & 0x1000) != 0) )
    {
      v5 = 12;
    }
    else if ( (v6 & 0x8000) != 0 && (v6 &= ~0x8000u, (*(_DWORD *)(a2 + 884) & 0x10) != 0) )
    {
      v5 = 4;
    }
    else
    {
      v6 &= ~8u;
    }
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 1296), v6, v4);
    v7 = v4 == v8;
    v4 = v8;
  }
  while ( !v7 );
  v9 = *(_QWORD *)(a2 + 456) != 0LL ? v5 : 0;
  if ( v9 )
  {
    IoSetIoCompletionEx(*(_QWORD *)(a2 + 456), *(_QWORD *)(a2 + 464), 0LL, 0, v9, 0, *(_QWORD *)(a2 + 992));
    _InterlockedIncrement64((volatile signed __int64 *)(a2 + 472));
  }
  ExReleaseResourceLite((PERESOURCE)(a2 + 56));
  if ( CurrentThread )
  {
    v10 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v10;
    if ( !v10
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( !v9 )
    ObfDereferenceObjectWithTag((PVOID)a2, 0x624A7350u);
}

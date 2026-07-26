/*
 * XREFs of NdisIMQueueMiniportCallback @ 0x1C0057E40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     ndisMProcessDeferred @ 0x1C0059EE8 (ndisMProcessDeferred.c)
 *     ndisMQueueNewWorkItem @ 0x1C005A41C (ndisMQueueNewWorkItem.c)
 */

__int64 __fastcall NdisIMQueueMiniportCallback(
        _QWORD *MiniportAdapterHandle,
        void (__fastcall *a2)(_QWORD, __int64),
        __int64 a3)
{
  KSPIN_LOCK *v6; // rbp
  unsigned int v7; // esi
  KIRQL v8; // r14
  __int64 v9; // rdx
  int v10; // eax
  int v11; // ebx

  v6 = MiniportAdapterHandle + 12;
  v7 = 0;
  v8 = KfRaiseIrql(2u);
  if ( KeGetCurrentThread() == (struct _KTHREAD *)MiniportAdapterHandle[65] )
  {
    KeAcquireSpinLockAtDpcLevel(v6);
    MiniportAdapterHandle[65] = KeGetCurrentThread();
    *((_DWORD *)MiniportAdapterHandle + 464) = 723944;
LABEL_5:
    MiniportAdapterHandle[65] = 0LL;
    *((_DWORD *)MiniportAdapterHandle + 464) = 0;
    KeReleaseSpinLockFromDpcLevel(MiniportAdapterHandle + 12);
    a2(MiniportAdapterHandle[3], a3);
    KeAcquireSpinLockAtDpcLevel(MiniportAdapterHandle + 12);
    MiniportAdapterHandle[65] = KeGetCurrentThread();
    *((_DWORD *)MiniportAdapterHandle + 464) = 723962;
    ndisMProcessDeferred(MiniportAdapterHandle);
    *((_BYTE *)MiniportAdapterHandle + 89) = 0;
    MiniportAdapterHandle[232] = 0LL;
    MiniportAdapterHandle[233] = 0LL;
    MiniportAdapterHandle[65] = 0LL;
    KeReleaseSpinLockFromDpcLevel(MiniportAdapterHandle + 12);
    goto LABEL_8;
  }
  KeAcquireSpinLockAtDpcLevel(v6);
  MiniportAdapterHandle[65] = KeGetCurrentThread();
  *((_DWORD *)MiniportAdapterHandle + 464) = 723949;
  if ( !*((_BYTE *)MiniportAdapterHandle + 89) )
  {
    *((_BYTE *)MiniportAdapterHandle + 89) = 1;
    *((_DWORD *)MiniportAdapterHandle + 465) = 723950;
    MiniportAdapterHandle[233] = KeGetCurrentThread();
    goto LABEL_5;
  }
  v10 = ndisMQueueNewWorkItem(MiniportAdapterHandle, v9, a3, a2);
  MiniportAdapterHandle[65] = 0LL;
  v11 = v10;
  *((_DWORD *)MiniportAdapterHandle + 464) = 0;
  KeReleaseSpinLockFromDpcLevel(MiniportAdapterHandle + 12);
  v7 = -1073741670;
  if ( !v11 )
    v7 = 259;
LABEL_8:
  if ( v8 != 2 )
    KeLowerIrql(v8);
  return v7;
}

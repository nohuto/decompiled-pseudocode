/*
 * XREFs of ndisMProcessSGListS @ 0x1C00481F0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0016CBC (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ndisMProcessDeferred @ 0x1C0059EE8 (ndisMProcessDeferred.c)
 *     ndisMQueueWorkItem @ 0x1C005A54C (ndisMQueueWorkItem.c)
 */

void __fastcall ndisMProcessSGListS(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rdx
  char v9; // di
  struct _NDIS_STACK_RESERVED *v10; // [rsp+40h] [rbp+18h] BYREF

  *(_QWORD *)(*(unsigned __int16 *)(a4 + 42) + a4 + 80) = a3;
  NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)a4, &v10);
  v5 = *(_QWORD *)v10;
  if ( **(_BYTE **)v10 == 5 )
    v6 = *(_QWORD *)(v5 + 32);
  else
    v6 = *(_QWORD *)(v5 + 16);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 96));
  *(_QWORD *)(v6 + 520) = KeGetCurrentThread();
  v7 = a4 + 64;
  *(_DWORD *)(v6 + 1856) = 1835951;
  *(_QWORD *)(a4 + 72) = a4 + 64;
  *(_QWORD *)(a4 + 64) = a4 + 64;
  v8 = *(_QWORD **)(v6 + 136);
  *(_QWORD *)(a4 + 64) = v6 + 128;
  *(_QWORD *)(a4 + 72) = v8;
  if ( *v8 != v6 + 128 )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v6 + 136) = v7;
  if ( !*(_QWORD *)(v6 + 144) )
    *(_QWORD *)(v6 + 144) = a4;
  v9 = 0;
  if ( !*(_BYTE *)(v6 + 89) )
  {
    *(_BYTE *)(v6 + 89) = 1;
    v9 = 1;
    *(_DWORD *)(v6 + 1860) = 1835967;
    *(_QWORD *)(v6 + 1864) = KeGetCurrentThread();
  }
  ndisMQueueWorkItem(v6, 1LL);
  if ( v9 )
  {
    ndisMProcessDeferred((NDIS_HANDLE)v6);
    *(_DWORD *)(v6 + 1860) = 0;
    *(_QWORD *)(v6 + 1864) = 0LL;
    *(_BYTE *)(v6 + 89) = 0;
  }
  *(_QWORD *)(v6 + 520) = 0LL;
  *(_DWORD *)(v6 + 1856) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v6 + 96));
}

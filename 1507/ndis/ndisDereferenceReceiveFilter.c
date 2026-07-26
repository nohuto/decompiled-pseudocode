/*
 * XREFs of ndisDereferenceReceiveFilter @ 0x1C0037E38
 * Callers:
 *     ndisClearReceiveFilter @ 0x1C0037D54 (ndisClearReceiveFilter.c)
 *     ndisClearReceiveFiltersForProtocol @ 0x1C009BF6C (ndisClearReceiveFiltersForProtocol.c)
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0003024 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisDereferenceReceiveQueue @ 0x1C003800C (ndisDereferenceReceiveQueue.c)
 */

__int64 __fastcall ndisDereferenceReceiveFilter(_QWORD *P)
{
  __int64 v1; // rdi
  unsigned int v3; // esi
  _DWORD *v4; // r14
  __int64 v5; // r12
  char v6; // bp
  char v7; // r13
  char v8; // r15
  KIRQL v9; // al
  _QWORD **v10; // rdx
  PVOID *v11; // rcx
  _QWORD *v12; // rcx
  PVOID *v13; // rax
  _QWORD **v14; // rdx
  PVOID *v15; // rcx
  __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // rax
  KIRQL NewIrql; // [rsp+60h] [rbp+8h]
  unsigned int v21; // [rsp+68h] [rbp+10h]

  v1 = P[7];
  v3 = *((_DWORD *)P + 12);
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
  *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v1 + 1856) = 2689515;
  --*((_DWORD *)P + 20);
  NewIrql = v9;
  v21 = *((_DWORD *)P + 20);
  if ( !v21 )
  {
    v6 = 1;
    *(_BYTE *)((v3 >> 3) + *(_QWORD *)(v1 + 3560)) &= ~(1 << (v3 & 7));
    v4 = (_DWORD *)P[9];
    if ( v4 )
    {
      v10 = (_QWORD **)P[2];
      v11 = (PVOID *)P[3];
      if ( v10[1] != P + 2 || *v11 != P + 2 )
        __fastfail(3u);
      *v11 = v10;
      v7 = 1;
      v10[1] = v11;
      --v4[21];
    }
    if ( P[8] )
    {
      v8 = 1;
      v5 = P[8];
    }
    v12 = (_QWORD *)*P;
    v13 = (PVOID *)P[1];
    if ( *(_QWORD **)(*P + 8LL) != P || *v13 != P )
      __fastfail(3u);
    *v13 = v12;
    v12[1] = v13;
    --*(_DWORD *)(v1 + 3572);
    if ( P[22] )
    {
      v14 = (_QWORD **)P[4];
      v15 = (PVOID *)P[5];
      if ( v14[1] != P + 4 || *v15 != P + 4 )
        __fastfail(3u);
      *v15 = v14;
      v14[1] = v15;
      --*(_DWORD *)(P[22] + 864LL);
      v16 = P[22];
      v17 = *(_DWORD *)(v16 + 124) == 0;
      v18 = *(_QWORD *)(v16 + 88);
      if ( v17 )
        --*(_DWORD *)(v18 + 648);
      else
        --*(_DWORD *)(v18 + 652);
    }
    ExFreePoolWithTag(P, 0);
  }
  *(_QWORD *)(v1 + 520) = 0LL;
  *(_DWORD *)(v1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), NewIrql);
  if ( v7 )
    ndisDereferenceReceiveQueue(v4);
  if ( v8 )
    ndisMDereferenceOpenUnlocked(v5);
  if ( v6 )
    ndisDereferenceMiniport(v1, 0x44u);
  return v21;
}

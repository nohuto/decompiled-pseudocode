/*
 * XREFs of TopologyPUPrologic @ 0x1C0017850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00072E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TopologyPUPrologic(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  NTSTATUS v7; // edi
  __int64 v8; // r14
  unsigned int *PoolWithTag; // rax
  __int64 v10; // r8
  unsigned int *v11; // rbx
  __int64 v12; // rdx
  unsigned int *v13; // r14
  _DWORD *v14; // rax

  v3 = *(unsigned int *)(a2 + 80);
  *(_DWORD *)(a3 + 76) = 17;
  *(_QWORD *)(a3 + 8) = &KSNODETYPE_PROLOGIC_DECODER;
  *(_QWORD *)(a3 + 16) = &KSNODETYPE_PROLOGIC_DECODER;
  if ( (_DWORD)v3 )
  {
    v8 = v3;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPool, 4 * v3 + 40, 0x41627845u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    *(_QWORD *)(a3 + 128) = PoolWithTag;
    *PoolWithTag = 3;
    PoolWithTag[2] = *(_DWORD *)(*(_QWORD *)(a2 + 56) + 4LL);
    PoolWithTag[3] = *(_DWORD *)(a2 + 24);
    *((_QWORD *)PoolWithTag + 4) = PoolWithTag + 10;
    PoolWithTag[5] = v3;
    v12 = 0LL;
    do
    {
      *(_DWORD *)(v12 + *((_QWORD *)PoolWithTag + 4)) = *(_DWORD *)(v12 + *(_QWORD *)(a2 + 88));
      v12 += 4LL;
      --v8;
    }
    while ( v8 );
    if ( (*(_DWORD *)(a2 + 76) & 2) != 0 )
    {
      v13 = PoolWithTag + 6;
      PoolWithTag[6] = 0;
      LOBYTE(v10) = -127;
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a3 + 136))(a1, a3, v10);
      if ( v7 < 0 )
        goto LABEL_12;
      *(_DWORD *)(a3 + 88) = *(_DWORD *)(*((_QWORD *)v11 + 4) + 4LL * *v13);
    }
    else
    {
      v14 = (_DWORD *)*((_QWORD *)PoolWithTag + 4);
      v11[6] = 1;
      *(_DWORD *)(a3 + 88) = *v14;
    }
    v7 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v11, ExFreePool);
    if ( v7 >= 0 )
      return (unsigned int)v7;
LABEL_12:
    ExFreePool(v11);
    return (unsigned int)v7;
  }
  return (unsigned int)-1073741438;
}

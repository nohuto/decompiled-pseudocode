/*
 * XREFs of PnpLogDeviceConflictingResource @ 0x140555A04
 * Callers:
 *     IopTestConfiguration @ 0x14055645C (IopTestConfiguration.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void __fastcall PnpLogDeviceConflictingResource(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  PVOID PoolWithTag; // rax
  __int64 v8; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    v5 = *(_QWORD *)(v2 + 32);
    v6 = v5 ? *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL) : 0LL;
    if ( v6 )
    {
      if ( !*(_QWORD *)(v6 + 712) )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x62655250u);
        *(_QWORD *)(v6 + 712) = PoolWithTag;
        if ( PoolWithTag )
          memset(PoolWithTag, 0, 0x70uLL);
      }
      v8 = *(_QWORD *)(v6 + 712);
      if ( v8 )
      {
        if ( !*(_QWORD *)(v8 + 96) )
        {
          *(_BYTE *)(v8 + 88) = *(_BYTE *)(a1 + 16);
          *(_DWORD *)(v8 + 92) = *(_DWORD *)(v2 + 16);
          *(_QWORD *)(v8 + 96) = *(_QWORD *)(v2 + 24);
          *(_QWORD *)(v8 + 104) = a2;
        }
      }
    }
  }
}

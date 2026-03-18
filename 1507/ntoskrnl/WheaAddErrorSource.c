/*
 * XREFs of WheaAddErrorSource @ 0x14058D00C
 * Callers:
 *     <none>
 * Callees:
 *     WheapAddErrorSource @ 0x14016B998 (WheapAddErrorSource.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     WheapInitializeErrorSource @ 0x1405B4108 (WheapInitializeErrorSource.c)
 */

__int64 __fastcall WheaAddErrorSource(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // ecx
  PVOID PoolWithTag; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int128 v9; // xmm1
  __int64 v10; // rcx
  unsigned int v11; // edi
  int v12; // ecx

  v2 = a1;
  v4 = *(_DWORD *)(a1 + 8);
  if ( ((v4 - 4) & 0xFFFFFFFA) != 0 || v4 == 9 )
    return 3221225659LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x428uLL, 0x61656857u);
  v6 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x428uLL);
  v7 = 7LL;
  v8 = v6 + 89;
  do
  {
    *(_OWORD *)v8 = *(_OWORD *)v2;
    *(_OWORD *)(v8 + 16) = *(_OWORD *)(v2 + 16);
    *(_OWORD *)(v8 + 32) = *(_OWORD *)(v2 + 32);
    *(_OWORD *)(v8 + 48) = *(_OWORD *)(v2 + 48);
    *(_OWORD *)(v8 + 64) = *(_OWORD *)(v2 + 64);
    *(_OWORD *)(v8 + 80) = *(_OWORD *)(v2 + 80);
    *(_OWORD *)(v8 + 96) = *(_OWORD *)(v2 + 96);
    v8 += 128LL;
    v9 = *(_OWORD *)(v2 + 112);
    v2 += 128LL;
    *(_OWORD *)(v8 - 16) = v9;
    --v7;
  }
  while ( v7 );
  *(_OWORD *)v8 = *(_OWORD *)v2;
  *(_OWORD *)(v8 + 16) = *(_OWORD *)(v2 + 16);
  *(_OWORD *)(v8 + 32) = *(_OWORD *)(v2 + 32);
  *(_OWORD *)(v8 + 48) = *(_OWORD *)(v2 + 48);
  *(_QWORD *)(v8 + 64) = *(_QWORD *)(v2 + 64);
  *(_DWORD *)(v8 + 72) = *(_DWORD *)(v2 + 72);
  v11 = WheapInitializeErrorSource(v6);
  if ( v11 )
  {
    ExFreePoolWithTag((PVOID)v6, 0x61656857u);
    return v11;
  }
  else
  {
    *(_QWORD *)(v6 + 56) = a2;
    WheapAddErrorSource(v10, v6);
    v12 = 0;
    if ( WheapInitializationComplete )
    {
      v12 = ((__int64 (__fastcall *)(__int64, __int64, __int64))qword_14036C968[6 * *(int *)(v6 + 97)])(
              1LL,
              v6 + 89,
              a2);
      if ( v12 >= 0 )
        *(_DWORD *)(v6 + 101) = 2;
    }
    return (unsigned int)v12;
  }
}

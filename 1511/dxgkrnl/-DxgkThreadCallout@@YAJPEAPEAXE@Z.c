/*
 * XREFs of ?DxgkThreadCallout@@YAJPEAPEAXE@Z @ 0x1C00BB3F0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 */

__int64 __fastcall DxgkThreadCallout(void **a1, char a2)
{
  _DWORD *PoolWithQuotaTag; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // rbx
  void *v10; // rcx
  __int64 v11; // rax

  if ( a2 != 1 )
  {
    v10 = *a1;
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0);
      *a1 = 0LL;
    }
    return 0LL;
  }
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x8CuLL, 0x4B677844u);
  v8 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    *PoolWithQuotaTag = 0;
    PoolWithQuotaTag[34] = 0;
    memset(PoolWithQuotaTag + 1, 0, 0x84uLL);
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    *a1 = v8;
    return 0LL;
  }
  v11 = WdLogNewEntry5_WdLowResource(v5, v4, v6, v7);
  *(_QWORD *)(v11 + 24) = 154LL;
  WdLogEvent5_WdLowResource(v11);
  *a1 = 0LL;
  return 3221225495LL;
}

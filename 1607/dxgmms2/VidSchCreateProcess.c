/*
 * XREFs of VidSchCreateProcess @ 0x1C005D780
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C00100C0 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00100E0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0014E40 (memset.c)
 */

__int64 __fastcall VidSchCreateProcess(__int64 a1, __int64 a2)
{
  PVOID PoolWithTag; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCount; // ebp
  PVOID v8; // rax
  __int64 v9; // rcx
  PVOID v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  if ( !a1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v14);
    return 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0xAB0uLL, 0x68536956u);
  v5 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    v16 = WdLogNewEntry5_WdWarning(v4);
    WdLogEvent5_WdWarning(v16);
    return 0LL;
  }
  memset(PoolWithTag, 0, 0xAB0uLL);
  *(_DWORD *)v5 = 1869762646;
  *(_QWORD *)(v5 + 8) = a1;
  *(_DWORD *)(v5 + 16) = *(_BYTE *)(a1 + 289) != 0 ? 5 : 2;
  TdrHistoryInit((struct _TDR_HISTORY *)(v5 + 32));
  Global = DXGGLOBAL::GetGlobal();
  MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
  v8 = ExAllocatePoolWithTag(PagedPool, 4LL * ((MaximumAdapterCount + 31) >> 5), 0x68536956u);
  *(_QWORD *)(v5 + 2616) = v8;
  if ( !v8 )
  {
    v15 = WdLogNewEntry5_WdWarning(v9);
    WdLogEvent5_WdWarning(v15);
LABEL_13:
    ExFreePoolWithTag((PVOID)v5, 0);
    return 0LL;
  }
  memset(v8, 0, 4LL * ((MaximumAdapterCount + 31) >> 5));
  v10 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * MaximumAdapterCount, 0x68536956u);
  *(_QWORD *)(v5 + 24) = v10;
  if ( !v10 )
  {
    v17 = WdLogNewEntry5_WdWarning(v11);
    WdLogEvent5_WdWarning(v17);
    ExFreePoolWithTag(*(PVOID *)(v5 + 2616), 0);
    goto LABEL_13;
  }
  memset(v10, 0, 8LL * MaximumAdapterCount);
  *(_QWORD *)(v5 + 2632) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(v5 + 2648) = *(_QWORD *)(a1 + 48);
  v12 = *(_QWORD *)(a1 + 64);
  if ( v12 )
    v12 = *(_QWORD *)(v12 + 80);
  *(_QWORD *)(v5 + 2640) = v12;
  if ( *(_BYTE *)(a1 + 289) )
    g_pVidSchSystemProcess = v5;
  return v5;
}

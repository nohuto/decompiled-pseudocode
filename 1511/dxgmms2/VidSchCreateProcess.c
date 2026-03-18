/*
 * XREFs of VidSchCreateProcess @ 0x1C005F140
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0011CAC (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011CC0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0016C00 (memset.c)
 */

__int64 __fastcall VidSchCreateProcess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID PoolWithTag; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCount; // ebp
  PVOID v10; // rax
  __int64 v11; // rcx
  PVOID v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  if ( !a1 )
  {
    v16 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v16);
    return 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0xA70uLL, 0x68536956u);
  v7 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    v18 = WdLogNewEntry5_WdWarning(v6);
    WdLogEvent5_WdWarning(v18);
    return 0LL;
  }
  memset(PoolWithTag, 0, 0xA70uLL);
  *(_DWORD *)v7 = 1869762646;
  *(_QWORD *)(v7 + 8) = a1;
  *(_QWORD *)(v7 + 2664) = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(v7 + 16) = *(_BYTE *)(a1 + 313) != 0 ? 5 : 2;
  TdrHistoryInit((struct _TDR_HISTORY *)(v7 + 32));
  Global = DXGGLOBAL::GetGlobal();
  MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
  v10 = ExAllocatePoolWithTag(PagedPool, 4LL * ((MaximumAdapterCount + 31) >> 5), 0x68536956u);
  *(_QWORD *)(v7 + 2616) = v10;
  if ( !v10 )
  {
    v17 = WdLogNewEntry5_WdWarning(v11);
    WdLogEvent5_WdWarning(v17);
LABEL_13:
    ExFreePoolWithTag((PVOID)v7, 0);
    return 0LL;
  }
  memset(v10, 0, 4LL * ((MaximumAdapterCount + 31) >> 5));
  v12 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * MaximumAdapterCount, 0x68536956u);
  *(_QWORD *)(v7 + 24) = v12;
  if ( !v12 )
  {
    v19 = WdLogNewEntry5_WdWarning(v13);
    WdLogEvent5_WdWarning(v19);
    ExFreePoolWithTag(*(PVOID *)(v7 + 2616), 0);
    goto LABEL_13;
  }
  memset(v12, 0, 8LL * MaximumAdapterCount);
  *(_QWORD *)(v7 + 2632) = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(v7 + 2648) = *(_QWORD *)(a1 + 56);
  v14 = *(_QWORD *)(a1 + 72);
  if ( v14 )
    v14 = *(_QWORD *)(v14 + 80);
  *(_QWORD *)(v7 + 2640) = v14;
  if ( *(_BYTE *)(a1 + 313) )
    g_pVidSchSystemProcess = v7;
  return v7;
}

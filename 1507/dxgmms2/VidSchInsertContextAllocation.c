/*
 * XREFs of VidSchInsertContextAllocation @ 0x1C0078710
 * Callers:
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C004C4FC (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0008500 (memset.c)
 */

__int64 __fastcall VidSchInsertContextAllocation(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rbx
  __int64 v13; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  _QWORD *v17; // rax

  v8 = operator new(0x20uLL, 0x68536956u, PagedPool);
  v12 = v8;
  if ( v8 )
  {
    memset(v8, 0, 0x20uLL);
    v12[3] = a4;
    if ( (*(_DWORD *)(**(_QWORD **)a4 + 76LL) & 0x8000000) != 0 )
    {
      v15 = a2 + 552;
      v16 = a2 + 576;
    }
    else
    {
      v15 = a3 + 240;
      v16 = a3 + 264;
    }
    v12[2] = v15;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v15, 0LL);
    *(_QWORD *)(v15 + 8) = KeGetCurrentThread();
    v17 = *(_QWORD **)(v16 + 8);
    *v12 = v16;
    v12[1] = v17;
    if ( *v17 != v16 )
      __fastfail(3u);
    *v17 = v12;
    *(_QWORD *)(v16 + 8) = v12;
    *(_QWORD *)(v15 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v15, 0LL);
    KeLeaveCriticalRegion();
    *a5 = v12;
    return 0LL;
  }
  else
  {
    v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    WdLogEvent5_WdWarning(v13);
    *a5 = 0LL;
    return 3221225495LL;
  }
}

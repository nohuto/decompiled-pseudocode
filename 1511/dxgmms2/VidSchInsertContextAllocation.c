/*
 * XREFs of VidSchInsertContextAllocation @ 0x1C005F970
 * Callers:
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0051730 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0016C00 (memset.c)
 */

__int64 __fastcall VidSchInsertContextAllocation(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rsi
  _QWORD *v13; // rax
  __int64 v15; // rax

  v8 = operator new(0x20uLL, 0x68536956u, PagedPool);
  v10 = v8;
  if ( v8 )
  {
    memset(v8, 0, 0x20uLL);
    v10[3] = a4;
    if ( (*(_DWORD *)(**(_QWORD **)a4 + 76LL) & 0x10000000) != 0 )
    {
      v11 = a2 + 552;
      v12 = a2 + 576;
    }
    else
    {
      v11 = a3 + 240;
      v12 = a3 + 264;
    }
    v10[2] = v11;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v11, 0LL);
    *(_QWORD *)(v11 + 8) = KeGetCurrentThread();
    v13 = *(_QWORD **)(v12 + 8);
    *v10 = v12;
    v10[1] = v13;
    if ( *v13 != v12 )
      __fastfail(3u);
    *v13 = v10;
    *(_QWORD *)(v12 + 8) = v10;
    *(_QWORD *)(v11 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
    *a5 = v10;
    return 0LL;
  }
  else
  {
    v15 = WdLogNewEntry5_WdWarning(v9);
    WdLogEvent5_WdWarning(v15);
    *a5 = 0LL;
    return 3221225495LL;
  }
}

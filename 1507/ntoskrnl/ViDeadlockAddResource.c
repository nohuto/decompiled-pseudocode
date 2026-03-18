/*
 * XREFs of ViDeadlockAddResource @ 0x1407501FC
 * Callers:
 *     VfDeadlockAcquireResource @ 0x14074EDC4 (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x14074FB94 (VfDeadlockInitializeResource.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14025B0C0 (VfReportIssueWithOptions.c)
 *     VfUtilAddressRangeAdd @ 0x1407376D0 (VfUtilAddressRangeAdd.c)
 *     ViDeadlockPreprocessOptions @ 0x140751278 (ViDeadlockPreprocessOptions.c)
 *     ViDeadlockRemoveResource @ 0x1407514D0 (ViDeadlockRemoveResource.c)
 *     ViDeadlockSearchResource @ 0x1407517B8 (ViDeadlockSearchResource.c)
 */

__int64 __fastcall ViDeadlockAddResource(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        _OWORD *a4,
        __int64 *a5,
        __int64 a6)
{
  __int64 v6; // rbp
  unsigned int v10; // ebx
  __int64 v11; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v13; // r9
  __int64 v14; // rdx
  __int64 *v15; // r14
  __int64 v16; // rcx
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9

  v6 = (int)a2;
  if ( a2 > 8 )
    return 0LL;
  v10 = 0;
  v11 = ViDeadlockSearchResource(a1, a6, a3, a4);
  if ( v11 )
  {
    if ( (ViDeadlockResourceTypeInfo[v6] & 8) == 0 )
    {
      ViDeadlockPreprocessOptions(byte_1403231A4, "Re-initializing active lock 0x%p.", (const void *)0x1005);
      VfReportIssueWithOptions(196, 4101, a1, v11, 0LL, byte_1403231A4);
    }
    if ( *(_QWORD *)(v11 + 16) )
    {
      ViDeadlockPreprocessOptions(byte_1403231A0, "Re-initializing active lock 0x%p.", (const void *)0x1005);
      VfReportIssueWithOptions(196, 4101, a1, v11, 1uLL, byte_1403231A0);
    }
    ViDeadlockRemoveResource(v11);
    *a5 = v11;
  }
  CurrentThread = KeGetCurrentThread();
  if ( ((void *)a1 >= CurrentThread->InitialStack || (void *volatile)a1 <= CurrentThread->StackLimit) && a3 )
  {
    v13 = ViDeadlockGlobals;
    *(_DWORD *)(a3 + 4) = 0;
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 120) = 0LL;
    *(_QWORD *)(a3 + 184) = 0LL;
    *(_DWORD *)a3 = v6;
    *(_QWORD *)(a3 + 8) = a1;
    *(_QWORD *)(a3 + 32) = a3 + 24;
    *(_QWORD *)(a3 + 24) = a3 + 24;
    *(_OWORD *)(a3 + 56) = *a4;
    v14 = ((a1 >> 12) * (unsigned __int128)0x40100401004011uLL) >> 64;
    *(_OWORD *)(a3 + 72) = a4[1];
    *(_OWORD *)(a3 + 88) = a4[2];
    *(_OWORD *)(a3 + 104) = a4[3];
    v15 = (__int64 *)(a3 + 40);
    v16 = (a1 >> 12) - 1023 * ((v14 + (((a1 >> 12) - v14) >> 1)) >> 9);
    v17 = (__int64 *)(v13[2] + 16 * v16);
    v18 = *v17;
    *v15 = *v17;
    v15[1] = (__int64)v17;
    if ( *(__int64 **)(v18 + 8) != v17 )
      __fastfail(3u);
    v19 = (unsigned int)ViDeadlockResourceTypeSizeInfo[v6];
    *(_QWORD *)(v18 + 8) = v15;
    *v17 = (__int64)v15;
    VfUtilAddressRangeAdd(&v13[2 * v16 + 4], a1, v19);
    ++*(_QWORD *)(v20 + 24);
    return 1;
  }
  return v10;
}

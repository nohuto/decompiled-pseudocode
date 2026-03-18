/*
 * XREFs of ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C008D814
 * Callers:
 *     VidMmWaitOnAllocationPresentQueue @ 0x1C001D710 (VidMmWaitOnAllocationPresentQueue.c)
 *     ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1C00671F0 (-VidMmProcessAsyncOperation@@YAXPEAX@Z.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C000E3F8 (VidSchiInterlockedRemoveEntryList.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0042284 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0042420 (VidSchRegisterCompletionEvent.c)
 */

__int64 __fastcall VIDMM_GLOBAL::WaitOnAllocationPresentQueue(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned int a3)
{
  __int64 v3; // r15
  __int64 v5; // rsi
  int v6; // r14d
  __int64 v7; // rbx
  __int64 v8; // rbp
  _QWORD *v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // rax
  _QWORD v15[20]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = *((_QWORD *)a2 + 12);
  v5 = a3;
  v6 = 0;
  v7 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 32LL);
  v8 = *(_QWORD *)(v7 + 32);
  if ( a3 < *(_DWORD *)(v8 + 40) )
  {
    if ( *(_BYTE *)(v7 + 164) || _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 160), 0, 0) )
    {
      v14 = WdLogNewEntry5_WdWarning(this);
      *(_QWORD *)(v14 + 24) = v7;
      v10 = -1071775232;
      *(_QWORD *)(v14 + 32) = -1071775232LL;
      WdLogEvent5_WdWarning(v14);
      return v10;
    }
    if ( *((int *)a2 + 26) <= 0 && *(int *)(*(_QWORD *)(v3 + 16) + 8LL) <= 0 )
      return 0LL;
    memset(v15, 0, sizeof(v15));
    LODWORD(v15[2]) = 5;
    v15[3] = v7;
    LODWORD(v15[5]) = v5;
    LOBYTE(v15[19]) = 1;
    VidSchRegisterCompletionEvent(v8, (__int64)v15);
    while ( (*((int *)a2 + 26) > 0 || *(int *)(*(_QWORD *)(v3 + 16) + 8LL) > 0) && v6 >= 0 )
      v6 = VidSchWaitForCompletionEvent(v8, (__int64)v15, 2LL);
    VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v8 + 1872), v15, 0LL);
    if ( v6 < 0 || *((int *)a2 + 26) <= 0 && *(int *)(*(_QWORD *)(v3 + 16) + 8LL) <= 0 )
      return 0LL;
    v9 = (_QWORD *)WdLogNewEntry5_WdAssertion(v12, v11);
    v9[3] = v7;
    v10 = -1073741811;
    v9[5] = -1073741811LL;
    v9[4] = v5;
  }
  else
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdAssertion(this, a2);
    v10 = -1073741811;
    v9[3] = v5;
    v9[4] = -1073741811LL;
  }
  WdLogEvent5_WdAssertion(v9);
  return v10;
}

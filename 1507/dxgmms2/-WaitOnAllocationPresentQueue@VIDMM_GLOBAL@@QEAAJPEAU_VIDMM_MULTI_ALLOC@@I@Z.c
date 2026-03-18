/*
 * XREFs of ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C0056D10
 * Callers:
 *     VidMmWaitOnAllocationPresentQueue @ 0x1C000E930 (VidMmWaitOnAllocationPresentQueue.c)
 *     ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1C00327C0 (-VidMmProcessAsyncOperation@@YAXPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C001E478 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0078B5C (VidSchRegisterCompletionEvent.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0079BB0 (VidSchWaitForCompletionEvent.c)
 */

__int64 __fastcall VIDMM_GLOBAL::WaitOnAllocationPresentQueue(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbp
  __int64 v6; // rsi
  int v7; // r15d
  __int64 v8; // rbx
  __int64 v9; // r14
  _QWORD *v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v18; // rax
  _QWORD v19[20]; // [rsp+20h] [rbp-B8h] BYREF

  v4 = *((_QWORD *)a2 + 12);
  v6 = (unsigned int)a3;
  v7 = 0;
  v8 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 32LL);
  v9 = *(_QWORD *)(v8 + 32);
  if ( (unsigned int)a3 < *(_DWORD *)(v9 + 40) )
  {
    if ( *(_BYTE *)(v8 + 172) || _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 168), 0, 0) )
    {
      v18 = WdLogNewEntry5_WdWarning(this, a2, a3);
      *(_QWORD *)(v18 + 24) = v8;
      v11 = -1071775232;
      *(_QWORD *)(v18 + 32) = -1071775232LL;
      WdLogEvent5_WdWarning(v18);
      return v11;
    }
    v12 = *(_QWORD *)(v4 + 16);
    if ( *(int *)(v12 + 8) <= 0 && *(int *)(v12 + 12) <= 0 && *((int *)a2 + 26) <= 0 )
      return 0LL;
    memset(v19, 0, sizeof(v19));
    LODWORD(v19[2]) = 5;
    v19[3] = v8;
    LODWORD(v19[5]) = v6;
    LOBYTE(v19[19]) = 1;
    VidSchRegisterCompletionEvent(v9, v19);
    while ( (*(_DWORD *)(*(_QWORD *)(v4 + 16) + 8LL) || *(_DWORD *)(v8 + 4 * v6 + 872) || *((int *)a2 + 26) > 0)
         && v7 >= 0 )
      v7 = VidSchWaitForCompletionEvent((struct _VIDSCH_GLOBAL *)v9);
    VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v9 + 1888), v19, 0LL);
    if ( v7 < 0 )
      return 0LL;
    v16 = *(unsigned int *)(*(_QWORD *)(v4 + 16) + 8LL);
    if ( !(_DWORD)v16 && !*((_DWORD *)a2 + 26) )
      return 0LL;
    v10 = (_QWORD *)WdLogNewEntry5_WdAssertion(v16, v13, v14, v15);
    v10[3] = v8;
    v11 = -1073741811;
    v10[5] = -1073741811LL;
    v10[4] = v6;
  }
  else
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    v11 = -1073741811;
    v10[3] = v6;
    v10[4] = -1073741811LL;
  }
  WdLogEvent5_WdAssertion(v10);
  return v11;
}

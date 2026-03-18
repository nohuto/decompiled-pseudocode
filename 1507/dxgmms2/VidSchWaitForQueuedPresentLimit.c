/*
 * XREFs of VidSchWaitForQueuedPresentLimit @ 0x1C007A090
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C001E478 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0078B5C (VidSchRegisterCompletionEvent.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0079BB0 (VidSchWaitForCompletionEvent.c)
 */

__int64 __fastcall VidSchWaitForQueuedPresentLimit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // rbp
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rsi
  __int64 v11; // rax
  _QWORD v12[20]; // [rsp+20h] [rbp-A8h] BYREF

  v4 = 0;
  v5 = (unsigned int)a2;
  if ( !a1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    v8 = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
LABEL_3:
    WdLogEvent5_WdAssertion(v7);
    return v8;
  }
  v9 = *(_QWORD *)(a1 + 32);
  if ( (unsigned int)a2 >= *(_DWORD *)(v9 + 40) )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    v8 = -1073741811;
    *(_QWORD *)(v7 + 24) = v5;
    *(_QWORD *)(v7 + 32) = -1073741811LL;
    goto LABEL_3;
  }
  if ( *(_BYTE *)(a1 + 172) || _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 168), 0, 0) )
  {
    v11 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v11 + 24) = a1;
    v8 = -1071775232;
    *(_QWORD *)(v11 + 32) = -1071775232LL;
    WdLogEvent5_WdWarning(v11);
    return v8;
  }
  if ( *(_DWORD *)(a1 + 4LL * (unsigned int)a2 + 872) >= *(_DWORD *)(a1 + 212) )
  {
    if ( !(_BYTE)a3 )
      return 3223191810LL;
    memset(v12, 0, sizeof(v12));
    LODWORD(v12[2]) = 4;
    v12[3] = a1;
    LODWORD(v12[5]) = v5;
    LOBYTE(v12[19]) = 1;
    VidSchRegisterCompletionEvent(v9, (__int64)v12);
    if ( *(_DWORD *)(a1 + 4 * v5 + 872) >= *(_DWORD *)(a1 + 212) )
      v4 = VidSchWaitForCompletionEvent((struct _VIDSCH_GLOBAL *)v9, (__int64)v12, 2LL, 0);
    VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v9 + 1888), v12, 0LL);
  }
  return v4;
}

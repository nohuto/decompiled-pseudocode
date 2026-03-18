/*
 * XREFs of VidSchWaitForQueuedPresentLimit @ 0x1C0042170
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C000E3F8 (VidSchiInterlockedRemoveEntryList.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0042284 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0042420 (VidSchRegisterCompletionEvent.c)
 */

__int64 __fastcall VidSchWaitForQueuedPresentLimit(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  unsigned int v6; // ebp
  __int64 v7; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD v12[21]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = (unsigned int)a2;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 32);
    if ( (unsigned int)a2 >= *(_DWORD *)(v5 + 40) )
    {
      v10 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v10 + 24) = v3;
      *(_QWORD *)(v10 + 32) = -1073741811LL;
      WdLogEvent5_WdAssertion(v10);
      return 3221225485LL;
    }
    else if ( *(_BYTE *)(a1 + 164) || (v6 = 0, _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 160), 0, 0)) )
    {
      v11 = WdLogNewEntry5_WdWarning(a1);
      *(_QWORD *)(v11 + 24) = a1;
      *(_QWORD *)(v11 + 32) = -1071775232LL;
      WdLogEvent5_WdWarning(v11);
      return 3223192064LL;
    }
    else
    {
      v7 = a1 + 4LL * (unsigned int)a2;
      if ( *(_DWORD *)(v7 + 996) >= *(_DWORD *)(a1 + 204) )
      {
        if ( !a3 )
          return 3223191810LL;
        memset(v12, 0, 0xA0uLL);
        LODWORD(v12[2]) = 4;
        v12[3] = a1;
        LODWORD(v12[5]) = v3;
        LOBYTE(v12[19]) = 1;
        VidSchRegisterCompletionEvent(v5, v12);
        if ( *(_DWORD *)(v7 + 996) >= *(_DWORD *)(a1 + 204) )
          v6 = VidSchWaitForCompletionEvent(v5, v12, 2LL);
        VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v5 + 1872), v12, 0LL);
      }
      return v6;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v9);
    return 3221225485LL;
  }
}

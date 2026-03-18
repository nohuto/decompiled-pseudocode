/*
 * XREFs of VidSchWaitForQueuedPresentLimit @ 0x1C003C720
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C000F96C (VidSchiInterlockedRemoveEntryList.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     VidSchRegisterCompletionEvent @ 0x1C003C834 (VidSchRegisterCompletionEvent.c)
 *     VidSchWaitForCompletionEvent @ 0x1C003C908 (VidSchWaitForCompletionEvent.c)
 */

__int64 __fastcall VidSchWaitForQueuedPresentLimit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v6; // rbp
  unsigned int v7; // edi
  __int64 v8; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD v13[21]; // [rsp+20h] [rbp-A8h] BYREF

  v4 = (unsigned int)a2;
  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 32);
    if ( (unsigned int)a2 >= *(_DWORD *)(v6 + 40) )
    {
      v11 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      *(_QWORD *)(v11 + 24) = v4;
      *(_QWORD *)(v11 + 32) = -1073741811LL;
      WdLogEvent5_WdAssertion(v11);
      return 3221225485LL;
    }
    else if ( *(_BYTE *)(a1 + 172) || (v7 = 0, _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 168), 0, 0)) )
    {
      v12 = WdLogNewEntry5_WdWarning(a1);
      *(_QWORD *)(v12 + 24) = a1;
      *(_QWORD *)(v12 + 32) = -1071775232LL;
      WdLogEvent5_WdWarning(v12);
      return 3223192064LL;
    }
    else
    {
      v8 = a1 + 4LL * (unsigned int)a2;
      if ( *(_DWORD *)(v8 + 1000) >= *(_DWORD *)(a1 + 212) )
      {
        if ( !(_BYTE)a3 )
          return 3223191810LL;
        memset(v13, 0, 0xA0uLL);
        LODWORD(v13[2]) = 4;
        v13[3] = a1;
        LODWORD(v13[5]) = v4;
        LOBYTE(v13[19]) = 1;
        VidSchRegisterCompletionEvent(v6, v13);
        if ( *(_DWORD *)(v8 + 1000) >= *(_DWORD *)(a1 + 212) )
          v7 = VidSchWaitForCompletionEvent(v6, v13, 2LL);
        VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v6 + 1840), v13, 0LL);
      }
      return v7;
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v10);
    return 3221225485LL;
  }
}

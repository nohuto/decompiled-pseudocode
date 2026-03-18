/*
 * XREFs of VidSchSetQueuedPresentLimit @ 0x1C00387C0
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C00382EC (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchSetQueuedPresentLimit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rax

  if ( !a1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL, a2, 0LL, a4);
    v8 = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v7);
    return v8;
  }
  v5 = *(_QWORD *)(a1 + 32);
  if ( *(_BYTE *)(a1 + 172) || _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 168), 0, 0) )
  {
    v9 = WdLogNewEntry5_WdWarning(v5, a2, 0LL);
    *(_QWORD *)(v9 + 24) = a1;
    v8 = -1071775232;
    *(_QWORD *)(v9 + 32) = -1071775232LL;
    WdLogEvent5_WdWarning(v9);
    return v8;
  }
  if ( !(_DWORD)a2 )
    LODWORD(a2) = *(_DWORD *)(v5 + 2164);
  *(_DWORD *)(a1 + 212) = a2;
  return 0LL;
}

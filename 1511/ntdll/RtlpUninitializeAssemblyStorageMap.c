/*
 * XREFs of RtlpUninitializeAssemblyStorageMap @ 0x180081D7C
 * Callers:
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180041CF8 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpFreeActivationContext @ 0x180081CFC (RtlpFreeActivationContext.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 */

_UNKNOWN **__fastcall RtlpUninitializeAssemblyStorageMap(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned int i; // edi
  unsigned __int64 v4; // rsi
  void *v5; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  if ( a1 )
  {
    result = &retaddr;
    for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
    {
      result = *(_UNKNOWN ***)(a1 + 8);
      v4 = (unsigned __int64)result[i];
      if ( v4 )
      {
        v5 = *(void **)(v4 + 24);
        *(_DWORD *)(v4 + 8) = 0;
        *(_QWORD *)(v4 + 16) = 0LL;
        if ( v5 )
        {
          NtClose(v5);
          *(_QWORD *)(v4 + 24) = 0LL;
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * i) = 0LL;
        result = (_UNKNOWN **)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
      }
    }
    if ( (*(_BYTE *)a1 & 1) != 0 )
      result = (_UNKNOWN **)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)a1 = 0LL;
  }
  return result;
}

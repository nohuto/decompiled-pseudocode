/*
 * XREFs of SmKmStoreHelperWorker @ 0x1400F71C0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     SmKmStoreHelperCommandProcess @ 0x14011066C (SmKmStoreHelperCommandProcess.c)
 *     SmKmStoreHelperCommandCleanup @ 0x140208890 (SmKmStoreHelperCommandCleanup.c)
 */

LONG __fastcall SmKmStoreHelperWorker(__int64 a1, __int64 a2, __int64 a3)
{
  LONG result; // eax
  unsigned int v5; // esi
  char v6; // bl
  __int128 v7; // xmm1
  _OWORD v8[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]

  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 25LL, a3);
  while ( 1 )
  {
    KeWaitForSingleObject((PVOID)(a1 + 8), Executive, 0, 0, 0LL);
    result = KeResetEvent((PRKEVENT)(a1 + 8));
    v5 = *(unsigned __int16 *)(a1 + 58);
    if ( v5 == 1 )
      break;
    SmKmStoreHelperCommandProcess(a1, *(unsigned __int16 *)(a1 + 58), a1 + 64);
    _m_prefetchw((const void *)(a1 + 56));
    v6 = _InterlockedOr((volatile signed __int32 *)(a1 + 56), 1u);
    if ( (v6 & 2) != 0 )
    {
      v7 = *(_OWORD *)(a1 + 80);
      v8[0] = *(_OWORD *)(a1 + 64);
      v9 = *(_QWORD *)(a1 + 96);
      v8[1] = v7;
      if ( v5 == 4 )
      {
        SmKmStoreHelperCommandCleanup(a1, 4LL, v8);
        v6 &= ~2u;
      }
    }
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    if ( (v6 & 2) != 0 )
      SmKmStoreHelperCommandCleanup(a1, v5, v8);
  }
  return result;
}

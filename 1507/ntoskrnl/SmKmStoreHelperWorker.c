/*
 * XREFs of SmKmStoreHelperWorker @ 0x1400DACBC
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     SmKmStoreHelperCommandProcess @ 0x14014325C (SmKmStoreHelperCommandProcess.c)
 *     SmKmStoreHelperCommandCleanup @ 0x140257B24 (SmKmStoreHelperCommandCleanup.c)
 */

LONG __fastcall SmKmStoreHelperWorker(__int64 a1)
{
  LONG result; // eax
  unsigned int v3; // esi
  char v4; // bl
  __int128 v5; // xmm1
  _OWORD v6[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]

  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 0x19u);
  while ( 1 )
  {
    KeWaitForSingleObject((PVOID)(a1 + 8), Executive, 0, 0, 0LL);
    result = KeResetEvent((PRKEVENT)(a1 + 8));
    v3 = *(unsigned __int16 *)(a1 + 58);
    if ( v3 == 1 )
      break;
    SmKmStoreHelperCommandProcess(a1, *(unsigned __int16 *)(a1 + 58), a1 + 64);
    _m_prefetchw((const void *)(a1 + 56));
    v4 = _InterlockedOr((volatile signed __int32 *)(a1 + 56), 1u);
    if ( (v4 & 2) != 0 )
    {
      v5 = *(_OWORD *)(a1 + 80);
      v6[0] = *(_OWORD *)(a1 + 64);
      v7 = *(_QWORD *)(a1 + 96);
      v6[1] = v5;
      if ( v3 == 4 )
      {
        SmKmStoreHelperCommandCleanup(a1, 4LL, v6);
        v4 &= ~2u;
      }
    }
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    if ( (v4 & 2) != 0 )
      SmKmStoreHelperCommandCleanup(a1, v3, v6);
  }
  return result;
}

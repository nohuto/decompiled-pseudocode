/*
 * XREFs of PfpProcessScenarioPhase @ 0x140582300
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140454728 (PfSetSuperfetchInformation.c)
 *     PfSnSetPrefetcherInformation @ 0x140454D9C (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     PsGetCurrentProcessSessionId @ 0x1400D09F0 (PsGetCurrentProcessSessionId.c)
 *     MmGetNextSession @ 0x1400FD460 (MmGetNextSession.c)
 *     PfPowerActionNotify @ 0x1403EE01C (PfPowerActionNotify.c)
 *     PfpScenCtxPrefetchWait @ 0x1403EED74 (PfpScenCtxPrefetchWait.c)
 *     PfpScenCtxScenarioSet @ 0x1403F69DC (PfpScenCtxScenarioSet.c)
 *     PfpLogScenarioEvent @ 0x1405667B8 (PfpLogScenarioEvent.c)
 */

__int64 __fastcall PfpProcessScenarioPhase(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  int v5; // ecx
  char v6; // dl
  int v8; // ecx
  __int64 v9; // r9
  int v10; // r8d
  int v11; // ecx
  int v12; // edx
  unsigned int v13; // esi
  void *NextSession; // rax

  v2 = 0;
  if ( *(_DWORD *)a1 != 4 )
    return (unsigned int)-1073741811;
  v5 = *(_DWORD *)(a1 + 4);
  if ( (unsigned int)(v5 - 1) > 4 )
    return (unsigned int)-1073741701;
  v6 = (*(_DWORD *)(a1 + 16) & 1) != 0;
  if ( v5 <= 2 )
    goto LABEL_4;
  if ( v5 != 3 )
  {
    if ( v5 == 4 )
    {
      v8 = *(_DWORD *)(a1 + 8);
      if ( v8 )
      {
        if ( v8 == 1 && (unsigned int)PsGetCurrentProcessSessionId() == MEMORY[0xFFFFF780000002D8] )
        {
          PfpScenCtxScenarioSet((ULONG_PTR)qword_1403534D0, 4, 0, 0LL);
          if ( dword_140350418 < (unsigned int)dword_14035041C )
            PfpLogScenarioEvent(5, 2LL, 3LL, (unsigned int)dword_140353504, 1);
        }
        return v2;
      }
      v9 = 0LL;
      v10 = 4;
      goto LABEL_32;
    }
    if ( v5 == 5 )
    {
LABEL_4:
      if ( a2 )
      {
        return (unsigned int)-1073741790;
      }
      else
      {
        if ( v5 == 5 )
          v6 |= 4u;
        PfPowerActionNotify(*(_DWORD *)(a1 + 8), v6, *(_DWORD *)(a1 + 16) >> 1);
      }
      return v2;
    }
    return (unsigned int)-1073741811;
  }
  v11 = *(_DWORD *)(a1 + 8);
  if ( v11 )
  {
    if ( v11 != 1 || dword_140353500 != 3 )
      return v2;
    PfpScenCtxPrefetchWait((ULONG_PTR)qword_1403534D0, 3, 0x1388u, *(unsigned int *)(a1 + 16));
    PfpLogScenarioEvent(3, 0LL, 0LL, (unsigned int)dword_140353504, 0);
    v9 = 0LL;
    v12 = 3;
    v10 = 0;
LABEL_33:
    PfpScenCtxScenarioSet((ULONG_PTR)qword_1403534D0, v12, v10, v9);
    return v2;
  }
  if ( (unsigned int)PsGetCurrentProcessSessionId() == MEMORY[0xFFFFF780000002D8]
    && dword_140350418 < (unsigned int)dword_14035041C )
  {
    v13 = 0;
    NextSession = (void *)MmGetNextSession(0LL);
    if ( NextSession )
    {
      while ( ++v13 < 3 )
      {
        NextSession = (void *)MmGetNextSession(NextSession);
        if ( !NextSession )
          goto LABEL_30;
      }
      ObfDereferenceObject(NextSession);
LABEL_30:
      if ( v13 >= 3 )
      {
        v9 = *(_QWORD *)(a1 + 24);
        v10 = 3;
LABEL_32:
        v12 = 0;
        goto LABEL_33;
      }
    }
  }
  return v2;
}

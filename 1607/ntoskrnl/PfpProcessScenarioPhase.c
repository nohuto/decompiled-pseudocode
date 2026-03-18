/*
 * XREFs of PfpProcessScenarioPhase @ 0x1405453E8
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1403EA8E8 (PfSetSuperfetchInformation.c)
 *     PfSnSetPrefetcherInformation @ 0x1403EAEEC (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     RtlGetActiveConsoleId @ 0x140008ADC (RtlGetActiveConsoleId.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     MmGetNextSession @ 0x140086620 (MmGetNextSession.c)
 *     PsGetCurrentProcessSessionId @ 0x1400FB920 (PsGetCurrentProcessSessionId.c)
 *     PfPowerActionNotify @ 0x1403CFF90 (PfPowerActionNotify.c)
 *     PfpScenCtxPrefetchWait @ 0x1403D02EC (PfpScenCtxPrefetchWait.c)
 *     PfpScenCtxScenarioSet @ 0x1403D2AF4 (PfpScenCtxScenarioSet.c)
 *     PfpLogScenarioEvent @ 0x14052FC18 (PfpLogScenarioEvent.c)
 */

__int64 __fastcall PfpProcessScenarioPhase(__int64 a1, char a2)
{
  unsigned int v2; // edi
  int v5; // ecx
  char v6; // dl
  int v8; // ecx
  int ActiveConsoleId; // ebx
  __int64 v10; // r9
  int v11; // r8d
  int v12; // ecx
  int v13; // edx
  int v14; // ebx
  unsigned int v15; // ebx
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
        if ( v8 == 1 )
        {
          ActiveConsoleId = RtlGetActiveConsoleId();
          if ( (unsigned int)PsGetCurrentProcessSessionId() == ActiveConsoleId )
          {
            PfpScenCtxScenarioSet((ULONG_PTR)qword_140328560, 4, 0, 0LL);
            if ( dword_140328218 < (unsigned int)dword_14032821C )
              PfpLogScenarioEvent(5, 2, 3, dword_140328594, 1);
          }
        }
        return v2;
      }
      v10 = 0LL;
      v11 = 4;
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
  v12 = *(_DWORD *)(a1 + 8);
  if ( v12 )
  {
    if ( v12 != 1 || dword_140328590 != 3 )
      return v2;
    PfpScenCtxPrefetchWait((ULONG_PTR)qword_140328560, 3, 0x1388u);
    PfpLogScenarioEvent(3, 0, 0, dword_140328594, 0);
    v10 = 0LL;
    v13 = 3;
    v11 = 0;
LABEL_33:
    PfpScenCtxScenarioSet((ULONG_PTR)qword_140328560, v13, v11, v10);
    return v2;
  }
  v14 = RtlGetActiveConsoleId();
  if ( (unsigned int)PsGetCurrentProcessSessionId() == v14 && dword_140328218 < (unsigned int)dword_14032821C )
  {
    v15 = 0;
    NextSession = (void *)MmGetNextSession(0LL);
    if ( NextSession )
    {
      while ( ++v15 < 3 )
      {
        NextSession = (void *)MmGetNextSession(NextSession);
        if ( !NextSession )
          goto LABEL_30;
      }
      ObfDereferenceObject(NextSession);
LABEL_30:
      if ( v15 >= 3 )
      {
        v10 = *(_QWORD *)(a1 + 24);
        v11 = 3;
LABEL_32:
        v13 = 0;
        goto LABEL_33;
      }
    }
  }
  return v2;
}

/*
 * XREFs of PfSnEndTrace @ 0x1404D2B18
 * Callers:
 *     PfSnEndTraceWorkerThreadRoutine @ 0x1404D2B10 (PfSnEndTraceWorkerThreadRoutine.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     PfSnDeactivateTrace @ 0x1400FA91C (PfSnDeactivateTrace.c)
 *     PfFbBufferListFlushStandby @ 0x1400FAB90 (PfFbBufferListFlushStandby.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PfSnCleanupTrace @ 0x1404D2D58 (PfSnCleanupTrace.c)
 *     PfSnBuildDumpFromTrace @ 0x1404D2E60 (PfSnBuildDumpFromTrace.c)
 */

__int64 __fastcall PfSnEndTrace(struct _EX_RUNDOWN_REF *P)
{
  char PreviousMode; // r14
  REGHANDLE v3; // rdi
  int Ptr_high; // ecx
  __int64 Count_low; // rax
  int v6; // eax
  int v7; // eax
  _QWORD *v8; // rdi
  int v9; // esi
  PVOID **v10; // rax
  unsigned int v11; // eax
  int v13; // edx
  PVOID v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int16 v17; // [rsp+38h] [rbp-29h] BYREF
  PVOID Pa; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-19h] BYREF
  struct _EX_RUNDOWN_REF *v20; // [rsp+58h] [rbp-9h]
  int v21; // [rsp+60h] [rbp-1h]
  int v22; // [rsp+64h] [rbp+3h]
  char *v23; // [rsp+68h] [rbp+7h]
  __int64 v24; // [rsp+70h] [rbp+Fh]
  struct _EX_RUNDOWN_REF *v25; // [rsp+78h] [rbp+17h]
  __int64 v26; // [rsp+80h] [rbp+1Fh]
  struct _EX_RUNDOWN_REF *v27; // [rsp+88h] [rbp+27h]
  __int64 v28; // [rsp+90h] [rbp+2Fh]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  KeGetCurrentThread()->PreviousMode = 0;
  PfSnDeactivateTrace(P);
  if ( P )
  {
    v3 = RegHandle;
    if ( RegHandle )
    {
      if ( EtwEventEnabled(RegHandle, &PfSnEvt_EndTrace_Info) )
      {
        v16 = -1LL;
        do
          ++v16;
        while ( *((_WORD *)&P[3].Count + v16) );
        v17 = v16;
        UserData.Ptr = (ULONGLONG)&v17;
        v21 = 2 * (unsigned __int16)v16;
        v20 = P + 3;
        v23 = (char *)&P[10].Ptr + 4;
        *(_QWORD *)&UserData.Size = 2LL;
        v25 = P + 11;
        v22 = 0;
        v27 = P + 50;
        v24 = 4LL;
        v26 = 4LL;
        v28 = 4LL;
        EtwWrite(v3, &PfSnEvt_EndTrace_Info, 0LL, 5u, &UserData);
      }
    }
  }
  Ptr_high = HIDWORD(P[41].Ptr);
  if ( SHIDWORD(P[40].Ptr) > Ptr_high )
    HIDWORD(P[40].Ptr) = Ptr_high;
  Count_low = SLODWORD(P[41].Count);
  if ( (int)Count_low >= dword_140305734 )
  {
    if ( (int)Count_low > 10 )
      LODWORD(P[41].Count) = 10;
    v13 = HIDWORD(P[40].Ptr);
    if ( v13 != Ptr_high )
      *((_DWORD *)&P[35].Count + SLODWORD(P[41].Count)) += Ptr_high - v13;
  }
  else
  {
    *((_DWORD *)&P[35].Ptr + Count_low + 1) = Ptr_high - HIDWORD(P[40].Ptr);
    v6 = HIDWORD(P[41].Ptr);
    ++LODWORD(P[41].Count);
    HIDWORD(P[40].Ptr) = v6;
  }
  if ( LODWORD(P[11].Count) != 1 || LODWORD(P[50].Count) == 8 )
  {
    v7 = PfSnBuildDumpFromTrace(&Pa, P);
    v8 = Pa;
    v9 = v7;
  }
  else
  {
    v8 = 0LL;
    v9 = -2147483614;
  }
  LODWORD(P[57].Count) = v9;
  P[56].Count = (unsigned __int64)v8;
  PfSnCleanupTrace(P);
  ExFreePoolWithTag(P, 0);
  if ( v9 >= 0 )
  {
    PfFbBufferListFlushStandby((_SLIST_ENTRY *)&stru_140302560);
    ExAcquireFastMutex(&FastMutex);
    if ( dword_140305924 == 1 )
    {
      KeReleaseGuardedMutex(&FastMutex);
      ExFreePoolWithTag(v8, 0);
    }
    else
    {
      v10 = (PVOID **)qword_1403058E0;
      *v8 = &qword_1403058D8;
      v8[1] = v10;
      if ( *v10 != &qword_1403058D8 )
        __fastfail(3u);
      *v10 = (PVOID *)v8;
      v11 = dword_140305920 + 1;
      qword_1403058E0 = v8;
      while ( 1 )
      {
        dword_140305920 = v11;
        if ( v11 <= dword_1403055CC )
          break;
        v14 = qword_1403058D8;
        if ( qword_1403058D8 == &qword_1403058D8 )
          break;
        v15 = *(_QWORD *)qword_1403058D8;
        if ( *((PVOID **)qword_1403058D8 + 1) != &qword_1403058D8 || *(PVOID *)(v15 + 8) != qword_1403058D8 )
          __fastfail(3u);
        qword_1403058D8 = *(PVOID *)qword_1403058D8;
        *(_QWORD *)(v15 + 8) = &qword_1403058D8;
        ExFreePoolWithTag(v14, 0);
        v11 = dword_140305920 - 1;
      }
      KeReleaseGuardedMutex(&FastMutex);
      if ( qword_140305928 )
        KeSetEvent(qword_140305928, 0, 0);
      v9 = 0;
    }
  }
  KeGetCurrentThread()->PreviousMode = PreviousMode;
  return (unsigned int)v9;
}

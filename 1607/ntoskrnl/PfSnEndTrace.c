/*
 * XREFs of PfSnEndTrace @ 0x1403EA594
 * Callers:
 *     PfSnEndTraceWorkerThreadRoutine @ 0x1403EA58C (PfSnEndTraceWorkerThreadRoutine.c)
 * Callees:
 *     PfFbBufferListFlushStandby @ 0x14000695C (PfFbBufferListFlushStandby.c)
 *     PfSnDeactivateTrace @ 0x1400069E4 (PfSnDeactivateTrace.c)
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PfSnCleanupTrace @ 0x1403EA7EC (PfSnCleanupTrace.c)
 *     PfSnBuildDumpFromTrace @ 0x1403EA8F4 (PfSnBuildDumpFromTrace.c)
 */

__int64 __fastcall PfSnEndTrace(struct _EX_RUNDOWN_REF *P)
{
  char PreviousMode; // r14
  REGHANDLE v3; // rdi
  int Ptr_high; // edx
  __int64 Count_low; // rax
  int v6; // eax
  int v7; // eax
  _QWORD *v8; // rdi
  int v9; // esi
  _QWORD *v10; // rax
  unsigned int v11; // eax
  int v13; // r8d
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
  if ( (int)Count_low >= dword_140328574 )
  {
    if ( (int)Count_low > 10 )
      LODWORD(P[41].Count) = 10;
    v13 = HIDWORD(P[40].Ptr);
    if ( v13 != Ptr_high )
      *((_DWORD *)&P[35].Count + LODWORD(P[41].Count)) += Ptr_high - v13;
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
    PfFbBufferListFlushStandby((_SLIST_ENTRY *)&stru_140328120);
    ExAcquireFastMutex(&FastMutex);
    if ( dword_140328764 == 1 )
    {
      KeReleaseGuardedMutex(&FastMutex);
      ExFreePoolWithTag(v8, 0);
    }
    else
    {
      v10 = qword_140328720;
      if ( *(PVOID **)qword_140328720 != &qword_140328718 )
        __fastfail(3u);
      v8[1] = qword_140328720;
      *v8 = &qword_140328718;
      *v10 = v8;
      v11 = dword_140328760 + 1;
      qword_140328720 = v8;
      while ( 1 )
      {
        dword_140328760 = v11;
        if ( v11 <= dword_14032840C )
          break;
        v14 = qword_140328718;
        if ( qword_140328718 == &qword_140328718 )
          break;
        v15 = *(_QWORD *)qword_140328718;
        if ( *((PVOID **)qword_140328718 + 1) != &qword_140328718 || *(PVOID *)(v15 + 8) != qword_140328718 )
          __fastfail(3u);
        qword_140328718 = *(PVOID *)qword_140328718;
        *(_QWORD *)(v15 + 8) = &qword_140328718;
        ExFreePoolWithTag(v14, 0);
        v11 = dword_140328760 - 1;
      }
      KeReleaseGuardedMutex(&FastMutex);
      if ( qword_140328768 )
        KeSetEvent(qword_140328768, 0, 0);
      v9 = 0;
    }
  }
  KeGetCurrentThread()->PreviousMode = PreviousMode;
  return (unsigned int)v9;
}

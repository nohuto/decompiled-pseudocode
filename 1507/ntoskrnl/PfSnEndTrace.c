/*
 * XREFs of PfSnEndTrace @ 0x1404F6D18
 * Callers:
 *     PfSnEndTraceWorkerThreadRoutine @ 0x1404F6D10 (PfSnEndTraceWorkerThreadRoutine.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PfSnDeactivateTrace @ 0x1400D76FC (PfSnDeactivateTrace.c)
 *     PfFbBufferListFlushStandby @ 0x1400D7AC8 (PfFbBufferListFlushStandby.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PfSnCleanupTrace @ 0x1404F6FD4 (PfSnCleanupTrace.c)
 *     PfSnBuildDumpFromTrace @ 0x1404F70F4 (PfSnBuildDumpFromTrace.c)
 */

__int64 __fastcall PfSnEndTrace(struct _EX_RUNDOWN_REF *P)
{
  char PreviousMode; // r14
  REGHANDLE v3; // rdi
  int Ptr_high; // ecx
  __int64 Count_low; // rax
  int v6; // eax
  int v7; // edi
  PVOID v8; // rax
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int8 CurrentIrql; // si
  PVOID **v14; // rcx
  PVOID *v15; // rax
  unsigned int i; // eax
  unsigned __int8 v17; // bl
  signed __int32 v18; // eax
  int v20; // eax
  PVOID v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int8 v24; // bl
  signed __int32 v25; // eax
  __int16 v26; // [rsp+38h] [rbp-39h] BYREF
  PVOID Pa; // [rsp+40h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-29h] BYREF
  struct _EX_RUNDOWN_REF *v29; // [rsp+58h] [rbp-19h]
  int v30; // [rsp+60h] [rbp-11h]
  int v31; // [rsp+64h] [rbp-Dh]
  char *v32; // [rsp+68h] [rbp-9h]
  __int64 v33; // [rsp+70h] [rbp-1h]
  struct _EX_RUNDOWN_REF *v34; // [rsp+78h] [rbp+7h]
  __int64 v35; // [rsp+80h] [rbp+Fh]
  struct _EX_RUNDOWN_REF *v36; // [rsp+88h] [rbp+17h]
  __int64 v37; // [rsp+90h] [rbp+1Fh]

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
        v23 = -1LL;
        do
          ++v23;
        while ( *((_WORD *)&P[3].Count + v23) );
        v26 = v23;
        UserData.Ptr = (ULONGLONG)&v26;
        v30 = 2 * (unsigned __int16)v23;
        v29 = P + 3;
        v32 = (char *)&P[10].Ptr + 4;
        *(_QWORD *)&UserData.Size = 2LL;
        v34 = P + 11;
        v31 = 0;
        v36 = P + 50;
        v33 = 4LL;
        v35 = 4LL;
        v37 = 4LL;
        EtwWrite(v3, &PfSnEvt_EndTrace_Info, 0LL, 5u, &UserData);
      }
    }
  }
  Ptr_high = HIDWORD(P[41].Ptr);
  if ( SHIDWORD(P[40].Ptr) > Ptr_high )
    HIDWORD(P[40].Ptr) = Ptr_high;
  Count_low = SLODWORD(P[41].Count);
  if ( (int)Count_low >= dword_1403534A4 )
  {
    if ( (int)Count_low > 10 )
      LODWORD(P[41].Count) = 10;
    v20 = HIDWORD(P[40].Ptr);
    if ( v20 != Ptr_high )
      *((_DWORD *)&P[35].Count + SLODWORD(P[41].Count)) += Ptr_high - v20;
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
  }
  else
  {
    v8 = 0LL;
    v7 = -2147483614;
    Pa = 0LL;
  }
  LODWORD(P[57].Count) = v7;
  P[56].Count = (unsigned __int64)v8;
  PfSnCleanupTrace(P);
  ExFreePoolWithTag(P, 0);
  if ( v7 >= 0 )
  {
    PfFbBufferListFlushStandby((_SLIST_ENTRY *)&stru_1403502E0);
    v10 = KeAbPreAcquire((ULONG_PTR)&dword_140353658, 0LL, 0LL, v9);
    v11 = v10;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&dword_140353658, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&dword_140353658, v10);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    qword_140353660 = (__int64)KeGetCurrentThread();
    dword_140353688 = CurrentIrql;
    if ( dword_140353694 == 1 )
    {
      v24 = dword_140353688;
      qword_140353660 = 0LL;
      v25 = _InterlockedCompareExchange((volatile signed __int32 *)&dword_140353658, 1, 0);
      if ( v25 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&dword_140353658, v25);
      __writecr8(v24);
      KeAbPostRelease((ULONG_PTR)&dword_140353658);
      ExFreePoolWithTag(Pa, 0);
    }
    else
    {
      v14 = (PVOID **)qword_140353650;
      v15 = (PVOID *)Pa;
      *(_QWORD *)Pa = &qword_140353648;
      v15[1] = v14;
      if ( *v14 != &qword_140353648 )
        __fastfail(3u);
      *v14 = v15;
      qword_140353650 = v15;
      for ( i = dword_140353690 + 1; ; i = dword_140353690 - 1 )
      {
        dword_140353690 = i;
        if ( i <= dword_14035333C )
          break;
        v21 = qword_140353648;
        if ( qword_140353648 == &qword_140353648 )
          break;
        v22 = *(_QWORD *)qword_140353648;
        if ( *((PVOID **)qword_140353648 + 1) != &qword_140353648 || *(PVOID *)(v22 + 8) != qword_140353648 )
          __fastfail(3u);
        qword_140353648 = *(PVOID *)qword_140353648;
        *(_QWORD *)(v22 + 8) = &qword_140353648;
        ExFreePoolWithTag(v21, 0);
      }
      v17 = dword_140353688;
      qword_140353660 = 0LL;
      v18 = _InterlockedCompareExchange((volatile signed __int32 *)&dword_140353658, 1, 0);
      if ( v18 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&dword_140353658, v18);
      __writecr8(v17);
      KeAbPostRelease((ULONG_PTR)&dword_140353658);
      if ( qword_140353698 )
        KeSetEvent(qword_140353698, 0, 0);
      v7 = 0;
    }
  }
  KeGetCurrentThread()->PreviousMode = PreviousMode;
  return (unsigned int)v7;
}

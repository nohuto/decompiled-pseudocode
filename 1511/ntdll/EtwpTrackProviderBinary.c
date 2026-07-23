/*
 * XREFs of EtwpTrackProviderBinary @ 0x18007EE08
 * Callers:
 *     EtwEventSetInformation @ 0x180053EA0 (EtwEventSetInformation.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     EtwpTrackRegBinaryInfo @ 0x18007EECC (EtwpTrackRegBinaryInfo.c)
 *     NtTraceControl @ 0x1800A85D0 (NtTraceControl.c)
 */

__int64 __fastcall EtwpTrackProviderBinary(__int64 a1)
{
  __int64 v1; // rdi
  NTSTATUS v2; // eax
  unsigned __int32 v3; // esi
  int UniqueThread; // r8d
  ULONG v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  if ( !HIWORD(a1)
    || (v1 = a1 & 0xFFFFFFFFFFFFLL, (a1 & 1) != 0)
    || HIWORD(a1) != *(_WORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x60) )
  {
    v3 = 6;
    goto LABEL_11;
  }
  v7 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x58);
  v2 = NtTraceControl(EtwTrackBinaryCode, &v7, 8u, 0LL, 0, &v6);
  if ( v2 )
  {
    v3 = RtlNtStatusToDosError(v2);
    if ( !v3 )
      goto LABEL_6;
LABEL_11:
    RtlSetLastWin32Error(v3);
    return v3;
  }
  v3 = 0;
LABEL_6:
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v1 + 64));
  UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
  *(_WORD *)(v1 + 98) |= 0x8000u;
  *(_DWORD *)(v1 + 80) = UniqueThread;
  EtwpTrackRegBinaryInfo(v1);
  *(_DWORD *)(v1 + 80) = 0;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v1 + 64));
  return v3;
}

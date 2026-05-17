/*
 * XREFs of EtwReplyNotification @ 0x180003030
 * Callers:
 *     EtwDeliverDataBlock @ 0x180054010 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x1800A99F0 (NtTraceControl.c)
 */

__int64 __fastcall EtwReplyNotification(__int64 a1)
{
  ULONG v1; // ebx
  NTSTATUS v2; // eax
  char v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = NtTraceControl(18LL, a1, *(unsigned int *)(a1 + 4), 0LL, 0, &v4);
  if ( v2 )
    v1 = RtlNtStatusToDosError(v2);
  EtwpReplySend = 1;
  return v1;
}

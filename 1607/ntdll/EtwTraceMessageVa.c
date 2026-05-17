/*
 * XREFs of EtwTraceMessageVa @ 0x18005A380
 * Callers:
 *     EtwTraceMessage @ 0x18005A350 (EtwTraceMessage.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     EtwpTraceUmMessage @ 0x18005ABB4 (EtwpTraceUmMessage.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 */

__int64 __fastcall EtwTraceMessageVa(__int64 a1, int a2, _DWORD *a3, __int16 a4, _QWORD *a5)
{
  unsigned int v6; // ebx
  _QWORD *v7; // rax
  int i; // ecx
  NTSTATUS v9; // eax
  _BYTE v11[4]; // [rsp+30h] [rbp-38h] BYREF
  __int16 v12; // [rsp+34h] [rbp-34h]
  __int128 v13; // [rsp+38h] [rbp-30h]
  int v14; // [rsp+48h] [rbp-20h]
  int v15; // [rsp+4Ch] [rbp-1Ch]
  __int64 v16; // [rsp+50h] [rbp-18h]

  if ( (a1 & 0x1000000) != 0 )
    return EtwpTraceUmMessage(a1, a2, (_DWORD)a3, a4, (__int64)a5);
  v6 = 0;
  v7 = a5;
  for ( i = 0; *v7; v7 += 2 )
    ++i;
  v12 = a4;
  v14 = a2;
  if ( (a2 & 4) != 0 )
  {
    LODWORD(v13) = *a3;
  }
  else if ( (a2 & 2) != 0 )
  {
    v13 = *(_OWORD *)a3;
  }
  v16 = (__int64)a5;
  v15 = 16 * i + 8;
  v9 = NtTraceEvent(a1, 512LL, 40LL, v11);
  if ( v9 )
    return RtlNtStatusToDosError(v9);
  return v6;
}

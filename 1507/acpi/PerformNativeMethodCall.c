/*
 * XREFs of PerformNativeMethodCall @ 0x1C0043760
 * Callers:
 *     ParseCall @ 0x1C0010E80 (ParseCall.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

__int64 __fastcall PerformNativeMethodCall(int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v7; // r14
  unsigned int v9; // eax
  _QWORD v10[8]; // [rsp+20h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a3 + 48);
  if ( v3 )
    v7 = *(_QWORD *)(v3 + 88);
  else
    v7 = 0LL;
  if ( !ghNativeMethodEvalObject )
    return ConvertNtStatusToAMLIStatus(0xC0000001);
  memset(v10, 0, 0x38uLL);
  LODWORD(v10[0]) = a1;
  v10[1] = a3 + 72;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v10[2] = *(_QWORD *)(a3 + 392);
    }
    else if ( a1 == 2 )
    {
      v10[2] = *(_QWORD *)(a3 + 392);
    }
  }
  else
  {
    v10[4] = a2;
    v10[2] = v3 + 112;
    v10[3] = *(_QWORD *)(a2 + 72) + 112LL;
    HIDWORD(v10[5]) = *(_DWORD *)(a3 + 60);
    v10[6] = *(_QWORD *)(a3 + 64);
    if ( *(_BYTE *)(v7 + 184) )
      LODWORD(v10[5]) = 1;
  }
  v9 = ((__int64 (__fastcall *)(_QWORD *))ghNativeMethodEvalObject)(v10);
  return ConvertNtStatusToAMLIStatus(v9);
}

/*
 * XREFs of EtwpStopUmLogger @ 0x1800533F0
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180053810 (EtwProcessPrivateLoggerRequest.c)
 *     EtwpShutdownPrivateLoggers @ 0x180086034 (EtwpShutdownPrivateLoggers.c)
 * Callees:
 *     EtwpStopLoggerInstance @ 0x180051D90 (EtwpStopLoggerInstance.c)
 *     EtwpSynchronizeWithLogger @ 0x180051DF8 (EtwpSynchronizeWithLogger.c)
 *     EtwpFreeLoggerContext @ 0x180051E4C (EtwpFreeLoggerContext.c)
 *     EtwpGetPrivateLoggerContext @ 0x180053368 (EtwpGetPrivateLoggerContext.c)
 *     EtwpGetUmLoggerInfoFromContext @ 0x180054328 (EtwpGetUmLoggerInfoFromContext.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     NtWaitForSingleObject @ 0x1800A64A0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 */

__int64 __fastcall EtwpStopUmLogger(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r12
  unsigned int PrivateLoggerContext; // edi
  _DWORD *v7; // rbx
  char v8; // r14
  __int64 v9; // r13
  void *v10; // r15
  bool v11; // bp
  NTSTATUS v12; // eax
  int v14; // [rsp+60h] [rbp+8h]
  PVOID BaseAddress; // [rsp+68h] [rbp+10h] BYREF
  int v16; // [rsp+70h] [rbp+18h]
  int v17; // [rsp+74h] [rbp+1Ch]

  v17 = HIDWORD(a3);
  BaseAddress = 0LL;
  v4 = 0;
  v14 = 0;
  v16 = 0;
  PrivateLoggerContext = EtwpGetPrivateLoggerContext(a4, &BaseAddress);
  if ( !PrivateLoggerContext )
  {
    v7 = BaseAddress;
    v8 = 1;
    v9 = *((unsigned int *)BaseAddress + 5);
    v10 = (void *)*((_QWORD *)BaseAddress + 4);
    v11 = (*((_DWORD *)BaseAddress + 81) & 0x400) != 0;
    if ( (*(_DWORD *)(a4 + 64) & 0x10000) != 0 )
    {
      v4 = 1;
      v14 = *((_DWORD *)BaseAddress + 96);
      v16 = *((_DWORD *)BaseAddress + 97);
      *((_DWORD *)BaseAddress + 96) = *(_DWORD *)(a4 + 104);
      v7[97] = *(_DWORD *)(a4 + 112);
      if ( (*(_DWORD *)(a4 + 64) & 0x1000) != 0 )
        *((_QWORD *)v7 + 47) = *(_QWORD *)(a4 + 16);
    }
    PrivateLoggerContext = EtwpStopLoggerInstance((__int64)v7);
    if ( !PrivateLoggerContext )
    {
      if ( v11 || (v12 = EtwpSynchronizeWithLogger((__int64)v7, 8), v12 >= 0) )
      {
        EtwpGetUmLoggerInfoFromContext(a4, v7);
        v8 = 0;
        _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16 * v9 + 8));
        if ( v11 )
          EtwpFreeLoggerContext((unsigned int *)BaseAddress);
        v7 = 0LL;
        BaseAddress = 0LL;
        if ( v10 )
        {
          NtWaitForSingleObject(v10, 0, 0LL);
          NtClose(v10);
        }
      }
      else
      {
        PrivateLoggerContext = RtlNtStatusToDosError(v12);
      }
    }
    if ( v4 && v7 )
    {
      v7[96] = v14;
      v7[97] = v16;
    }
    if ( v8 )
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16 * v9 + 8));
  }
  return PrivateLoggerContext;
}

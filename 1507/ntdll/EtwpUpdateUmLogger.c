/*
 * XREFs of EtwpUpdateUmLogger @ 0x1800F4918
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x18000A160 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     EtwpQueryUmLogger @ 0x18000A2D0 (EtwpQueryUmLogger.c)
 *     EtwpGetPrivateLoggerContext @ 0x18000A408 (EtwpGetPrivateLoggerContext.c)
 *     EtwpSynchronizeWithLogger @ 0x18000A6EC (EtwpSynchronizeWithLogger.c)
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     RtlFreeAnsiString @ 0x180027410 (RtlFreeAnsiString.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x180076CEC (EtwpAddInstanceIdToLogFileName.c)
 */

__int64 __fastcall EtwpUpdateUmLogger(unsigned int a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v9; // ebx
  __int64 v10; // rsi
  int v11; // eax
  int v12; // eax
  int v13; // edx
  _UNICODE_STRING v14; // xmm6
  NTSTATUS v15; // eax
  _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+78h] [rbp+10h] BYREF

  v17 = 0LL;
  *a2 = 0;
  *a3 = 176;
  if ( a1 < 0xB0 )
    return 234LL;
  result = EtwpGetPrivateLoggerContext(a4, &v17);
  v9 = result;
  if ( !(_DWORD)result )
  {
    v10 = v17;
    if ( (*(_BYTE *)(a4 + 64) & 2) != 0 && (*(_BYTE *)(v17 + 332) & 1) != 0
      || (*(_BYTE *)(a4 + 64) & 1) != 0 && (*(_BYTE *)(v17 + 332) & 2) != 0
      || (*(_DWORD *)(a4 + 64) & 0x100) != 0
      || (v11 = *(_DWORD *)(v17 + 332), (v11 & 0x400) != 0)
      || (v11 & 0x10000) != 0
      || *(_DWORD *)(a4 + 76) && *(_DWORD *)(a4 + 68) )
    {
      v9 = 87;
      goto LABEL_29;
    }
    *(_QWORD *)(a4 + 152) = a4 + 176;
    *(_QWORD *)(a4 + 136) = *(unsigned __int16 *)(a4 + 146) + a4 + 176;
    if ( *(_DWORD *)(a4 + 68) )
      *(_QWORD *)(v10 + 352) = EtwpOneSecond * *(unsigned int *)(a4 + 68);
    if ( *(_DWORD *)(a4 + 76) )
    {
      v12 = *(_DWORD *)(v10 + 220) - *(_DWORD *)(v10 + 204) - 1;
      if ( *(_DWORD *)(a4 + 76) > v12 )
        *(_DWORD *)(a4 + 76) = v12;
      if ( *(int *)(a4 + 76) < 0 )
        *(_DWORD *)(a4 + 76) = 0;
    }
    *(_DWORD *)(v10 + 376) = *(_DWORD *)(a4 + 76);
    if ( !*(_WORD *)(a4 + 128) )
      goto LABEL_28;
    v13 = *(_DWORD *)(v10 + 72);
    v14 = *(_UNICODE_STRING *)(v10 + 168);
    UnicodeString = v14;
    v9 = EtwpAddInstanceIdToLogFileName(a4, v13, (_UNICODE_STRING *)(v10 + 168));
    if ( v9 )
      goto LABEL_23;
    EtwpSynchronizeWithLogger(v10, 2);
    v15 = EtwpSynchronizeWithLogger(v10, 4);
    if ( v15 )
    {
      v9 = RtlNtStatusToDosError(v15);
      if ( v9 )
      {
        RtlFreeAnsiString((PUNICODE_STRING)(v10 + 168));
LABEL_23:
        *(_UNICODE_STRING *)(v10 + 168) = v14;
        goto LABEL_27;
      }
    }
    else
    {
      v9 = 0;
    }
    RtlFreeAnsiString(&UnicodeString);
LABEL_27:
    if ( !v9 )
LABEL_28:
      EtwpQueryUmLogger(a1, a2, a3, a4);
LABEL_29:
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v10 + 20) + 8));
    return v9;
  }
  return result;
}

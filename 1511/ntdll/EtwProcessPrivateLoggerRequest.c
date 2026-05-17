/*
 * XREFs of EtwProcessPrivateLoggerRequest @ 0x180044A70
 * Callers:
 *     EtwpProcessNotification @ 0x18005274C (EtwpProcessNotification.c)
 * Callees:
 *     EtwpFlushUmLogger @ 0x180003A90 (EtwpFlushUmLogger.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     EtwpQueryUmLogger @ 0x1800448A8 (EtwpQueryUmLogger.c)
 *     EtwpValidateLoggerInfo @ 0x180044B9C (EtwpValidateLoggerInfo.c)
 *     EtwpStartUmLogger @ 0x180044BE8 (EtwpStartUmLogger.c)
 *     EtwpStopUmLogger @ 0x18005C7A8 (EtwpStopUmLogger.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     EtwpUpdateUmLogger @ 0x1800F431C (EtwpUpdateUmLogger.c)
 */

__int64 __fastcall EtwProcessPrivateLoggerRequest(char *a1)
{
  __int128 v2; // xmm6
  unsigned int *v3; // rdi
  char *v4; // rdx
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  unsigned int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  int started; // eax
  int v17; // ebp
  unsigned int v19; // ebx
  int v20; // [rsp+50h] [rbp+8h] BYREF
  int v21; // [rsp+58h] [rbp+10h] BYREF

  if ( *((_DWORD *)a1 + 1) < 0xF8u )
    return 4209LL;
  v2 = *(_OWORD *)(a1 + 56);
  v3 = (unsigned int *)(a1 + 72);
  *((_DWORD *)a1 + 42) = *((_DWORD *)a1 + 5);
  v5 = EtwpValidateLoggerInfo(a1 + 72);
  if ( v5 )
    goto LABEL_14;
  v8 = v3[1];
  v9 = *v3;
  v20 = 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)&EtwpPrivSessionLock, v4, v6, v7);
  v13 = v8 - 1;
  if ( !v13 )
  {
    started = EtwpStartUmLogger(v11, &v21, &v20, v3);
    goto LABEL_8;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    started = EtwpStopUmLogger(v11, v10, v12, v3);
    goto LABEL_8;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    started = EtwpQueryUmLogger(v9, &v21, &v20, (__int64)v3);
LABEL_8:
    v5 = started;
    goto LABEL_9;
  }
  v19 = v15 - 1;
  if ( !v19 )
  {
    started = EtwpUpdateUmLogger(v9, &v21, &v20, v3);
    goto LABEL_8;
  }
  if ( v19 == 1 )
  {
    started = EtwpFlushUmLogger(v9, &v21, &v20, (__int64)v3);
    goto LABEL_8;
  }
  v5 = 87;
LABEL_9:
  RtlReleaseSRWLockExclusive(&EtwpPrivSessionLock);
  if ( v5 )
  {
LABEL_14:
    v17 = 76;
    goto LABEL_11;
  }
  v17 = *v3 + 72;
LABEL_11:
  memset(a1, 0, 0x48uLL);
  *((_DWORD *)a1 + 1) = v17;
  *(_DWORD *)a1 = 4;
  *(_OWORD *)(a1 + 40) = v2;
  if ( v5 )
    *v3 = v5;
  return 0LL;
}

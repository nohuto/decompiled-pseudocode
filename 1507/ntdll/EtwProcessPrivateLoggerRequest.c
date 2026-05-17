/*
 * XREFs of EtwProcessPrivateLoggerRequest @ 0x18000A160
 * Callers:
 *     EtwpProcessNotification @ 0x18000C48C (EtwpProcessNotification.c)
 * Callees:
 *     EtwpFlushUmLogger @ 0x180002EE4 (EtwpFlushUmLogger.c)
 *     EtwpValidateLoggerInfo @ 0x18000A284 (EtwpValidateLoggerInfo.c)
 *     EtwpQueryUmLogger @ 0x18000A2D0 (EtwpQueryUmLogger.c)
 *     EtwpStopUmLogger @ 0x18000A520 (EtwpStopUmLogger.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     EtwpStartUmLogger @ 0x1800761E0 (EtwpStartUmLogger.c)
 *     memset @ 0x180098540 (memset.c)
 *     EtwpUpdateUmLogger @ 0x1800F4918 (EtwpUpdateUmLogger.c)
 */

__int64 __fastcall EtwProcessPrivateLoggerRequest(char *a1)
{
  __int128 v2; // xmm6
  unsigned int *v3; // rdi
  int v4; // ebx
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  int started; // eax
  int v14; // ebp
  unsigned int v16; // ebx
  int v17; // [rsp+50h] [rbp+8h] BYREF
  int v18; // [rsp+58h] [rbp+10h] BYREF

  if ( *((_DWORD *)a1 + 1) < 0xF8u )
    return 4209LL;
  v2 = *(_OWORD *)(a1 + 56);
  v3 = (unsigned int *)(a1 + 72);
  *((_DWORD *)a1 + 42) = *((_DWORD *)a1 + 5);
  v4 = EtwpValidateLoggerInfo(a1 + 72);
  if ( v4 )
    goto LABEL_9;
  v5 = v3[1];
  v6 = *v3;
  v17 = 0;
  RtlAcquireSRWLockExclusive(&EtwpPrivSessionLock);
  v10 = v5 - 1;
  if ( !v10 )
  {
    started = EtwpStartUmLogger(v8, &v18, &v17, v3);
    goto LABEL_7;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    started = EtwpStopUmLogger(v8, v7, v9, v3);
    goto LABEL_7;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    started = EtwpQueryUmLogger(v6, &v18, &v17, v3);
LABEL_7:
    v4 = started;
    goto LABEL_8;
  }
  v16 = v12 - 1;
  if ( !v16 )
  {
    started = EtwpUpdateUmLogger(v6, &v18, &v17, v3);
    goto LABEL_7;
  }
  if ( v16 == 1 )
  {
    started = EtwpFlushUmLogger(v6, &v18, &v17, (__int64)v3);
    goto LABEL_7;
  }
  v4 = 87;
LABEL_8:
  RtlReleaseSRWLockExclusive(&EtwpPrivSessionLock);
  if ( !v4 )
  {
    v14 = *v3 + 72;
    goto LABEL_10;
  }
LABEL_9:
  v14 = 76;
LABEL_10:
  memset(a1, 0, 0x48uLL);
  *((_DWORD *)a1 + 1) = v14;
  *(_DWORD *)a1 = 4;
  *(_OWORD *)(a1 + 40) = v2;
  if ( v4 )
    *v3 = v4;
  return 0LL;
}

/*
 * XREFs of EtwProcessPrivateLoggerRequest @ 0x180053810
 * Callers:
 *     EtwpProcessNotification @ 0x180054288 (EtwpProcessNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     EtwpQueryUmLogger @ 0x180051CDC (EtwpQueryUmLogger.c)
 *     EtwpStopUmLogger @ 0x1800533F0 (EtwpStopUmLogger.c)
 *     EtwpValidateLoggerInfo @ 0x180053910 (EtwpValidateLoggerInfo.c)
 *     EtwpStartUmLogger @ 0x18005395C (EtwpStartUmLogger.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     EtwpFlushUmLogger @ 0x1800FD8D4 (EtwpFlushUmLogger.c)
 *     EtwpUpdateUmLogger @ 0x1800FDAC8 (EtwpUpdateUmLogger.c)
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
  int started; // eax
  int v12; // ebp
  unsigned int v14; // ebx
  unsigned int v15; // ebx
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
    goto LABEL_13;
  v5 = v3[1];
  v6 = *v3;
  v17 = 0;
  RtlAcquireSRWLockExclusive(&EtwpPrivSessionLock);
  v10 = v5 - 1;
  if ( !v10 )
  {
    started = EtwpStartUmLogger(v8, &v18, &v17, v3);
LABEL_5:
    v4 = started;
    goto LABEL_6;
  }
  v14 = v10 - 1;
  if ( !v14 )
  {
    started = EtwpStopUmLogger(v8, v7, v9, (__int64)v3);
    goto LABEL_5;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    started = EtwpQueryUmLogger(v6, &v18, &v17, (__int64)v3);
    goto LABEL_5;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    started = EtwpUpdateUmLogger(v6, &v18, &v17, v3);
    goto LABEL_5;
  }
  if ( v16 == 1 )
  {
    started = EtwpFlushUmLogger(v6, &v18, &v17, v3);
    goto LABEL_5;
  }
  v4 = 87;
LABEL_6:
  RtlReleaseSRWLockExclusive(&EtwpPrivSessionLock);
  if ( v4 )
  {
LABEL_13:
    v12 = 76;
    goto LABEL_8;
  }
  v12 = *v3 + 72;
LABEL_8:
  memset(a1, 0, 0x48uLL);
  *((_DWORD *)a1 + 1) = v12;
  *(_DWORD *)a1 = 4;
  *(_OWORD *)(a1 + 40) = v2;
  if ( v4 )
    *v3 = v4;
  return 0LL;
}

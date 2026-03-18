/*
 * XREFs of PsSetProcessTelemetryAppState @ 0x14044B0E4
 * Callers:
 *     PspExitProcess @ 0x1403E6F28 (PspExitProcess.c)
 *     PsThawProcess @ 0x1404529E8 (PsThawProcess.c)
 *     PsFreezeProcess @ 0x140452D70 (PsFreezeProcess.c)
 *     PsSetProcessFaultInformation @ 0x1404C5CE0 (PsSetProcessFaultInformation.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140666328 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     PspUnlockProcessExclusive @ 0x14002BB54 (PspUnlockProcessExclusive.c)
 *     PspLockProcessExclusive @ 0x14002DCFC (PspLockProcessExclusive.c)
 *     EtwTraceAppStateChange @ 0x14044A950 (EtwTraceAppStateChange.c)
 *     PsGetProcessDeepFreezeStats @ 0x14044B91C (PsGetProcessDeepFreezeStats.c)
 */

__int64 __fastcall PsSetProcessTelemetryAppState(_QWORD *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v5; // r13
  unsigned int v6; // esi
  __int64 v7; // r14
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v12; // [rsp+20h] [rbp-60h] BYREF
  __int64 v13; // [rsp+28h] [rbp-58h]
  __int64 v14; // [rsp+30h] [rbp-50h]
  unsigned __int64 v15; // [rsp+40h] [rbp-40h] BYREF
  __int64 v16; // [rsp+48h] [rbp-38h]
  __int64 v17; // [rsp+50h] [rbp-30h]
  __int64 v18; // [rsp+58h] [rbp-28h]
  __int64 v19; // [rsp+60h] [rbp-20h]
  __int64 v20; // [rsp+68h] [rbp-18h]
  __int64 v21; // [rsp+70h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  do
  {
    PsGetProcessDeepFreezeStats(a1, &v12);
    v5 = v13;
    v6 = 0;
    v7 = v13 - v14 - a1[232];
    PspLockProcessExclusive((__int64)a1, (__int64)CurrentThread);
    v8 = a1[235];
    v9 = v12;
    v10 = v8 >> 61;
    if ( v8 >> 61 != 3 && a1[234] <= v12 )
    {
      v17 = a1[234];
      LODWORD(v21) = v10 & 7;
      v18 = v8 & 0x1FFFFFFFFFFFFFFFLL;
      if ( a2 == 5 && v10 == 1 )
        a2 = 6;
      a1[234] = v12;
      a1[235] = v7 & 0x1FFFFFFFFFFFFFFFLL ^ ((__int64)a2 << 61);
      v6 = 1;
    }
    PspUnlockProcessExclusive((__int64)a1, (__int64)CurrentThread);
  }
  while ( a1[235] >> 61 != 3 && !v6 );
  if ( v6 )
  {
    v20 = v14;
    v15 = v9;
    v16 = v5;
    v19 = v7;
    HIDWORD(v21) = a2;
    EtwTraceAppStateChange((__int64)a1, (__int64)&v15);
  }
  return v6;
}

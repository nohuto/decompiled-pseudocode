/*
 * XREFs of ?RmpQoSWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180001050
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpQoSGetEarliestHostInfo@@YAPEAU_RM_ACTIVITY_ENFORCEMENT_INFO@@PEAU_RM_QOS_CONTEXT@@@Z @ 0x18000153C (-RmpQoSGetEarliestHostInfo@@YAPEAU_RM_ACTIVITY_ENFORCEMENT_INFO@@PEAU_RM_QOS_CONTEXT@@@Z.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     ?RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180035118 (-RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmpQoSWatchdogCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _RM_QOS_CONTEXT *a2,
        struct _TP_TIMER *a3)
{
  const struct _TlgProvider_t *v4; // rcx
  unsigned __int64 v5; // rdi
  struct _RM_ACTIVITY_ENFORCEMENT_INFO *v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // r9
  char *v9; // rsi
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  unsigned __int64 v13; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+38h] [rbp-50h] BYREF
  __int64 v15; // [rsp+40h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-40h] BYREF
  __int64 *v17; // [rsp+68h] [rbp-20h]
  __int64 v18; // [rsp+70h] [rbp-18h]

  RtlEnterCriticalSection(&RmpGlobalLock);
  RtlQueryUnbiasedInterruptTime(&v13);
  v5 = v13;
  if ( *(struct _RM_QOS_CONTEXT **)a2 == a2 )
    goto LABEL_8;
  v6 = (struct _RM_ACTIVITY_ENFORCEMENT_INFO *)(*(_QWORD *)a2 - 168LL);
  if ( *(_QWORD *)a2 != 168LL )
  {
    do
    {
      if ( *((_QWORD *)v6 + 25) > v5 )
        break;
      v9 = (char *)v6 - 672;
      if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v4, 0x400000000011uLL) )
      {
        v14 = *((_QWORD *)v9 + 3);
        v17 = &v14;
        v18 = 8LL;
        TlgWrite(v10, &unk_180042497, v11, v12, 3u, &pData);
      }
      RmpQoSDisableForHostOnTimerExpiry(a2, (struct _RM_ACTIVITY_HOST *)v9);
      v6 = RmpQoSGetEarliestHostInfo(a2);
    }
    while ( v6 );
  }
  if ( *(struct _RM_QOS_CONTEXT **)a2 == a2 || *(_QWORD *)a2 == 168LL )
  {
LABEL_8:
    v8 = 0LL;
    v7 = 0LL;
  }
  else
  {
    v7 = &v15;
    v8 = *((unsigned int *)a2 + 7);
    v15 = *(_QWORD *)(*(_QWORD *)a2 - 168LL + 200);
  }
  TpSetTimer(*((_QWORD *)a2 + 2), v7, 0LL, v8);
  RtlLeaveCriticalSection(&RmpGlobalLock);
}

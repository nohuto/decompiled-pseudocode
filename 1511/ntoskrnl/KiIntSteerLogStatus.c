/*
 * XREFs of KiIntSteerLogStatus @ 0x1401CAAB4
 * Callers:
 *     KiIntSteerEventTraceControlCallback @ 0x14054B8DC (KiIntSteerEventTraceControlCallback.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x140076480 (EtwpLevelKeywordEnabled.c)
 *     KeEnumerateNextProcessor @ 0x14009C650 (KeEnumerateNextProcessor.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     KiIntSteerLogState @ 0x140122EC4 (KiIntSteerLogState.c)
 *     KiIntSteerEtwEventEnabled @ 0x140122F24 (KiIntSteerEtwEventEnabled.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

char __fastcall KiIntSteerLogStatus(char a1)
{
  REGHANDLE v1; // r10
  const EVENT_DESCRIPTOR *v2; // r11
  unsigned __int8 v4; // dl
  __int64 v5; // r8
  const EVENT_DESCRIPTOR *v6; // r11
  const EVENT_DESCRIPTOR *v7; // rbx
  unsigned __int8 v8; // dl
  __int64 v9; // r8
  __int64 v10; // r10
  const EVENT_DESCRIPTOR *v11; // rsi
  ULONG_PTR v12; // rax
  ULONG_PTR *i; // rbx
  ULONG_PTR *j; // rdi
  int v16; // [rsp+38h] [rbp-69h] BYREF
  unsigned __int16 *v17[2]; // [rsp+40h] [rbp-61h] BYREF
  __int16 v18; // [rsp+50h] [rbp-51h]
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+58h] [rbp-49h] BYREF
  __int64 v20; // [rsp+68h] [rbp-39h]
  __int64 v21; // [rsp+70h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-29h] BYREF
  int *v23; // [rsp+88h] [rbp-19h]
  __int64 v24; // [rsp+90h] [rbp-11h]
  int *v25; // [rsp+98h] [rbp-9h]
  __int64 v26; // [rsp+A0h] [rbp-1h]
  int *v27; // [rsp+A8h] [rbp+7h]
  __int64 v28; // [rsp+B0h] [rbp+Fh]
  __int64 *v29; // [rsp+B8h] [rbp+17h]
  int v30; // [rsp+C0h] [rbp+1Fh]
  int v31; // [rsp+C4h] [rbp+23h]

  v1 = KiIntSteerEtwHandle;
  v2 = &PPM_ETW_INTERRUPT_STEERING_MASK_CHANGE;
  if ( a1 )
    v2 = &KMPnPRundownEvt_SleepStudy_ConnectionResource;
  if ( KiIntSteerEtwHandle
    && (EtwpLevelKeywordEnabled(*(_QWORD *)(KiIntSteerEtwHandle + 32) + 80LL, v2->Level, v2->Keyword)
     || *(_BYTE *)(v1 + 100) && EtwpLevelKeywordEnabled(*(_QWORD *)(v1 + 40) + 80LL, v4, v5)) )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&KiIntSteerLoadPercent;
    v24 = 4LL;
    v23 = &KiIntTrackRootCount;
    v26 = 4LL;
    v25 = &KiIntSteerMaskCount;
    v28 = 2LL;
    v27 = &KiIntSteerMask;
    v31 = 0;
    v29 = qword_1402E2468;
    v30 = 160 * (unsigned __int16)KiIntSteerMask;
    EtwWrite(v1, v6, 0LL, 5u, &UserData);
    v1 = KiIntSteerEtwHandle;
  }
  v7 = &PPM_ETW_INTERRUPT_STEERING_PROC_CHANGE;
  if ( a1 )
    v7 = &PPM_ETW_INTERRUPT_STEERING_PROC_RUNDOWN;
  if ( v1
    && (EtwpLevelKeywordEnabled(*(_QWORD *)(v1 + 32) + 80LL, v7->Level, v7->Keyword)
     || *(_BYTE *)(v10 + 100) && EtwpLevelKeywordEnabled(*(_QWORD *)(v10 + 40) + 80LL, v8, v9)) )
  {
    v17[1] = (unsigned __int16 *)qword_1403825B8[0];
    v17[0] = (unsigned __int16 *)KeActiveProcessors;
    v18 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v16, v17) )
    {
      *(_QWORD *)&v19.Size = 4LL;
      v19.Ptr = (ULONGLONG)&v16;
      v21 = 4LL;
      v20 = KiProcessorBlock[v16] + 11544;
      EtwWrite(KiIntSteerEtwHandle, v7, 0LL, 2u, &v19);
    }
  }
  v11 = (const EVENT_DESCRIPTOR *)&PPM_ETW_INTERRUPT_STEERING_STATE_RETARGET;
  if ( a1 )
    v11 = (const EVENT_DESCRIPTOR *)&PPM_ETW_INTERRUPT_STEERING_STATE_RUNDOWN;
  LOBYTE(v12) = KiIntSteerEtwEventEnabled(v11);
  if ( (_BYTE)v12 )
  {
    for ( i = (ULONG_PTR *)KiIntTrackRootList; i != &KiIntTrackRootList; i = (ULONG_PTR *)*i )
    {
      if ( !a1 )
      {
        v12 = i[20];
        if ( i[22] == v12 )
          continue;
      }
      for ( j = (ULONG_PTR *)i[2]; j != i + 2; j = (ULONG_PTR *)*j )
        LOBYTE(v12) = KiIntSteerLogState((__int64)j, v11);
    }
  }
  return v12;
}

/*
 * XREFs of ?RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18001BC40
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x18000DE40 (-RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEA.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

void __fastcall RmpTelemetryTimerCallback(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_TIMER *a3)
{
  __int64 v4; // rdx
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  int v9; // [rsp+30h] [rbp-59h] BYREF
  int v10; // [rsp+34h] [rbp-55h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  char *v12; // [rsp+60h] [rbp-29h]
  int v13; // [rsp+68h] [rbp-21h]
  int v14; // [rsp+6Ch] [rbp-1Dh]
  char *v15; // [rsp+70h] [rbp-19h]
  int v16; // [rsp+78h] [rbp-11h]
  int v17; // [rsp+7Ch] [rbp-Dh]
  char *v18; // [rsp+80h] [rbp-9h]
  int v19; // [rsp+88h] [rbp-1h]
  int v20; // [rsp+8Ch] [rbp+3h]
  char *v21; // [rsp+90h] [rbp+7h]
  int v22; // [rsp+98h] [rbp+Fh]
  int v23; // [rsp+9Ch] [rbp+13h]
  int *v24; // [rsp+A0h] [rbp+17h]
  int v25; // [rsp+A8h] [rbp+1Fh]
  int v26; // [rsp+ACh] [rbp+23h]
  int *v27; // [rsp+B0h] [rbp+27h]
  int v28; // [rsp+B8h] [rbp+2Fh]
  int v29; // [rsp+BCh] [rbp+33h]

  RtlEnterCriticalSection(&RmpGlobalLock);
  RmpPartitionTableActOnActivePartitions(
    (struct _RM_PARTITION_TABLE *)(a2 + 312),
    v4,
    RmpTelemetryLogPartitionState,
    0LL);
  v5 = (const struct _TlgProvider_t *)*((unsigned int *)a2 + 77);
  if ( (_DWORD)v5 )
  {
    if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v5, 0x400000000001uLL) )
    {
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v12 = a2 + 272;
      v15 = a2 + 280;
      v18 = a2 + 288;
      v21 = a2 + 296;
      v9 = *((_DWORD *)a2 + 76);
      v24 = &v9;
      v27 = &v10;
      v13 = (_DWORD)v7 + 4;
      v16 = (_DWORD)v7 + 4;
      v19 = (_DWORD)v7 + 4;
      v22 = (_DWORD)v7 + 4;
      v25 = (int)v7;
      v10 = (int)v6;
      v28 = (int)v7;
      TlgWrite(v6, &unk_18003FB6F, v7, v8, (_DWORD)v7 + 4, &pData);
    }
    *((_QWORD *)a2 + 34) = 0LL;
    *((_QWORD *)a2 + 35) = -1LL;
    *((_QWORD *)a2 + 36) = 0LL;
    *((_QWORD *)a2 + 37) = 0LL;
    *((_DWORD *)a2 + 76) = 0;
    *((_DWORD *)a2 + 77) = 0;
  }
  *((_DWORD *)a2 + 142) = GetTickCount();
  RtlLeaveCriticalSection(&RmpGlobalLock);
}

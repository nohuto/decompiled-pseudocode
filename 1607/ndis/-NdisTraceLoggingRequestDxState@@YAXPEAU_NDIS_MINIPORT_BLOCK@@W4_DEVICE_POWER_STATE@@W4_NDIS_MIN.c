/*
 * XREFs of ?NdisTraceLoggingRequestDxState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@W4_NDIS_MINIPORT_EVENT@@J@Z @ 0x1C0011450
 * Callers:
 *     ndisRequestDeviceLowPower @ 0x1C009C64C (ndisRequestDeviceLowPower.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00184AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0023144 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingRequestDxState(
        const struct _TlgProvider_t *a1,
        enum _DEVICE_POWER_STATE a2,
        enum _NDIS_MINIPORT_EVENT a3)
{
  __int64 v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  unsigned __int16 v6; // r10
  int v7; // r11d
  int v8; // r11d
  const void *v9; // rdx
  int *v10; // rax
  int v11; // [rsp+30h] [rbp-49h] BYREF
  int v12; // [rsp+34h] [rbp-45h] BYREF
  int v13; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  __int64 v16; // [rsp+70h] [rbp-9h]
  __int64 v17; // [rsp+78h] [rbp-1h]
  _QWORD *v18; // [rsp+80h] [rbp+7h]
  __int64 v19; // [rsp+88h] [rbp+Fh]
  int *v20; // [rsp+90h] [rbp+17h]
  __int64 v21; // [rsp+98h] [rbp+1Fh]
  int *v22; // [rsp+A0h] [rbp+27h]
  __int64 v23; // [rsp+A8h] [rbp+2Fh]
  int *v24; // [rsp+B0h] [rbp+37h]
  __int64 v25; // [rsp+B8h] [rbp+3Fh]

  if ( a3 != NdisMEventDx_SSIdle )
  {
    if ( (unsigned int)dword_1C0088010 <= 5 || !TlgKeywordOn(a1, 0x400000000000uLL) )
      return;
    v13 = v7;
    v16 = v3 + 4064;
    v9 = &unk_1C0079B10;
    v14[0] = *(unsigned __int16 *)(v3 + 4086);
    v18 = v14;
    v20 = &v13;
    v12 = v6;
    v22 = &v12;
    v10 = &v11;
    v11 = (int)v5;
LABEL_9:
    v25 = 4LL;
    v24 = v10;
    v23 = 4LL;
    v21 = 4LL;
    v19 = 8LL;
    v17 = 16LL;
    TlgWrite((TraceLoggingHProvider)v3, v9, v4, v5, 7u, &pData);
    return;
  }
  if ( (unsigned int)dword_1C0088010 > 5 && TlgKeywordOn(a1, 0x200000000000uLL) )
  {
    v11 = v8;
    v16 = v3 + 4064;
    v9 = &unk_1C0079B6F;
    v14[0] = *(unsigned __int16 *)(v3 + 4086);
    v18 = v14;
    v20 = &v11;
    v22 = &v12;
    v10 = &v13;
    v12 = 3;
    v13 = (int)v5;
    goto LABEL_9;
  }
}

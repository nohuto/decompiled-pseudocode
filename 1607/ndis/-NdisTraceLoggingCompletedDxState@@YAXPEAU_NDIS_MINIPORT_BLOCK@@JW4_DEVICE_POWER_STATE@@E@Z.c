/*
 * XREFs of ?NdisTraceLoggingCompletedDxState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@JW4_DEVICE_POWER_STATE@@E@Z @ 0x1C00124E8
 * Callers:
 *     ndisRequestedDevicePowerIrpComplete @ 0x1C0012400 (ndisRequestedDevicePowerIrpComplete.c)
 *     ndisMediaDisconnectComplete @ 0x1C00634A0 (ndisMediaDisconnectComplete.c)
 *     ?ndisNicQuietWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C006E710 (-ndisNicQuietWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00184AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0023144 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingCompletedDxState(
        const struct _TlgProvider_t *a1,
        __int64 a2,
        enum _DEVICE_POWER_STATE a3)
{
  __int64 v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  int v6; // r10d
  int v7; // r11d
  int v8; // [rsp+30h] [rbp-49h] BYREF
  int v9; // [rsp+34h] [rbp-45h] BYREF
  int v10; // [rsp+38h] [rbp-41h] BYREF
  __int64 v11; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  __int64 v13; // [rsp+70h] [rbp-9h]
  __int64 v14; // [rsp+78h] [rbp-1h]
  __int64 *v15; // [rsp+80h] [rbp+7h]
  __int64 v16; // [rsp+88h] [rbp+Fh]
  int *v17; // [rsp+90h] [rbp+17h]
  __int64 v18; // [rsp+98h] [rbp+1Fh]
  int *v19; // [rsp+A0h] [rbp+27h]
  __int64 v20; // [rsp+A8h] [rbp+2Fh]
  int *v21; // [rsp+B0h] [rbp+37h]
  __int64 v22; // [rsp+B8h] [rbp+3Fh]

  if ( (unsigned int)dword_1C0088010 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v14 = 16LL;
      v13 = v3 + 4064;
      v11 = *(unsigned __int16 *)(v3 + 4086);
      v15 = &v11;
      v17 = &v8;
      v19 = &v9;
      v10 = (unsigned __int8)v5;
      v21 = &v10;
      v16 = 8LL;
      v8 = v7;
      v18 = 4LL;
      v9 = v6;
      v20 = 4LL;
      v22 = 4LL;
      TlgWrite((TraceLoggingHProvider)v3, &unk_1C0078522, v4, v5, 7u, &pData);
    }
  }
}

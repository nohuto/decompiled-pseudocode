/*
 * XREFs of ?NdisTraceLoggingCompletedDxState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@JW4_DEVICE_POWER_STATE@@E@Z @ 0x1C0012DD8
 * Callers:
 *     ndisRequestedDevicePowerIrpComplete @ 0x1C0012CF0 (ndisRequestedDevicePowerIrpComplete.c)
 *     ndisMediaDisconnectComplete @ 0x1C005F230 (ndisMediaDisconnectComplete.c)
 *     ?ndisNicQuietWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0069C10 (-ndisNicQuietWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@.c)
 * Callees:
 *     _TlgWrite @ 0x1C0015DA0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00186D4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingCompletedDxState(
        const struct _TlgProvider_t *a1,
        __int64 a2,
        enum _DEVICE_POWER_STATE a3)
{
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  int v6; // r10d
  int v7; // r11d
  int v8; // [rsp+30h] [rbp-29h] BYREF
  int v9; // [rsp+34h] [rbp-25h] BYREF
  int v10; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  unsigned __int64 *p_RegHandle; // [rsp+60h] [rbp+7h]
  __int64 v13; // [rsp+68h] [rbp+Fh]
  int *v14; // [rsp+70h] [rbp+17h]
  __int64 v15; // [rsp+78h] [rbp+1Fh]
  int *v16; // [rsp+80h] [rbp+27h]
  __int64 v17; // [rsp+88h] [rbp+2Fh]
  int *v18; // [rsp+90h] [rbp+37h]
  __int64 v19; // [rsp+98h] [rbp+3Fh]

  if ( (unsigned int)dword_1C0082040 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v13 = 16LL;
      p_RegHandle = &v3[63].RegHandle;
      v14 = &v10;
      v16 = &v8;
      v9 = (unsigned __int8)v5;
      v18 = &v9;
      v10 = v7;
      v15 = 4LL;
      v8 = v6;
      v17 = 4LL;
      v19 = 4LL;
      TlgWrite(v3, &unk_1C0073168, v4, v5, 6u, &pData);
    }
  }
}

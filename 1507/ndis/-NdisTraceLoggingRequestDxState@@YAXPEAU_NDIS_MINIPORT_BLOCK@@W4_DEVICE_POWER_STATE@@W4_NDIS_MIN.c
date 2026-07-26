/*
 * XREFs of ?NdisTraceLoggingRequestDxState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@W4_NDIS_MINIPORT_EVENT@@J@Z @ 0x1C000F920
 * Callers:
 *     ndisRequestDeviceLowPower @ 0x1C009BD90 (ndisRequestDeviceLowPower.c)
 * Callees:
 *     _TlgWrite @ 0x1C001752C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0017668 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingRequestDxState(
        const struct _TlgProvider_t *a1,
        enum _DEVICE_POWER_STATE a2,
        enum _NDIS_MINIPORT_EVENT a3)
{
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  unsigned __int16 v6; // r10
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

  if ( (unsigned int)dword_1C0084040 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v13 = 16LL;
      p_RegHandle = &v3[63].RegHandle;
      v14 = &v10;
      v8 = v6;
      v16 = &v8;
      v18 = &v9;
      v10 = v7;
      v15 = 4LL;
      v17 = 4LL;
      v9 = (int)v5;
      v19 = 4LL;
      TlgWrite(v3, &unk_1C0074E69, v4, v5, 6u, &pData);
    }
  }
}

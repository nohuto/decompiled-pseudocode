/*
 * XREFs of ?NdisTraceLoggingComfirmIdleNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@J@Z @ 0x1C0072300
 * Callers:
 *     NdisMIdleNotificationConfirm @ 0x1C006B1E0 (NdisMIdleNotificationConfirm.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00184AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0023144 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingComfirmIdleNotification(
        const struct _TlgProvider_t *a1,
        enum _NDIS_DEVICE_POWER_STATE a2)
{
  const struct _TlgProvider_t *v2; // rcx
  const GUID *v3; // r8
  const GUID *v4; // r9
  int v5; // r10d
  int v6; // [rsp+30h] [rbp-19h] BYREF
  int v7; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v9; // [rsp+60h] [rbp+17h]
  __int64 v10; // [rsp+68h] [rbp+1Fh]
  unsigned __int64 *p_RegHandle; // [rsp+70h] [rbp+27h]
  __int64 v12; // [rsp+78h] [rbp+2Fh]
  int *v13; // [rsp+80h] [rbp+37h]
  __int64 v14; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_1C0088010 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v6 = v5;
      v9 = &v6;
      p_RegHandle = &v2[63].RegHandle;
      v13 = &v7;
      v10 = 4LL;
      v12 = 16LL;
      v7 = (int)v4;
      v14 = 4LL;
      TlgWrite(v2, &unk_1C0079BCE, v3, v4, 5u, &pData);
    }
  }
}

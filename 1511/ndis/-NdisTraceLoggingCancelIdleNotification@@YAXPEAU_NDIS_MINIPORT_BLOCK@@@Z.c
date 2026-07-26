/*
 * XREFs of ?NdisTraceLoggingCancelIdleNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006D708
 * Callers:
 *     ndisCancelIdleRequest @ 0x1C0066454 (ndisCancelIdleRequest.c)
 * Callees:
 *     _TlgWrite @ 0x1C0015DA0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00186D4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingCancelIdleNotification(const struct _TlgProvider_t *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 *p_RegHandle; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+5Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1C0082040 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v7 = 0;
      p_RegHandle = &v1[63].RegHandle;
      v6 = 16;
      TlgWrite(v1, &unk_1C0074212, v2, v3, 3u, &pData);
    }
  }
}

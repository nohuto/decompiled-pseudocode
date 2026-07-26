/*
 * XREFs of ?NdisTraceLoggingIdleNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@JE@Z @ 0x1C006E5FC
 * Callers:
 *     ndisSubmitIdleRequest @ 0x1C00690A0 (ndisSubmitIdleRequest.c)
 * Callees:
 *     _TlgWrite @ 0x1C001752C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0017668 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingIdleNotification(const struct _TlgProvider_t *a1, __int64 a2, char a3)
{
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  int v6; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  char *v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  unsigned __int64 *p_RegHandle; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]
  char v14; // [rsp+C0h] [rbp+77h] BYREF

  v14 = a3;
  if ( (unsigned int)dword_1C0084040 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v6 = (int)v5;
      v8 = &v6;
      v10 = &v14;
      p_RegHandle = &v3[63].RegHandle;
      v9 = 4LL;
      v11 = 1LL;
      v13 = 16LL;
      TlgWrite(v3, &unk_1C0073E00, v4, v5, 5u, &pData);
    }
  }
}

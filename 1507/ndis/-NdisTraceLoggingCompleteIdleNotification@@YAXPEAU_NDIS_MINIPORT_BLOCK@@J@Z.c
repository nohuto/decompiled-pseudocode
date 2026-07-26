/*
 * XREFs of ?NdisTraceLoggingCompleteIdleNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C006E3AC
 * Callers:
 *     NdisMIdleNotificationCompleteEx @ 0x1C0067030 (NdisMIdleNotificationCompleteEx.c)
 * Callees:
 *     _TlgWrite @ 0x1C001752C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0017668 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingCompleteIdleNotification(const struct _TlgProvider_t *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  int v4; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  unsigned __int64 *p_RegHandle; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1C0084040 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v8 = 0;
      v11 = 0;
      v6 = &v4;
      p_RegHandle = &v1[63].RegHandle;
      v4 = (int)v3;
      v7 = 4;
      v10 = 16;
      TlgWrite(v1, &unk_1C0073EDC, v2, v3, 4u, &pData);
    }
  }
}

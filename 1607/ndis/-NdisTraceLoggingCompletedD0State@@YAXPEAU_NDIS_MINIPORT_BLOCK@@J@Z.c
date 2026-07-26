/*
 * XREFs of ?NdisTraceLoggingCompletedD0State@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0012814
 * Callers:
 *     ndisSetDevicePowerOnComplete @ 0x1C0012780 (ndisSetDevicePowerOnComplete.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00184AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0023144 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingCompletedD0State(const struct _TlgProvider_t *a1)
{
  __int64 v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  int v4; // [rsp+30h] [rbp-19h] BYREF
  __int64 v5; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  __int64 v7; // [rsp+60h] [rbp+17h]
  __int64 v8; // [rsp+68h] [rbp+1Fh]
  __int64 *v9; // [rsp+70h] [rbp+27h]
  __int64 v10; // [rsp+78h] [rbp+2Fh]
  int *v11; // [rsp+80h] [rbp+37h]
  __int64 v12; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_1C0088010 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v8 = 16LL;
      v7 = v1 + 4064;
      v5 = *(unsigned __int16 *)(v1 + 4086);
      v9 = &v5;
      v11 = &v4;
      v10 = 8LL;
      v4 = (int)v3;
      v12 = 4LL;
      TlgWrite((TraceLoggingHProvider)v1, &unk_1C0078D48, v2, v3, 5u, &pData);
    }
  }
}

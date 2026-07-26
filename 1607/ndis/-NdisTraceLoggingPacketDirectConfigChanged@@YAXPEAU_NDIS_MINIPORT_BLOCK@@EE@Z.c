/*
 * XREFs of ?NdisTraceLoggingPacketDirectConfigChanged@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0072D4C
 * Callers:
 *     ndisMIndicatePDConfigChange @ 0x1C0071D64 (ndisMIndicatePDConfigChange.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00184AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0023144 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingPacketDirectConfigChanged(const struct _TlgProvider_t *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  unsigned __int8 v4; // r10
  int v5; // [rsp+30h] [rbp-19h] BYREF
  int v6; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  unsigned __int64 *p_RegHandle; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  int *v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  int *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_1C0088010 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v9 = 16LL;
      p_RegHandle = &v1[63].RegHandle;
      v5 = v4;
      v10 = &v5;
      v6 = (unsigned __int8)v3;
      v12 = &v6;
      v11 = 4LL;
      v13 = 4LL;
      TlgWrite(v1, &unk_1C0079E0D, v2, v3, 5u, &pData);
    }
  }
}

/*
 * XREFs of ?NdisTraceLoggingDeprecationCandidate@@YAXW4NdisTLDeprecationCandidate@@@Z @ 0x1C00727B0
 * Callers:
 *     ?NetDmaRegisterProvider@@YAJPEAXPEAPEAXPEAU_NET_DMA_PROVIDER_CHARACTERISTICS@@@Z @ 0x1C0067D90 (-NetDmaRegisterProvider@@YAJPEAXPEAPEAXPEAU_NET_DMA_PROVIDER_CHARACTERISTICS@@@Z.c)
 *     ndisHandleOrphanDevice @ 0x1C00F2A14 (ndisHandleOrphanDevice.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00184AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0023144 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingDeprecationCandidate(const struct _TlgProvider_t *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  int v4; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1C0088010 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v8 = 0;
      v6 = &v4;
      v4 = (int)v1;
      v7 = 4;
      TlgWrite(v1, &unk_1C0078D8E, v2, v3, 3u, &pData);
    }
  }
}

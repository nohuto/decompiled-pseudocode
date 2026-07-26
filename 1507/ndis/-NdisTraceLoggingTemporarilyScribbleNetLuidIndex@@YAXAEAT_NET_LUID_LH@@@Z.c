/*
 * XREFs of ?NdisTraceLoggingTemporarilyScribbleNetLuidIndex@@YAXAEAT_NET_LUID_LH@@@Z @ 0x1C00E26F8
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00AEEAC (ndisPnPAddDevice.c)
 * Callees:
 *     _TlgWrite @ 0x1C001752C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0017668 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingTemporarilyScribbleNetLuidIndex(const struct _TlgProvider_t *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  int v4; // eax
  int v5; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1C0084040 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v4 = (*(_QWORD *)&v1->LevelPlus1 >> 24) & 0xFFFFFF;
      v8 = 4;
      v9 = 0;
      v5 = v4;
      v7 = &v5;
      TlgWrite(v1, &unk_1C0073DC9, v2, v3, 3u, &pData);
    }
  }
}

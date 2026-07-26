/*
 * XREFs of ?NdisTraceLoggingTemporarilyScribbleNetLuidIndex@@YAXAEAT_NET_LUID_LH@@@Z @ 0x1C00E22DC
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00ACC00 (ndisPnPAddDevice.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00184AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0023144 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
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

  if ( (unsigned int)dword_1C0088010 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v4 = (*(_QWORD *)&v1->LevelPlus1 >> 24) & 0xFFFFFF;
      v8 = 4;
      v9 = 0;
      v5 = v4;
      v7 = &v5;
      TlgWrite(v1, &unk_1C0079AD9, v2, v3, 3u, &pData);
    }
  }
}

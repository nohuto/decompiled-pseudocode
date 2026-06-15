/*
 * XREFs of ?LogProductionAssert@@YAX_KPEBG@Z @ 0x180051BE8
 * Callers:
 *     ?PreADGTermination@CAudioSrv@@EEAAXXZ @ 0x180001530 (-PreADGTermination@CAudioSrv@@EEAAXXZ.c)
 *     ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x180010F2C (--0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEB.c)
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x180014D10 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004A28 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180028F18 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 */

void __fastcall LogProductionAssert(__int64 a1, const unsigned __int16 *a2)
{
  const WCHAR *v2; // r9
  LPCGUID v3; // r8
  LPCGUID v4; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v6; // [rsp+50h] [rbp-38h]
  int v7; // [rsp+58h] [rbp-30h]
  int v8; // [rsp+5Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-28h] BYREF
  __int64 v10; // [rsp+90h] [rbp+8h] BYREF

  v10 = a1;
  if ( dword_1800CA040 > 2u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1800CA040, 1uLL) )
    {
      v8 = 0;
      v6 = &v10;
      v7 = 8;
      TlgCreateWsz(&pDesc, v2);
      TlgWrite((TraceLoggingHProvider)&dword_1800CA040, &unk_1800A7C44, v3, v4, 4u, &pData);
    }
  }
}

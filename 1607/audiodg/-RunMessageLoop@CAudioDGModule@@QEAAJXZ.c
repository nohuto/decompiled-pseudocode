/*
 * XREFs of ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x1400120C4
 * Callers:
 *     wWinMain @ 0x140015C78 (wWinMain.c)
 * Callees:
 *     _TlgWrite @ 0x140016088 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140016124 (_TlgKeywordOn.c)
 *     Template_q @ 0x140016F74 (Template_q.c)
 *     __security_check_cookie @ 0x140018370 (__security_check_cookie.c)
 *     ?InitiateShutdownW@CAudioDGModule@@QEAAJXZ @ 0x14002621C (-InitiateShutdownW@CAudioDGModule@@QEAAJXZ.c)
 *     WPP_SF_ @ 0x14002696C (WPP_SF_.c)
 */

__int64 __fastcall CAudioDGModule::RunMessageLoop(HANDLE *this)
{
  void *v2; // rcx
  DWORD v3; // edi
  const GUID *v4; // r8
  const GUID *v5; // r9
  HANDLE Handles[2]; // [rsp+38h] [rbp-9h] BYREF
  GUID pguid; // [rsp+48h] [rbp+7h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+17h] BYREF
  GUID *p_pguid; // [rsp+78h] [rbp+37h]
  int v11; // [rsp+80h] [rbp+3Fh]
  int v12; // [rsp+84h] [rbp+43h]

  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_d545b8d0efab383e6caea6ac6e1be9b2_Traceguids);
  }
  Handles[0] = this[14];
  Handles[1] = this[16];
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    Template_q(v2, "\r", *((unsigned int *)this + 36));
  do
  {
    v3 = WaitForMultipleObjectsEx(2u, Handles, 0, 0xFFFFFFFF, 0);
    if ( v3 == 1 )
    {
      *((_BYTE *)this + 140) = 1;
      pguid = GUID_00000000_0000_0000_0000_000000000000;
      CoCreateGuid(&pguid);
      if ( (unsigned int)dword_1400540B0 > 2 && TlgKeywordOn((TraceLoggingHProvider)&dword_1400540B0, 0x400000000000uLL) )
      {
        v12 = 0;
        p_pguid = &pguid;
        v11 = 16;
        TlgWrite((TraceLoggingHProvider)&dword_1400540B0, &unk_140045C29, v4, v5, 3u, &pData);
      }
      RtlPublishWnfStateData(WNF_AUDC_HEALTH_PROBLEM, 0LL, &pguid, 16LL, 0LL);
      CAudioDGModule::InitiateShutdownW((CAudioDGModule *)this);
    }
  }
  while ( v3 );
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_d545b8d0efab383e6caea6ac6e1be9b2_Traceguids);
  }
  return 0LL;
}

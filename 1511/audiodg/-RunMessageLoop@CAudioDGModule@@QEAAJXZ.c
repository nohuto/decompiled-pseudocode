/*
 * XREFs of ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140008844
 * Callers:
 *     wWinMain @ 0x14000195C (wWinMain.c)
 * Callees:
 *     __security_check_cookie @ 0x140018E40 (__security_check_cookie.c)
 *     ?InitiateShutdownW@CAudioDGModule@@QEAAJXZ @ 0x140027514 (-InitiateShutdownW@CAudioDGModule@@QEAAJXZ.c)
 *     Template_q @ 0x140027D14 (Template_q.c)
 *     WPP_SF_ @ 0x140027D74 (WPP_SF_.c)
 *     _TlgWrite @ 0x140027EFC (_TlgWrite.c)
 */

__int64 __fastcall CAudioDGModule::RunMessageLoop(HANDLE *this)
{
  void *v2; // rcx
  DWORD v3; // edi
  const GUID *v4; // r8
  const GUID *v5; // r9
  HANDLE Handles[2]; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-38h] BYREF

  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_bda7893d5b5a9c157c1c64dd23f2c3f0_Traceguids);
  }
  Handles[0] = this[14];
  Handles[1] = this[16];
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    Template_q(v2, &EVT_AUDIOSRV_AUDIODG_READY, *((unsigned int *)this + 36));
  do
  {
    v3 = WaitForMultipleObjectsEx(2u, Handles, 0, 0xFFFFFFFF, 0);
    if ( v3 == 1 )
    {
      *((_BYTE *)this + 140) = 1;
      if ( hProvider > 2u
        && (qword_1400552A0 & 0x400000000000LL) != 0
        && (qword_1400552A8 & 0x400000000000LL) == qword_1400552A8 )
      {
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_14004559F, v4, v5, 2u, &pData);
      }
      CAudioDGModule::InitiateShutdownW((CAudioDGModule *)this);
    }
  }
  while ( v3 );
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_bda7893d5b5a9c157c1c64dd23f2c3f0_Traceguids);
  }
  return 0LL;
}

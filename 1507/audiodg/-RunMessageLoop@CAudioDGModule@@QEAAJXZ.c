/*
 * XREFs of ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140014B24
 * Callers:
 *     wWinMain @ 0x1400177C0 (wWinMain.c)
 * Callees:
 *     _TlgWrite @ 0x140002780 (_TlgWrite.c)
 *     ?InitiateShutdownW@CAudioDGModule@@QEAAJXZ @ 0x140015150 (-InitiateShutdownW@CAudioDGModule@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x140018F00 (__security_check_cookie.c)
 *     Template_q @ 0x1400273C4 (Template_q.c)
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 */

__int64 __fastcall CAudioDGModule::RunMessageLoop(HANDLE *this)
{
  __int64 v2; // rcx
  DWORD v3; // edi
  const GUID *v4; // r8
  const GUID *v5; // r9
  HANDLE Handles[2]; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x10) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 26LL, &WPP_8e827d74b75d909828aa6999fde946fd_Traceguids);
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
      if ( hProvider > 5u
        && (qword_1400552A0 & 0x400000000000LL) != 0
        && (qword_1400552A8 & 0x400000000000LL) == qword_1400552A8 )
      {
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_140045607, v4, v5, 2u, &pData);
      }
      CAudioDGModule::InitiateShutdownW((CAudioDGModule *)this);
    }
  }
  while ( v3 );
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x10) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 27LL, &WPP_8e827d74b75d909828aa6999fde946fd_Traceguids);
  }
  return 0LL;
}

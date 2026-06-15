/*
 * XREFs of ?CaptureMonitorThread@CMonitor@@AEAAKXZ @ 0x180098EC4
 * Callers:
 *     ?CaptureMonitorThreadWrapper@CMonitor@@CAKPEAX@Z @ 0x180098FD0 (-CaptureMonitorThreadWrapper@CMonitor@@CAKPEAX@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x18009B1CC (-ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 *     ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x18009B688 (-ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 *     ?ResetEngineThreadPriority@@YAJPEAPEAX@Z @ 0x18009D11C (-ResetEngineThreadPriority@@YAJPEAPEAX@Z.c)
 *     ?SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@PEAPEAX@Z @ 0x18009D16C (-SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@PEAPEAX@Z.c)
 */

__int64 __fastcall CMonitor::CaptureMonitorThread(HANDLE *this)
{
  int v2; // eax
  DWORD v3; // eax
  DWORD v4; // eax
  void *v6; // [rsp+30h] [rbp-38h] BYREF
  HANDLE Handles[3]; // [rsp+38h] [rbp-30h] BYREF

  v6 = 0LL;
  v2 = SetEngineThreadPriority(this, &v6);
  if ( v2 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x20u,
      (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids,
      v2);
  }
  Handles[0] = this[36];
  Handles[1] = this[14];
  Handles[2] = this[29];
  while ( 1 )
  {
    v4 = WaitForMultipleObjectsEx(3u, Handles, 0, 0xFFFFFFFF, 0);
    if ( v4 == -1 )
      break;
    if ( v4 )
    {
      v3 = v4 - 1;
      if ( v3 )
      {
        if ( v3 == 1 )
          CMonitor::ProcessRenderBufferReadyEvent((CMonitor *)this);
      }
      else
      {
        CMonitor::ProcessCaptureBufferReadyEvent((CMonitor *)this);
      }
    }
    else if ( *((_DWORD *)this + 14) != 3 )
    {
      break;
    }
  }
  if ( v6 )
    ResetEngineThreadPriority(&v6);
  return 0LL;
}

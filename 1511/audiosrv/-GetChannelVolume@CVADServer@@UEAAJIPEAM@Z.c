/*
 * XREFs of ?GetChannelVolume@CVADServer@@UEAAJIPEAM@Z @ 0x180087B30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 *     ?GetStreamChannelVolume@CAudioStream@@QEAAJIPEAM@Z @ 0x18007D31C (-GetStreamChannelVolume@CAudioStream@@QEAAJIPEAM@Z.c)
 */

__int64 __fastcall CVADServer::GetChannelVolume(CVADServer *this, unsigned int a2, float *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  CAudioStream *v7; // rcx
  int StreamChannelVolume; // ebx

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x46u,
      (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      this,
      a2);
  }
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  v7 = (CAudioStream *)*((_QWORD *)this + 26);
  if ( v7 && *((_DWORD *)this + 50) )
    StreamChannelVolume = CAudioStream::GetStreamChannelVolume(v7, a2, a3);
  else
    StreamChannelVolume = -2004287487;
  LeaveCriticalSection(v6);
  if ( StreamChannelVolume < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x47u,
      (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      StreamChannelVolume);
  }
  return (unsigned int)StreamChannelVolume;
}

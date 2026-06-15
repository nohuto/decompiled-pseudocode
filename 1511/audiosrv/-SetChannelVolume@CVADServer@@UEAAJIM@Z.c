/*
 * XREFs of ?SetChannelVolume@CVADServer@@UEAAJIM@Z @ 0x1800889E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_qdg @ 0x18006F92C (WPP_SF_qdg.c)
 *     ?SetStreamChannelVolume@CAudioStream@@QEAAJIM@Z @ 0x18007DCFC (-SetStreamChannelVolume@CAudioStream@@QEAAJIM@Z.c)
 */

__int64 __fastcall CVADServer::SetChannelVolume(CVADServer *this, unsigned int a2, float a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  CAudioStream *v6; // rcx
  int v7; // ebx

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x44u,
      (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      this,
      a2,
      a3);
  }
  if ( a3 < 0.0 || a3 > 1.0 )
    return 2147942487LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  v6 = (CAudioStream *)*((_QWORD *)this + 26);
  if ( v6 && *((_DWORD *)this + 50) )
    v7 = CAudioStream::SetStreamChannelVolume(v6, a2, a3);
  else
    v7 = -2004287487;
  LeaveCriticalSection(v5);
  if ( v7 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x45u, (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, v7);
  }
  return (unsigned int)v7;
}

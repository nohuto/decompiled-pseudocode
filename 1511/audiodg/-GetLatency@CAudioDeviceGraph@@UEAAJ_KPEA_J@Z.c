/*
 * XREFs of ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x1400066A0
 * Callers:
 *     ?GetSaDeviceLatency@CSystemAudioDeviceSharedBase@@UEAA_JXZ @ 0x1400055C0 (-GetSaDeviceLatency@CSystemAudioDeviceSharedBase@@UEAA_JXZ.c)
 * Callees:
 *     ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x1400067AC (-FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z.c)
 *     ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x14000C600 (-GetLatency@CPipeInstance@@QEBAJPEA_J@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetLatency(CAudioDeviceGraph *this, unsigned __int64 a2, __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  __int64 v7; // rsi
  CPipeInstance *PipeInstance; // rdi
  int Latency; // ebx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  v7 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( *((_DWORD *)this + 56) )
  {
    if ( a3 )
    {
      PipeInstance = CAudioDeviceGraph::FindPipeInstance(this, a2);
      if ( PipeInstance )
      {
        while ( 1 )
        {
          Latency = CPipeInstance::GetLatency(PipeInstance, &v11);
          if ( Latency < 0 )
            break;
          v7 += v11;
          PipeInstance = *(CPipeInstance **)PipeInstance;
          if ( !PipeInstance )
          {
            Latency = 0;
            *a3 = v7;
            break;
          }
        }
      }
      else
      {
        Latency = -2005139430;
      }
    }
    else
    {
      Latency = -2147467261;
    }
  }
  else
  {
    Latency = -2005139437;
  }
  LeaveCriticalSection(v3);
  if ( Latency < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      37LL,
      &WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids,
      (unsigned int)Latency);
  }
  return (unsigned int)Latency;
}

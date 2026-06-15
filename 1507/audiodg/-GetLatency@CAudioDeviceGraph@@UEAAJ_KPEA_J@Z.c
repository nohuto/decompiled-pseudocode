/*
 * XREFs of ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x14000FC70
 * Callers:
 *     ?GetSaDeviceLatency@CSystemAudioDeviceSharedNew@@UEAA_JXZ @ 0x14000DF00 (-GetSaDeviceLatency@CSystemAudioDeviceSharedNew@@UEAA_JXZ.c)
 * Callees:
 *     ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x140004800 (-GetLatency@CPipeInstance@@QEBAJPEA_J@Z.c)
 *     ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x14000ED7C (-FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetLatency(CAudioDeviceGraph *this, __int64 a2, __int64 *a3)
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
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      21LL,
      &WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids,
      (unsigned int)Latency);
  }
  return (unsigned int)Latency;
}

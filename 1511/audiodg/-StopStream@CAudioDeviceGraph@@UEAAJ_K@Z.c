/*
 * XREFs of ?StopStream@CAudioDeviceGraph@@UEAAJ_K@Z @ 0x140032FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x1400067AC (-FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z.c)
 *     ?ResetAPOs@CPipeInstance@@QEBAXXZ @ 0x14000BF50 (-ResetAPOs@CPipeInstance@@QEBAXXZ.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     WPP_SF_ @ 0x140027D74 (WPP_SF_.c)
 */

__int64 __fastcall CAudioDeviceGraph::StopStream(CAudioDeviceGraph *this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v5; // ebx
  CPipeInstance *PipeInstance; // rax
  _UNKNOWN **v7; // rcx

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x38u, (__int64)&WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids);
  }
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( *((_DWORD *)this + 56) )
  {
    PipeInstance = CAudioDeviceGraph::FindPipeInstance(this, a2);
    if ( PipeInstance )
    {
      CPipeInstance::ResetAPOs(PipeInstance);
      v5 = 0;
    }
    else
    {
      v5 = -2005139430;
    }
  }
  else
  {
    v5 = -2005139437;
  }
  LeaveCriticalSection(v4);
  if ( v5 >= 0 )
    goto LABEL_15;
  v7 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control )
    return (unsigned int)v5;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x39u, (__int64)&WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids, v5);
LABEL_15:
    v7 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( v7 != &WPP_GLOBAL_Control && (*((_DWORD *)v7 + 7) & 0x20000) != 0 && *((_BYTE *)v7 + 25) >= 4u )
    WPP_SF_((__int64)v7[2], 0x3Au, (__int64)&WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids);
  return (unsigned int)v5;
}

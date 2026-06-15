/*
 * XREFs of ?StopStream@CAudioDeviceGraph@@UEAAJ_K@Z @ 0x140032C70
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetAPOs@CPipeInstance@@QEBAXXZ @ 0x1400043F0 (-ResetAPOs@CPipeInstance@@QEBAXXZ.c)
 *     ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x14000ED7C (-FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 */

__int64 __fastcall CAudioDeviceGraph::StopStream(CAudioDeviceGraph *this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v5; // ebx
  CPipeInstance *PipeInstance; // rax
  __int64 v7; // rcx

  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x28u,
      (__int64)&WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids);
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
  v7 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control )
    return (unsigned int)v5;
  if ( (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x29u,
      (__int64)&WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids,
      v5);
LABEL_15:
    v7 = *(_QWORD *)&WPP_GLOBAL_Control;
  }
  if ( (unsigned int *)v7 != &WPP_GLOBAL_Control && (*(_DWORD *)(v7 + 28) & 0x20000) != 0 && *(_BYTE *)(v7 + 25) >= 4u )
    WPP_SF_(*(_QWORD *)(v7 + 16), 0x2Au, (__int64)&WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids);
  return (unsigned int)v5;
}

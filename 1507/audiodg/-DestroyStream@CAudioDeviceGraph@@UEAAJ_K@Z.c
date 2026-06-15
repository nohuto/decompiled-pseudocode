/*
 * XREFs of ?DestroyStream@CAudioDeviceGraph@@UEAAJ_K@Z @ 0x140032130
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14000866C (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x14000ED7C (-FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x1400106A0 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 *     ?Find@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCPipeInstance@@PEAU3@@Z @ 0x1400299D0 (-Find@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEBAPEAU__P.c)
 *     ?DestroyModePipe@CAudioDeviceGraph@@AEAAXPEAVCPipeInstance@@@Z @ 0x140032068 (-DestroyModePipe@CAudioDeviceGraph@@AEAAXPEAVCPipeInstance@@@Z.c)
 *     ?RemoveAt@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140032A7C (-RemoveAt@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXPE.c)
 */

__int64 __fastcall CAudioDeviceGraph::DestroyStream(CAudioDeviceGraph *this, __int64 a2)
{
  int v4; // ebx
  CPipeInstance *v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // r8
  struct CPipeInstance *v8; // rbx
  __int64 v10; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v13; // [rsp+28h] [rbp-20h]
  struct CPipeInstance *PipeInstance; // [rsp+50h] [rbp+8h] BYREF

  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x25u,
      (__int64)&WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( *((_DWORD *)this + 56) )
  {
    PipeInstance = CAudioDeviceGraph::FindPipeInstance(this, a2);
    v5 = PipeInstance;
    if ( PipeInstance )
    {
      ATL::CCritSecLock::CCritSecLock(
        (ATL::CCritSecLock *)&lpCriticalSection,
        (struct _RTL_CRITICAL_SECTION *)((char *)this + 184));
      v6 = ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::Find((_QWORD *)this + 17, &PipeInstance);
      ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAt(v7, v6);
      if ( v13 )
        LeaveCriticalSection(lpCriticalSection);
      v8 = *(struct CPipeInstance **)v5;
      CPipeInstance::`scalar deleting destructor'(v5);
      if ( v8 )
      {
        if ( *((_DWORD *)v8 + 28) == 3 && (*((_DWORD *)v8 + 56))-- == 1 )
          CAudioDeviceGraph::DestroyModePipe(this, v8);
      }
      v4 = 0;
    }
    else
    {
      v4 = -2005139430;
    }
  }
  else
  {
    v4 = -2005139437;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( v4 >= 0 )
    goto LABEL_21;
  v10 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control )
    return (unsigned int)v4;
  if ( (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x26u,
      (__int64)&WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids,
      v4);
LABEL_21:
    v10 = *(_QWORD *)&WPP_GLOBAL_Control;
  }
  if ( (unsigned int *)v10 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v10 + 28) & 0x20000) != 0
    && *(_BYTE *)(v10 + 25) >= 4u )
  {
    WPP_SF_(*(_QWORD *)(v10 + 16), 0x27u, (__int64)&WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids);
  }
  return (unsigned int)v4;
}

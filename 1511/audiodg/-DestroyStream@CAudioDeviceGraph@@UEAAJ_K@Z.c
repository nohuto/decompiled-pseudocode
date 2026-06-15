/*
 * XREFs of ?DestroyStream@CAudioDeviceGraph@@UEAAJ_K@Z @ 0x140031C70
 * Callers:
 *     <none>
 * Callees:
 *     ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x1400067AC (-FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x140008140 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140026234 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     WPP_SF_ @ 0x140027D74 (WPP_SF_.c)
 *     ?DestroyModePipe@CAudioDeviceGraph@@AEAAXPEAVCPipeInstance@@@Z @ 0x140031BA8 (-DestroyModePipe@CAudioDeviceGraph@@AEAAXPEAVCPipeInstance@@@Z.c)
 *     ?Find@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCPipeInstance@@PEAU3@@Z @ 0x140031DFC (-Find@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEBAPEAU__P.c)
 *     ?RemoveAt@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140032BBC (-RemoveAt@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXPE.c)
 */

__int64 __fastcall CAudioDeviceGraph::DestroyStream(CAudioDeviceGraph *this, __int64 a2)
{
  int v4; // ebx
  LPVOID *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r8
  struct CPipeInstance *v8; // rbx
  _UNKNOWN **v10; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v13; // [rsp+28h] [rbp-20h]
  struct CPipeInstance *PipeInstance; // [rsp+50h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x35u, (__int64)&WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( *((_DWORD *)this + 56) )
  {
    PipeInstance = CAudioDeviceGraph::FindPipeInstance(this, a2);
    v5 = (LPVOID *)PipeInstance;
    if ( PipeInstance )
    {
      ATL::CCritSecLock::CCritSecLock(
        (ATL::CCritSecLock *)&lpCriticalSection,
        (struct _RTL_CRITICAL_SECTION *)((char *)this + 184));
      v6 = ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::Find((char *)this + 136, &PipeInstance);
      ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAt(v7, v6);
      if ( v13 )
        LeaveCriticalSection(lpCriticalSection);
      v8 = (struct CPipeInstance *)*v5;
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
  v10 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control )
    return (unsigned int)v4;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x36u, (__int64)&WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids, v4);
LABEL_21:
    v10 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( v10 != &WPP_GLOBAL_Control && (*((_DWORD *)v10 + 7) & 0x20000) != 0 && *((_BYTE *)v10 + 25) >= 4u )
    WPP_SF_((__int64)v10[2], 0x37u, (__int64)&WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids);
  return (unsigned int)v4;
}

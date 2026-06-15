/*
 * XREFs of ?ConnectStreamGroup@CSystemAudioDeviceSharedBase@@UEAAXPEAUIStreamGroupInternal@@@Z @ 0x140005AF0
 * Callers:
 *     ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@Z @ 0x140003980 (-ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140008110 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 */

void __fastcall CSystemAudioDeviceSharedBase::ConnectStreamGroup(
        CSystemAudioDeviceSharedBase *this,
        struct IStreamGroupInternal *a2)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  v4 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 104);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  ++*((_DWORD *)this + 10);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      29LL,
      &WPP_c59105ced4022a196d4cc1b91b2ab5a7_Traceguids,
      *((unsigned int *)this + 10));
  }
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
}

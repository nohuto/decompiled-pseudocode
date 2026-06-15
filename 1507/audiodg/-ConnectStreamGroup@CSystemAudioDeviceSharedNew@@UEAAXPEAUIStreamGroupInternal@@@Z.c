/*
 * XREFs of ?ConnectStreamGroup@CSystemAudioDeviceSharedNew@@UEAAXPEAUIStreamGroupInternal@@@Z @ 0x14000E430
 * Callers:
 *     ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@Z @ 0x140011960 (-ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010670 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 */

void __fastcall CSystemAudioDeviceSharedNew::ConnectStreamGroup(
        CSystemAudioDeviceSharedNew *this,
        struct IStreamGroupInternal *a2)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  v4 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 104);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  ++*((_DWORD *)this + 24);
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      21LL,
      &WPP_c0a199d1e000f5a39bc1451c73891527_Traceguids,
      *((unsigned int *)this + 24));
  }
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
}

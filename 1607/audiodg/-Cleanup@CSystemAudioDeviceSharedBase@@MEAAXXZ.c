/*
 * XREFs of ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140005C10
 * Callers:
 *     ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x1400058F0 (--1CSystemAudioDeviceSharedBase@@UEAA@XZ.c)
 *     ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x140016AD0 (--1CSystemAudioDeviceShared@@UEAA@XZ.c)
 *     ??1CSystemAudioDeviceOffloadGraph@@UEAA@XZ @ 0x14002D104 (--1CSystemAudioDeviceOffloadGraph@@UEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceOffloadGraph@@MEAAXXZ @ 0x14002D360 (-Cleanup@CSystemAudioDeviceOffloadGraph@@MEAAXXZ.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002D8E0 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 * Callees:
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x1400036C0 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x140005348 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x140005E20 (-Release@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ.c)
 *     ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x14001614C (-Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x14002696C (WPP_SF_.c)
 */

void __fastcall CSystemAudioDeviceSharedBase::Cleanup(CSystemAudioDeviceSharedBase *this)
{
  _QWORD *v2; // rcx
  void *v3; // rdx
  __int64 (__fastcall *v4)(void *); // rax

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_173d15811cc23b95bfd4e544d18d6c2b_Traceguids);
  }
  if ( *((_DWORD *)this + 79) )
  {
    CSystemAudioDeviceCollection::Remove(this);
    *((_DWORD *)this + 79) = 0;
  }
  CSystemAudioDeviceBase::Cleanup(this);
  if ( !*((_QWORD *)this + 38) )
    goto LABEL_22;
  if ( !*((_DWORD *)this + 78) )
    goto LABEL_9;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_173d15811cc23b95bfd4e544d18d6c2b_Traceguids);
  }
  if ( (int)CSystemAudioDeviceSharedBase::SetGraphState((__int64)this, 0) >= 0 )
    goto LABEL_9;
  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_173d15811cc23b95bfd4e544d18d6c2b_Traceguids);
LABEL_9:
    v2 = WPP_GLOBAL_Control;
  }
  v3 = (void *)*((_QWORD *)this + 38);
  if ( v3 )
  {
    *((_QWORD *)this + 38) = 0LL;
    v4 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v3 + 16LL);
    if ( v4 == ATL::CComObject<CAudioDeviceGraph>::Release )
      ATL::CComObject<CAudioDeviceGraph>::Release(v3);
    else
      v4(v3);
    v2 = WPP_GLOBAL_Control;
  }
  if ( v2 != &WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)v2 + 7) & 0x200) == 0 || *((_BYTE *)v2 + 25) < 4u )
    {
LABEL_17:
      if ( v2 != &WPP_GLOBAL_Control && (*((_DWORD *)v2 + 7) & 0x200) != 0 && *((_BYTE *)v2 + 25) >= 4u )
        WPP_SF_(v2[2], 15LL, &WPP_173d15811cc23b95bfd4e544d18d6c2b_Traceguids);
      goto LABEL_21;
    }
    WPP_SF_(v2[2], 14LL, &WPP_173d15811cc23b95bfd4e544d18d6c2b_Traceguids);
LABEL_22:
    v2 = WPP_GLOBAL_Control;
    goto LABEL_17;
  }
LABEL_21:
  PublishDeviceGraphWnfState();
}

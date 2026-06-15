/*
 * XREFs of ?Cleanup@CSystemAudioDeviceSharedNew@@MEAAXXZ @ 0x14000E8A0
 * Callers:
 *     ??1CSystemAudioDeviceSharedNew@@UEAA@XZ @ 0x14000E9B8 (--1CSystemAudioDeviceSharedNew@@UEAA@XZ.c)
 * Callees:
 *     ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x1400012E0 (-Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?SetGraphState@CSystemAudioDeviceSharedNew@@IEAAJW4GRAPH_STATE@@@Z @ 0x14000E020 (-SetGraphState@CSystemAudioDeviceSharedNew@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x14000EB10 (-Release@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ.c)
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x140010E70 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 */

void __fastcall CSystemAudioDeviceSharedNew::Cleanup(CSystemAudioDeviceSharedNew *this)
{
  __int64 v2; // rcx
  void *v3; // rdi
  __int64 (__fastcall *v4)(void *); // rbx

  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 11LL, &WPP_c0a199d1e000f5a39bc1451c73891527_Traceguids);
  }
  if ( *((_DWORD *)this + 93) )
  {
    CSystemAudioDeviceCollection::Remove(this);
    *((_DWORD *)this + 93) = 0;
  }
  CSystemAudioDeviceBase::Cleanup(this);
  if ( !*((_QWORD *)this + 45) )
    goto LABEL_33;
  if ( !*((_DWORD *)this + 92) )
    goto LABEL_9;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 12LL, &WPP_c0a199d1e000f5a39bc1451c73891527_Traceguids);
  }
  if ( (int)CSystemAudioDeviceSharedNew::SetGraphState((__int64)this, 0) >= 0 )
    goto LABEL_9;
  v2 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 13LL, &WPP_c0a199d1e000f5a39bc1451c73891527_Traceguids);
LABEL_9:
    v2 = *(_QWORD *)&WPP_GLOBAL_Control;
  }
  v3 = (void *)*((_QWORD *)this + 45);
  if ( v3 )
  {
    *((_QWORD *)this + 45) = 0LL;
    v4 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v3 + 16LL);
    if ( v4 == ATL::CComObject<CAudioDeviceGraph>::Release )
      ATL::CComObject<CAudioDeviceGraph>::Release(v3);
    else
      v4(v3);
    v2 = *(_QWORD *)&WPP_GLOBAL_Control;
  }
  if ( (unsigned int *)v2 != &WPP_GLOBAL_Control )
  {
    if ( (*(_DWORD *)(v2 + 28) & 0x200) == 0 || *(_BYTE *)(v2 + 25) < 4u )
    {
LABEL_17:
      if ( (unsigned int *)v2 != &WPP_GLOBAL_Control && (*(_DWORD *)(v2 + 28) & 0x200) != 0 && *(_BYTE *)(v2 + 25) >= 4u )
        WPP_SF_(*(_QWORD *)(v2 + 16), 15LL, &WPP_c0a199d1e000f5a39bc1451c73891527_Traceguids);
      goto LABEL_21;
    }
    WPP_SF_(*(_QWORD *)(v2 + 16), 14LL, &WPP_c0a199d1e000f5a39bc1451c73891527_Traceguids);
LABEL_33:
    v2 = *(_QWORD *)&WPP_GLOBAL_Control;
    goto LABEL_17;
  }
LABEL_21:
  PublishDeviceGraphWnfState();
}

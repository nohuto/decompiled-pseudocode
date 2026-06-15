/*
 * XREFs of ?Cleanup@CSystemAudioDeviceShared@@MEAAXXZ @ 0x14002BEB0
 * Callers:
 *     ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x14002BB94 (--1CSystemAudioDeviceShared@@UEAA@XZ.c)
 * Callees:
 *     ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x1400012E0 (-Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessor@@@ATL@@QEAAXXZ @ 0x140001344 (-Release@-$CComPtrBase@UIAudioProcessor@@@ATL@@QEAAXXZ.c)
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x140010E70 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 */

void __fastcall CSystemAudioDeviceShared::Cleanup(CSystemAudioDeviceShared *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0xBu,
      (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids);
  }
  if ( *((_DWORD *)this + 93) )
    CSystemAudioDeviceCollection::Remove(this);
  CSystemAudioDeviceBase::Cleanup(this);
  if ( !*((_QWORD *)this + 45) )
    goto LABEL_32;
  if ( !*((_DWORD *)this + 94) )
    goto LABEL_24;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0xCu,
      (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids);
  }
  if ( (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 45) + 96LL))(*((_QWORD *)this + 45)) >= 0 )
    goto LABEL_18;
  v2 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
  {
    if ( (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) < 4u )
    {
LABEL_19:
      if ( (unsigned int *)v2 != &WPP_GLOBAL_Control && (*(_DWORD *)(v2 + 28) & 0x200) != 0 && *(_BYTE *)(v2 + 25) >= 4u )
        WPP_SF_(*(_QWORD *)(v2 + 16), 0xEu, (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids);
      goto LABEL_23;
    }
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0xDu,
      (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids);
LABEL_18:
    v2 = *(_QWORD *)&WPP_GLOBAL_Control;
    goto LABEL_19;
  }
LABEL_23:
  *((_DWORD *)this + 94) = 0;
LABEL_24:
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0xFu,
      (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids);
  }
  ATL::CComPtrBase<IAudioProcessor>::Release((__int64 *)this + 45);
  v3 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
  {
    if ( (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) < 4u )
    {
LABEL_33:
      if ( (unsigned int *)v3 != &WPP_GLOBAL_Control && (*(_DWORD *)(v3 + 28) & 0x200) != 0 && *(_BYTE *)(v3 + 25) >= 4u )
        WPP_SF_(*(_QWORD *)(v3 + 16), 0x11u, (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids);
      goto LABEL_37;
    }
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x10u,
      (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids);
LABEL_32:
    v3 = *(_QWORD *)&WPP_GLOBAL_Control;
    goto LABEL_33;
  }
LABEL_37:
  *((_DWORD *)this + 98) = 1;
  PublishDeviceGraphWnfState();
}

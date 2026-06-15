/*
 * XREFs of ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x140010E70
 * Callers:
 *     ?Cleanup@CSystemAudioDeviceOffload@@MEAAXXZ @ 0x140001DD0 (-Cleanup@CSystemAudioDeviceOffload@@MEAAXXZ.c)
 *     ?Cleanup@CSystemAudioDeviceSharedNew@@MEAAXXZ @ 0x14000E8A0 (-Cleanup@CSystemAudioDeviceSharedNew@@MEAAXXZ.c)
 *     ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x140010740 (--1CSystemAudioDeviceBase@@UEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ @ 0x14002AD00 (-Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ.c)
 *     ?Cleanup@CSystemAudioDeviceShared@@MEAAXXZ @ 0x14002BEB0 (-Cleanup@CSystemAudioDeviceShared@@MEAAXXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x140029858 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAVCStreamInstance@@XZ @ 0x140029C08 (-RemoveHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@Q.c)
 */

void __fastcall CSystemAudioDeviceBase::Cleanup(CSystemAudioDeviceBase *this)
{
  __int64 v2; // rcx
  CStreamInstance *v3; // rax
  unsigned int v4; // edx
  CStreamInstance *v5; // rax
  unsigned int v6; // edx
  CStreamInstance *v7; // rax
  unsigned int v8; // edx

  v2 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 10LL, &WPP_ca42ec4cb178d74a7f1996bdcf4a7a5d_Traceguids);
    v2 = *(_QWORD *)&WPP_GLOBAL_Control;
  }
  if ( *((_QWORD *)this + 12) )
  {
    do
    {
      v3 = (CStreamInstance *)ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveHead((char *)this + 80);
      if ( v3 )
        CStreamInstance::`scalar deleting destructor'(v3, v4);
    }
    while ( *((_QWORD *)this + 12) );
    v2 = *(_QWORD *)&WPP_GLOBAL_Control;
  }
  if ( *((_QWORD *)this + 6) )
  {
    do
    {
      v5 = (CStreamInstance *)ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveHead((char *)this + 32);
      if ( v5 )
        CStreamInstance::`scalar deleting destructor'(v5, v6);
    }
    while ( *((_QWORD *)this + 6) );
    v2 = *(_QWORD *)&WPP_GLOBAL_Control;
  }
  if ( *((_QWORD *)this + 18) )
  {
    do
    {
      v7 = (CStreamInstance *)ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveHead((char *)this + 128);
      if ( v7 )
        CStreamInstance::`scalar deleting destructor'(v7, v8);
    }
    while ( *((_QWORD *)this + 18) );
    v2 = *(_QWORD *)&WPP_GLOBAL_Control;
  }
  if ( (unsigned int *)v2 != &WPP_GLOBAL_Control && (*(_DWORD *)(v2 + 28) & 0x200) != 0 && *(_BYTE *)(v2 + 25) >= 4u )
    WPP_SF_(*(_QWORD *)(v2 + 16), 11LL, &WPP_ca42ec4cb178d74a7f1996bdcf4a7a5d_Traceguids);
}

/*
 * XREFs of ?AddInstanceLocked@FxWmiProvider@@IEAAJPEAVFxWmiInstance@@EPEAEW4AddInstanceAction@1@@Z @ 0x1C002AFFC
 * Callers:
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C002AC4C (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x1C002B084 (-AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 */

__int64 __fastcall FxWmiProvider::AddInstanceLocked(
        FxWmiProvider *this,
        unsigned __int64 Instance,
        unsigned __int8 NoErrorIfPresent,
        unsigned __int8 *Update,
        FxWmiProvider::AddInstanceAction Action)
{
  _LIST_ENTRY *v5; // r10
  _LIST_ENTRY *p_m_InstanceListHead; // rax
  _LIST_ENTRY *Flink; // rcx
  const void *_a1; // rdx
  unsigned int v11; // ebx
  const void *v12; // rdx
  _LIST_ENTRY *Blink; // rcx

  v5 = (_LIST_ENTRY *)(Instance + 120);
  *Update = 0;
  if ( v5->Flink == v5 )
  {
    if ( this->m_Parent->m_RegisteredState == WmiRegistered )
    {
      *Update = 1;
    }
    else if ( this->m_Parent->m_RegisteredState == WmiCleanedUp )
    {
      if ( *(_WORD *)(Instance + 10) )
        v12 = (const void *)(Instance ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v12 = 0LL;
      v11 = -1073741436;
      WPP_IFR_SF_qd(this->m_Globals, 4u, 0x12u, 0x11u, WPP_FxWmiProvider_cpp_Traceguids, v12, -1073741436);
      return v11;
    }
    p_m_InstanceListHead = &this->m_InstanceListHead;
    if ( Action )
    {
      Flink = p_m_InstanceListHead->Flink;
      v5->Flink = p_m_InstanceListHead->Flink;
      *(_QWORD *)(Instance + 128) = p_m_InstanceListHead;
      if ( Flink->Blink != p_m_InstanceListHead )
        __fastfail(3u);
      Flink->Blink = v5;
      p_m_InstanceListHead->Flink = v5;
    }
    else
    {
      Blink = this->m_InstanceListHead.Blink;
      v5->Flink = p_m_InstanceListHead;
      *(_QWORD *)(Instance + 128) = Blink;
      if ( Blink->Flink != p_m_InstanceListHead )
        __fastfail(3u);
      Blink->Flink = v5;
      this->m_InstanceListHead.Blink = v5;
    }
    ++this->m_NumInstances;
    this->m_RemoveGuid = 0;
    return 0LL;
  }
  if ( NoErrorIfPresent )
    return 0LL;
  if ( *(_WORD *)(Instance + 10) )
    _a1 = (const void *)(Instance ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  v11 = -1073741808;
  WPP_IFR_SF_qd(this->m_Globals, 2u, 0x12u, 0x10u, WPP_FxWmiProvider_cpp_Traceguids, _a1, -1073741808);
  return v11;
}

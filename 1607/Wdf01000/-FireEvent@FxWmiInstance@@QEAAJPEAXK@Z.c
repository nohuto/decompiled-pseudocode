/*
 * XREFs of ?FireEvent@FxWmiInstance@@QEAAJPEAXK@Z @ 0x1C006FB20
 * Callers:
 *     imp_WdfWmiInstanceFireEvent @ 0x1C006F330 (imp_WdfWmiInstanceFireEvent.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     memmove @ 0x1C003C440 (memmove.c)
 *     ?GetInstanceIndex@FxWmiProvider@@QEAAKPEAVFxWmiInstance@@@Z @ 0x1C006F6DC (-GetInstanceIndex@FxWmiProvider@@QEAAKPEAVFxWmiInstance@@@Z.c)
 */

__int64 __fastcall FxWmiInstance::FireEvent(FxWmiInstance *this, void *EventBuffer, unsigned int EventBufferSize)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  unsigned int v6; // esi
  char *PoolWithTag; // rax
  _DWORD *v8; // rdi
  ULONG v9; // eax
  unsigned __int8 v10; // r8
  NTSTATUS v11; // esi
  const void *_a1; // rbx

  p_m_Globals = &this->m_Globals;
  v6 = EventBuffer != 0LL ? EventBufferSize : 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v6 + 64, this->m_Globals->Tag);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_GUID *)(PoolWithTag + 24) = this->m_Provider->m_Guid;
    v9 = IoWMIDeviceObjectToProviderId(this->m_Provider->m_Parent->m_DeviceBase->m_DeviceObject.m_DeviceObject);
    *v8 = v6 + 64;
    v8[1] = v9;
    v8[11] = 138;
    *((_QWORD *)v8 + 2) = MEMORY[0xFFFFF78000000014];
    v8[13] = FxWmiProvider::GetInstanceIndex(this->m_Provider, (_LIST_ENTRY **)this, v10);
    v8[15] = v6;
    v8[14] = 64;
    if ( EventBuffer )
      memmove(v8 + 16, EventBuffer, v6);
    v11 = IoWMIWriteEvent(v8);
    if ( v11 < 0 )
      ExFreePoolWithTag(v8, 0);
  }
  else
  {
    v11 = -1073741670;
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(*p_m_Globals, 2u, 0x12u, 0xAu, WPP_FxWmiInstance_cpp_Traceguids, _a1, -1073741670);
  }
  return (unsigned int)v11;
}

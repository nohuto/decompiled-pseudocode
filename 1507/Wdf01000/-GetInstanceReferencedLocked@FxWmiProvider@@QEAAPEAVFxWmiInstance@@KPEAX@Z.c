/*
 * XREFs of ?GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x1C0068EA8
 * Callers:
 *     ?Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x1C0025090 (-Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z.c)
 *     ?GetInstanceReferenced@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x1C0068E2C (-GetInstanceReferenced@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z.c)
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

_LIST_ENTRY **__fastcall FxWmiProvider::GetInstanceReferencedLocked(FxWmiProvider *this, unsigned int Index, void *Tag)
{
  unsigned int m_NumInstances; // r10d
  _LIST_ENTRY **p_Blink; // rbx
  _LIST_ENTRY *Flink; // r9
  int v6; // eax
  unsigned int RefCount; // edx
  FxTagTracker *Blink; // rcx

  m_NumInstances = this->m_NumInstances;
  p_Blink = 0LL;
  Flink = this->m_InstanceListHead.Flink;
  v6 = 0;
  if ( m_NumInstances )
  {
    while ( v6 != Index )
    {
      Flink = Flink->Flink;
      if ( ++v6 >= m_NumInstances )
        return p_Blink;
    }
    p_Blink = &Flink[-8].Blink;
    RefCount = _InterlockedIncrement((volatile signed __int32 *)&Flink[-7].Flink + 1);
    if ( SLOBYTE(Flink[-6].Flink) >= 0 )
      Blink = 0LL;
    else
      Blink = (FxTagTracker *)Flink[-10].Blink;
    if ( Blink )
      FxTagTracker::UpdateTagHistory(
        Blink,
        Tag,
        498,
        "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiprovider.cpp",
        TagAddRef,
        RefCount);
  }
  return p_Blink;
}

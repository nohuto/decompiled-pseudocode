/*
 * XREFs of ?ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C0071884
 * Callers:
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C002CE60 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z @ 0x1C00717F8 (-ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqDd @ 0x1C0068894 (WPP_IFR_SF_qqDd.c)
 */

char __fastcall FxChildList::ReenumerateEntryLocked(
        FxChildList *this,
        FxDeviceDescriptionEntry *Entry,
        unsigned __int8 FromQDR)
{
  _LIST_ENTRY *p_m_ModificationLink; // r9
  char v4; // di
  _LIST_ENTRY *Blink; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDevice *m_Pdo; // r8
  _DEVICE_OBJECT *_a2; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // r8
  _FX_DRIVER_GLOBALS *v11; // rcx
  FxDevice *v12; // r10
  _DEVICE_OBJECT *m_DeviceObject; // r8
  unsigned __int16 v14; // ax
  const void *v15; // r10

  p_m_ModificationLink = &Entry->m_ModificationLink;
  v4 = 1;
  if ( p_m_ModificationLink->Flink == p_m_ModificationLink && (unsigned int)(Entry->m_DescriptionState - 1) <= 1 )
  {
    if ( !FromQDR )
    {
      Entry->m_ModificationState = ModificationClone;
      Blink = this->m_ModificationListHead.Blink;
      if ( Blink->Flink != &this->m_ModificationListHead )
        __fastfail(3u);
      p_m_ModificationLink->Flink = &this->m_ModificationListHead;
      Entry->m_ModificationLink.Blink = Blink;
      Blink->Flink = p_m_ModificationLink;
      this->m_ModificationListHead.Blink = p_m_ModificationLink;
    }
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      m_Pdo = Entry->m_Pdo;
      _a2 = m_Pdo->m_DeviceObject.m_DeviceObject;
      m_ObjectSize = m_Pdo->m_ObjectSize;
      _a1 = (const void *)((unsigned __int64)m_Pdo ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0x14u, WPP_FxChildList_cpp_Traceguids, _a1, _a2);
    }
  }
  else
  {
    v11 = this->m_Globals;
    if ( v11->FxVerboseOn )
    {
      v12 = Entry->m_Pdo;
      m_DeviceObject = v12->m_DeviceObject.m_DeviceObject;
      v14 = v12->m_ObjectSize;
      v15 = (const void *)((unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v14 )
        v15 = 0LL;
      WPP_IFR_SF_qqDd(
        v11,
        5u,
        0xCu,
        0x15u,
        WPP_FxChildList_cpp_Traceguids,
        v15,
        m_DeviceObject,
        p_m_ModificationLink->Flink == p_m_ModificationLink,
        (unsigned int)(Entry->m_DescriptionState - 1) <= 1);
    }
    return 0;
  }
  return v4;
}

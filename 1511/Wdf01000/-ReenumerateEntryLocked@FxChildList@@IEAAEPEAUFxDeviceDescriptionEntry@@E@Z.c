/*
 * XREFs of ?ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C00601CC
 * Callers:
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C0026490 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z @ 0x1C0060148 (-ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqDd @ 0x1C0057E44 (WPP_IFR_SF_qqDd.c)
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
  FxDevice *m_Pdo; // rax
  _DEVICE_OBJECT *_a2; // rdx
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v10; // r10
  FxDevice *v11; // rcx
  _DEVICE_OBJECT *m_DeviceObject; // r11
  const void *v13; // rcx

  p_m_ModificationLink = &Entry->m_ModificationLink;
  v4 = 1;
  if ( p_m_ModificationLink->Flink == p_m_ModificationLink && (unsigned int)(Entry->m_DescriptionState - 1) <= 1 )
  {
    if ( !FromQDR )
    {
      Entry->m_ModificationState = ModificationClone;
      Blink = this->m_ModificationListHead.Blink;
      p_m_ModificationLink->Flink = &this->m_ModificationListHead;
      Entry->m_ModificationLink.Blink = Blink;
      if ( Blink->Flink != &this->m_ModificationListHead )
        __fastfail(3u);
      Blink->Flink = p_m_ModificationLink;
      this->m_ModificationListHead.Blink = p_m_ModificationLink;
    }
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      m_Pdo = Entry->m_Pdo;
      _a2 = m_Pdo->m_DeviceObject.m_DeviceObject;
      if ( m_Pdo->m_ObjectSize )
        _a1 = (const void *)((unsigned __int64)m_Pdo ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a1 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0x14u, WPP_FxChildList_cpp_Traceguids, _a1, _a2);
    }
  }
  else
  {
    v10 = this->m_Globals;
    if ( v10->FxVerboseOn )
    {
      v11 = Entry->m_Pdo;
      m_DeviceObject = v11->m_DeviceObject.m_DeviceObject;
      if ( v11->m_ObjectSize )
        v13 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v13 = 0LL;
      WPP_IFR_SF_qqDd(
        v10,
        5u,
        0xCu,
        0x15u,
        WPP_FxChildList_cpp_Traceguids,
        v13,
        m_DeviceObject,
        p_m_ModificationLink->Flink == p_m_ModificationLink,
        (unsigned int)(Entry->m_DescriptionState - 1) <= 1);
    }
    return 0;
  }
  return v4;
}

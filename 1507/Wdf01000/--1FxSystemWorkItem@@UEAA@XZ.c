/*
 * XREFs of ??1FxSystemWorkItem@@UEAA@XZ @ 0x1C000A278
 * Callers:
 *     ??_GFxSystemWorkItem@@UEAAPEAXI@Z @ 0x1C000A2E0 (--_GFxSystemWorkItem@@UEAAPEAXI@Z.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

void __fastcall FxSystemWorkItem::~FxSystemWorkItem(FxSystemWorkItem *this)
{
  bool v1; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  struct _IO_WORKITEM *m_WorkItem; // rcx
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = this->m_RunningDown == 0;
  m_Globals = this->m_Globals;
  this->__vftable = (FxSystemWorkItem_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.PagedHead;
  if ( v1 )
  {
    if ( this->m_WorkItem.m_WorkItem )
    {
      WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xAu, WPP_FxSystemWorkitem_cpp_Traceguids);
      v5 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        m_Globals->Public.DriverName,
        (const char *)&v5,
        m_Globals->Public.DriverName,
        (const char *)&v5);
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
    }
  }
  if ( this->m_WorkItem.m_WorkItem )
  {
    m_WorkItem = this->m_WorkItem.m_WorkItem;
    if ( m_WorkItem )
    {
      IoFreeWorkItem(m_WorkItem);
      this->m_WorkItem.m_WorkItem = 0LL;
    }
  }
  FxNonPagedObject::~FxNonPagedObject(this);
}

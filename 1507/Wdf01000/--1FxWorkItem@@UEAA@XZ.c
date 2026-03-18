/*
 * XREFs of ??1FxWorkItem@@UEAA@XZ @ 0x1C001F744
 * Callers:
 *     ??_EFxWorkItem@@UEAAPEAXI@Z @ 0x1C001F7C0 (--_EFxWorkItem@@UEAAPEAXI@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

void __fastcall FxWorkItem::~FxWorkItem(FxWorkItem *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxObject *m_Object; // rcx
  struct _IO_WORKITEM *m_WorkItem; // rcx
  const void *_a1; // rax
  int v6; // [rsp+40h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  this->__vftable = (FxWorkItem_vtbl *)&FxWorkItem::`vftable';
  if ( !this->m_RunningDown && this->m_Callback )
  {
    _a1 = this->m_ObjectSize ? (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xAu, WPP_FxWorkItem_cpp_Traceguids, _a1);
    v6 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&v6,
      m_Globals->Public.DriverName,
      (const char *)&v6);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
  m_Object = this->m_Object;
  if ( m_Object )
  {
    m_Object->Release(m_Object, this, 91, "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp");
    this->m_Object = 0LL;
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

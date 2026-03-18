/*
 * XREFs of ??1FxPkgIo@@UEAA@XZ @ 0x1C0093828
 * Callers:
 *     ??_EFxPkgIo@@UEAAPEAXI@Z @ 0x1C00938F0 (--_EFxPkgIo@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C006783C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall FxPkgIo::~FxPkgIo(FxPkgIo *this, unsigned int a2, unsigned int a3)
{
  _LIST_ENTRY *p_m_DynamicDispatchInfoListHead; // rdi
  _LIST_ENTRY *Flink; // rsi
  _LIST_ENTRY *v6; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  this->m_DefaultQueue = 0LL;
  this->m_DeviceBase = 0LL;
  p_m_DynamicDispatchInfoListHead = &this->m_DynamicDispatchInfoListHead;
  this->__vftable = (FxPkgIo_vtbl *)FxPkgIo::`vftable';
  while ( p_m_DynamicDispatchInfoListHead->Flink != p_m_DynamicDispatchInfoListHead )
  {
    Flink = p_m_DynamicDispatchInfoListHead->Flink;
    v6 = p_m_DynamicDispatchInfoListHead->Flink->Flink;
    if ( p_m_DynamicDispatchInfoListHead->Flink->Blink != p_m_DynamicDispatchInfoListHead || v6->Blink != Flink )
      __fastfail(3u);
    p_m_DynamicDispatchInfoListHead->Flink = v6;
    v6->Blink = p_m_DynamicDispatchInfoListHead;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    `vector destructor iterator'(
      (char *)&Flink[1],
      0x10uLL,
      4uLL,
      (void (__fastcall *)(void *))FxDeviceBase::AddChildList);
    FxPoolFree(Flink);
  }
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0xBu, WPP_FxPkgIo_cpp_Traceguids, this);
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
}

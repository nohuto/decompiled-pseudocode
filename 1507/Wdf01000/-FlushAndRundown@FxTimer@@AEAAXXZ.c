/*
 * XREFs of ?FlushAndRundown@FxTimer@@AEAAXXZ @ 0x1C0077874
 * Callers:
 *     ?Dispose@FxTimer@@UEAAEXZ @ 0x1C0077820 (-Dispose@FxTimer@@UEAAEXZ.c)
 * Callees:
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C0007D00 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

void __fastcall FxTimer::FlushAndRundown(FxTimer *this, __int64 a2, unsigned __int8 a3)
{
  const void *_a1; // rdx
  __int64 v5; // rax
  FxSystemWorkItem *m_SystemWorkItem; // rcx
  FxObject *m_Object; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-28h]
  int v9; // [rsp+50h] [rbp+8h] BYREF

  if ( this->m_CallbackThread == KeGetCurrentThread() )
  {
    _a1 = this->m_ObjectSize ? (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 2u, 0x12u, 0xEu, WPP_FxTimer_cpp_Traceguids, _a1, this->m_CallbackThread);
    traceGuid = (const _GUID *)&v9;
    v9 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( *(_BYTE *)(v5 + 318) )
      DbgBreakPoint();
  }
  FxTimer::Stop(this, 1u, a3);
  m_SystemWorkItem = this->m_SystemWorkItem;
  if ( m_SystemWorkItem )
  {
    m_SystemWorkItem->DeleteObject(m_SystemWorkItem);
    this->m_SystemWorkItem = 0LL;
  }
  m_Object = this->m_Object;
  if ( m_Object )
  {
    this->m_Object = 0LL;
    ((void (__fastcall *)(FxObject *, FxTimer *, __int64, const char *, const _GUID *))m_Object->Release)(
      m_Object,
      this,
      525LL,
      "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp",
      traceGuid);
  }
  this->Release(this, this, 531, "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp");
}

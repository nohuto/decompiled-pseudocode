/*
 * XREFs of ??1FxTimer@@UEAA@XZ @ 0x1C0077700
 * Callers:
 *     ??_EFxTimer@@UEAAPEAXI@Z @ 0x1C00777E0 (--_EFxTimer@@UEAAPEAXI@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

void __fastcall FxTimer::~FxTimer(FxTimer *this, __int64 a2, unsigned int a3)
{
  const void *_a1; // rax
  __int64 v5; // rax
  struct _EX_TIMER *m_KernelExTimer; // rcx

  this->__vftable = (FxTimer_vtbl *)&FxTimer::`vftable';
  if ( this->m_Object )
  {
    _a1 = this->m_ObjectSize ? (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
    WPP_IFR_SF_q(this->m_Globals, 2u, 0x12u, 0xAu, WPP_FxTimer_cpp_Traceguids, _a1);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( *(_BYTE *)(v5 + 318) )
      DbgBreakPoint();
  }
  if ( this->m_Timer.m_Timer.m_IsExtTimer )
  {
    m_KernelExTimer = this->m_Timer.m_Timer.m_KernelExTimer;
    if ( m_KernelExTimer )
    {
      LOBYTE(a2) = 1;
      ExDeleteTimer(m_KernelExTimer, a2, 0LL, 0LL);
      this->m_Timer.m_Timer.m_KernelExTimer = 0LL;
    }
  }
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
}

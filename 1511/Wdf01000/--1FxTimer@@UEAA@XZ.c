/*
 * XREFs of ??1FxTimer@@UEAA@XZ @ 0x1C006BFA0
 * Callers:
 *     ??_EFxTimer@@UEAAPEAXI@Z @ 0x1C006C010 (--_EFxTimer@@UEAAPEAXI@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ??1MxTimer@@QEAA@XZ @ 0x1C0054E68 (--1MxTimer@@QEAA@XZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxTimer::~FxTimer(FxTimer *this, __int64 a2)
{
  const void *_a1; // rax
  unsigned int v4; // edx
  unsigned int v5; // r8d

  this->__vftable = (FxTimer_vtbl *)&FxTimer::`vftable';
  _a1 = 0LL;
  if ( this->m_Object )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_q(this->m_Globals, 2u, 0x12u, 0xAu, WPP_FxTimer_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  MxTimer::~MxTimer(&this->m_Timer, a2);
  FxNonPagedObject::~FxNonPagedObject(this, v4, v5);
}

/*
 * XREFs of ?ReleaseLock@FxSpinLock@@QEAAXXZ @ 0x1C002DD58
 * Callers:
 *     imp_WdfSpinLockRelease @ 0x1C002DC80 (imp_WdfSpinLockRelease.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C006437C (WPP_IFR_SF_qqq.c)
 */

void __fastcall FxSpinLock::ReleaseLock(FxSpinLock *this)
{
  unsigned __int16 m_ObjectSize; // cx
  struct _KTHREAD **v3; // rdx
  struct _KTHREAD *_a3; // r8
  struct _KTHREAD *_a2; // rdx
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS **p_m_Globals; // rdi
  struct _KTHREAD *CurrentThread; // rdx
  const void *v9; // rax
  unsigned __int64 v10; // rbx

  m_ObjectSize = this->m_ObjectSize;
  if ( m_ObjectSize != 128 )
  {
    v3 = (struct _KTHREAD **)&this[1];
    if ( this != (FxSpinLock *)-128LL )
    {
      _a3 = *v3;
      if ( *v3 != KeGetCurrentThread() )
      {
        if ( _a3 )
        {
          CurrentThread = KeGetCurrentThread();
          if ( m_ObjectSize )
            v9 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v9 = 0LL;
          p_m_Globals = &this->m_Globals;
          WPP_IFR_SF_qqq(this->m_Globals, 2u, 2u, 0xBu, WPP_FxSpinLock_cpp_Traceguids, v9, CurrentThread, _a3);
        }
        else
        {
          _a2 = KeGetCurrentThread();
          if ( m_ObjectSize )
            _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            _a1 = 0LL;
          p_m_Globals = &this->m_Globals;
          WPP_IFR_SF_qq(this->m_Globals, 2u, 2u, 0xAu, WPP_FxSpinLock_cpp_Traceguids, _a1, _a2);
        }
        if ( this->m_ObjectSize )
          v10 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v10 = 0LL;
        FxVerifierBugCheckWorker(*p_m_Globals, WDF_INVALID_LOCK_OPERATION, v10, 1uLL);
      }
      *(_QWORD *)(*(_QWORD *)&this[1].m_Type + 16LL) = MEMORY[0xFFFFF78000000320]
                                                     - *(_QWORD *)(*(_QWORD *)&this[1].m_Type + 8LL);
      *(_QWORD *)&this[1].m_Type += 24LL;
      if ( *(_QWORD *)&this[1].m_Type >= (unsigned __int64)&this[3] )
        *(_QWORD *)&this[1].m_Type = (char *)this + 144;
      *v3 = 0LL;
    }
  }
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, this->m_Irql);
}

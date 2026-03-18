/*
 * XREFs of imp_WdfSpinLockAcquire @ 0x1C002DBE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

void __fastcall imp_WdfSpinLockAcquire(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 SpinLock)
{
  FxSpinLock *v3; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  void *v6; // rdi
  _QWORD *v7; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v9; // [rsp+58h] [rbp+10h] BYREF
  FxSpinLock *pLock; // [rsp+60h] [rbp+18h] BYREF

  if ( !SpinLock )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1024uLL);
  v3 = (FxSpinLock *)(~SpinLock & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (SpinLock & 1) != 0 )
  {
    Offset = LOWORD(v3->__vftable);
    v3 = (FxSpinLock *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4132 )
  {
    pLock = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pLock, (void *)SpinLock, 0x1024u, Offset);
    v3 = pLock;
  }
  m_Globals = v3->m_Globals;
  if ( v3->m_InterruptLock )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 2u, 0xAu, WPP_FxSpinLockAPI_cpp_Traceguids, (const void *)SpinLock);
    v9 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&v9,
      m_Globals->Public.DriverName,
      (const char *)&v9);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
  else
  {
    v6 = retaddr;
    if ( !m_Globals->FxVerifierLock )
      v6 = 0LL;
    v3->m_Irql = KeAcquireSpinLockRaiseToDpc(&v3->m_SpinLock.m_Lock);
    if ( v3->m_ObjectSize != 128 && v3 != (FxSpinLock *)-128LL )
    {
      v3[1].__vftable = (FxSpinLock_vtbl *)KeGetCurrentThread();
      v7 = *(_QWORD **)&v3[1].m_Type;
      v7[1] = MEMORY[0xFFFFF78000000320];
      *v7 = v6;
    }
  }
}

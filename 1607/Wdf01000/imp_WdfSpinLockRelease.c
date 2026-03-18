/*
 * XREFs of imp_WdfSpinLockRelease @ 0x1C00103A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C00671F0 (WPP_IFR_SF_qqq.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C007BB94 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfSpinLockRelease(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 SpinLock)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *v6; // rbp
  __int16 v7; // cx
  struct _KTHREAD **v8; // rdx
  struct _KTHREAD *_a3; // r8
  struct _KTHREAD *_a2; // rdx
  const void *v11; // rax
  struct _KTHREAD *CurrentThread; // rdx
  const void *v13; // rax
  FxSpinLock *pLock; // [rsp+58h] [rbp+10h] BYREF

  if ( !SpinLock )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1024uLL);
  v3 = 0LL;
  v4 = ~SpinLock & 0xFFFFFFFFFFFFFFF8uLL;
  LOWORD(Offset) = 0;
  if ( (SpinLock & 1) != 0 )
  {
    Offset = *(unsigned __int16 *)v4;
    v4 -= Offset;
  }
  if ( *(_WORD *)(v4 + 8) == 4132 )
  {
    pLock = (FxSpinLock *)v4;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v4, (void **)&pLock, (void *)SpinLock, 0x1024u, Offset);
    v4 = (unsigned __int64)pLock;
  }
  v6 = *(_FX_DRIVER_GLOBALS **)(v4 + 16);
  if ( *(_BYTE *)(v4 + 121) )
  {
    WPP_IFR_SF_q(v6, 2u, 2u, 0xBu, WPP_FxSpinLockAPI_cpp_Traceguids, (const void *)SpinLock);
    FxVerifierDbgBreakPoint(v6);
  }
  else
  {
    v7 = *(_WORD *)(v4 + 10);
    if ( v7 != 128 )
    {
      v8 = (struct _KTHREAD **)(v4 + 128);
      if ( v4 != -128LL )
      {
        _a3 = *v8;
        if ( *v8 != KeGetCurrentThread() )
        {
          if ( _a3 )
          {
            CurrentThread = KeGetCurrentThread();
            if ( v7 )
              v13 = (const void *)((unsigned __int64)pLock ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v13 = 0LL;
            WPP_IFR_SF_qqq(v6, 2u, 2u, 0xBu, WPP_FxSpinLock_cpp_Traceguids, v13, CurrentThread, _a3);
          }
          else
          {
            _a2 = KeGetCurrentThread();
            if ( v7 )
              v11 = (const void *)((unsigned __int64)pLock ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v11 = 0LL;
            WPP_IFR_SF_qq(v6, 2u, 2u, 0xAu, WPP_FxSpinLock_cpp_Traceguids, v11, _a2);
          }
          if ( *(_WORD *)(v4 + 10) )
            v3 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
          FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v4 + 16), WDF_INVALID_LOCK_OPERATION, v3, 1uLL);
        }
        *(_QWORD *)(*(_QWORD *)(v4 + 136) + 16LL) = MEMORY[0xFFFFF78000000320]
                                                  - *(_QWORD *)(*(_QWORD *)(v4 + 136) + 8LL);
        *(_QWORD *)(v4 + 136) += 24LL;
        if ( *(_QWORD *)(v4 + 136) >= v4 + 384 )
          *(_QWORD *)(v4 + 136) = v4 + 144;
        *v8 = 0LL;
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 112), *(_BYTE *)(v4 + 120));
  }
}

/*
 * XREFs of imp_WdfSpinLockRelease @ 0x1C0003EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005CF0 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C006AA34 (WPP_IFR_SF_qqq.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfSpinLockRelease(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 SpinLock)
{
  unsigned __int16 *v3; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *v5; // rsi
  unsigned __int16 v6; // dx
  struct _KTHREAD **v7; // r8
  struct _KTHREAD *_a3; // r10
  unsigned __int64 v9; // rdi
  const void *v10; // rax
  const void *v11; // rax
  struct _KTHREAD *_a2; // [rsp+30h] [rbp-18h]
  struct _KTHREAD *_a2a; // [rsp+30h] [rbp-18h]
  FxSpinLock *pLock; // [rsp+58h] [rbp+10h] BYREF

  if ( !SpinLock )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1024uLL);
  v3 = (unsigned __int16 *)(~SpinLock & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (SpinLock & 1) != 0 )
  {
    Offset = *v3;
    v3 = (unsigned __int16 *)((char *)v3 - Offset);
  }
  if ( v3[4] == 4132 )
  {
    pLock = (FxSpinLock *)v3;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v3, (void **)&pLock, (void *)SpinLock, 0x1024u, Offset);
    v3 = (unsigned __int16 *)pLock;
  }
  v5 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v3 + 2);
  if ( *((_BYTE *)v3 + 121) )
  {
    WPP_IFR_SF_q(v5, 2u, 2u, 0xBu, WPP_FxSpinLockAPI_cpp_Traceguids, (const void *)SpinLock);
    FxVerifierDbgBreakPoint(v5);
  }
  else
  {
    v6 = v3[5];
    if ( v6 != 128 )
    {
      v7 = (struct _KTHREAD **)(v3 + 64);
      if ( v3 != (unsigned __int16 *)-128LL )
      {
        _a3 = *v7;
        if ( *v7 != KeGetCurrentThread() )
        {
          if ( _a3 )
          {
            v9 = (unsigned __int64)pLock ^ 0xFFFFFFFFFFFFFFF8uLL;
            _a2a = KeGetCurrentThread();
            v11 = (const void *)((unsigned __int64)pLock ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v6 )
              v11 = 0LL;
            WPP_IFR_SF_qqq(v5, 2u, 2u, 0xBu, WPP_FxSpinLock_cpp_Traceguids, v11, _a2a, _a3);
          }
          else
          {
            _a2 = KeGetCurrentThread();
            v9 = (unsigned __int64)pLock ^ 0xFFFFFFFFFFFFFFF8uLL;
            v10 = (const void *)((unsigned __int64)pLock ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v6 )
              v10 = 0LL;
            WPP_IFR_SF_qq(v5, 2u, 2u, 0xAu, WPP_FxSpinLock_cpp_Traceguids, v10, _a2);
          }
          if ( !v3[5] )
            v9 = 0LL;
          FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)v3 + 2), WDF_INVALID_LOCK_OPERATION, v9, 1uLL);
        }
        *(_QWORD *)(*((_QWORD *)v3 + 17) + 16LL) = MEMORY[0xFFFFF78000000320] - *(_QWORD *)(*((_QWORD *)v3 + 17) + 8LL);
        *((_QWORD *)v3 + 17) += 24LL;
        if ( *((_QWORD *)v3 + 17) >= (unsigned __int64)(v3 + 192) )
          *((_QWORD *)v3 + 17) = v3 + 72;
        *v7 = 0LL;
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v3 + 14, *((_BYTE *)v3 + 120));
  }
}

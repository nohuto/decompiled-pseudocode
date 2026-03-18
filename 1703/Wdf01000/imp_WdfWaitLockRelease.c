/*
 * XREFs of imp_WdfWaitLockRelease @ 0x1C0004870
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005CF0 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfWaitLockRelease(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Lock)
{
  FxWaitLock *v2; // rcx
  __int64 Offset; // r8
  _KEVENT *p_m_Event; // rcx
  FxWaitLock *pLock; // [rsp+48h] [rbp+10h] BYREF

  if ( !Lock )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1023uLL);
  v2 = (FxWaitLock *)(~Lock & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Lock & 1) != 0 )
  {
    Offset = LOWORD(v2->__vftable);
    v2 = (FxWaitLock *)((char *)v2 - Offset);
  }
  if ( v2->m_Type == 4131 )
  {
    pLock = v2;
  }
  else
  {
    FxObjectHandleGetPtrQI(v2, (void **)&pLock, (void *)Lock, 0x1023u, Offset);
    v2 = pLock;
  }
  p_m_Event = &v2->m_Event.m_Event;
  p_m_Event[1].Header.WaitListHead.Flink = 0LL;
  KeSetEvent(p_m_Event, 0, 0);
  KeLeaveCriticalRegion();
}

/*
 * XREFs of PdcActivationClientUnregister @ 0x1800A7A78
 * Callers:
 *     ?BeginTermination@CAudioSrv@@UEAAJXZ @ 0x180067B80 (-BeginTermination@CAudioSrv@@UEAAJXZ.c)
 * Callees:
 *     PdcAcquireRwLockExclusive @ 0x1800A7AFC (PdcAcquireRwLockExclusive.c)
 *     PdcPortClose @ 0x1800A7B20 (PdcPortClose.c)
 */

__int64 PdcActivationClientUnregister()
{
  RTL_SRWLOCK *v0; // rsi
  unsigned int v1; // edi

  v0 = (RTL_SRWLOCK *)g_hPdcActivator;
  v1 = 0;
  if ( g_hPdcActivator && *(_DWORD *)g_hPdcActivator == 1097032784 )
  {
    PdcAcquireRwLockExclusive((char *)g_hPdcActivator + 8);
    PdcPortClose(v0[4].Ptr);
    v0[4].Ptr = 0LL;
    LODWORD(v0->Ptr) = 0;
    LODWORD(v0[2].Ptr) = 0;
    ReleaseSRWLockExclusive(v0 + 1);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v0);
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v1;
}

/*
 * XREFs of ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x1C007ED50
 * Callers:
 *     <none>
 * Callees:
 *     hUserCreateKernelEvent_0 @ 0x1C0002F28 (hUserCreateKernelEvent_0.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     ??_GCInputManager@@IEAAPEAXI@Z @ 0x1C0050074 (--_GCInputManager@@IEAAPEAXI@Z.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 CInputManager::CreateSessionGlobal(void)
{
  __int64 *v0; // rax
  unsigned int v1; // ebx
  __int64 *v2; // rdi
  __int64 KernelEvent_0; // rax
  __int64 v4; // rdx

  v0 = (__int64 *)Win32AllocPool();
  v1 = 0;
  v2 = v0;
  if ( v0 )
  {
    *v0 = 0LL;
    v0[1] = 0LL;
    v0[12] = (__int64)&CIgnoreInputQueue::`vftable';
    v0[13] = (__int64)&CDiscardInputQueue::`vftable';
    v0[14] = 0LL;
    v0[15] = 0LL;
    memset(v0 + 2, 0, 0x50uLL);
  }
  else
  {
    v2 = 0LL;
  }
  if ( v2 )
  {
    KernelEvent_0 = hUserCreateKernelEvent_0();
    *v2 = KernelEvent_0;
    if ( KernelEvent_0 )
    {
      v2[16] = 0LL;
      g_pInputManager = (CInputManager *)v2;
    }
    else
    {
      v1 = -1073741801;
      CInputManager::`scalar deleting destructor'((CInputManager *)v2, v4);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v1;
}

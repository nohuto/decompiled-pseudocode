/*
 * XREFs of ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C000C4EC
 * Callers:
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00CE14C (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00CE1EC (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00CE444 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@@Z @ 0x1C00CE5F4 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@@Z.c)
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C00E8FB4 (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 *     DxgkGetProcessInterferenceCount @ 0x1C016A330 (DxgkGetProcessInterferenceCount.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

DXGPROCESSCALLOUTMUTEX *__fastcall DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX(DXGPROCESSCALLOUTMUTEX *this)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v6; // rax
  __int64 v7; // rax

  Global = DXGGLOBAL::GetGlobal();
  *((_BYTE *)this + 8) = 0;
  *(_QWORD *)this = (char *)Global + 200;
  if ( Global == (struct DXGGLOBAL *)-200LL )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v6 + 24) = 428LL;
    WdLogEvent5_WdAssertion(v6);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) == CurrentThread )
  {
    v7 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v7 + 24) = 435LL;
    WdLogEvent5_WdAssertion(v7);
  }
  return this;
}

/*
 * XREFs of ?Shutdown@CDuckingManager@@UEAAXXZ @ 0x1800A3C00
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CDuckingManager::Shutdown(CDuckingManager *this)
{
  CAudioThreadPool *v1; // rdi

  v1 = ThreadPool;
  *((_DWORD *)this + 72) = 1;
  if ( v1 )
  {
    if ( *((_QWORD *)this + 34) )
      (*(void (__fastcall **)(CAudioThreadPool *, _QWORD, _QWORD))(*(_QWORD *)v1 + 40LL))(
        v1,
        *((_QWORD *)this + 34),
        0LL);
  }
}

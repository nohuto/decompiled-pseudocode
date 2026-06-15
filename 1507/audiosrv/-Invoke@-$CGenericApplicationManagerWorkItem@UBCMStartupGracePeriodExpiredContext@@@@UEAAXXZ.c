/*
 * XREFs of ?Invoke@?$CGenericApplicationManagerWorkItem@UBCMStartupGracePeriodExpiredContext@@@@UEAAXXZ @ 0x180005730
 * Callers:
 *     <none>
 * Callees:
 *     ?OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContext@@@Z @ 0x1800020C0 (-OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContex.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CGenericApplicationManagerWorkItem<BCMStartupGracePeriodExpiredContext>::Invoke(
        __int64 a1,
        __int64 a2,
        bool a3)
{
  __int64 (__fastcall *v3)(CApplicationManager *, CApplication **, bool); // rdi
  CApplication **v4; // rsi

  v3 = *(__int64 (__fastcall **)(CApplicationManager *, CApplication **, bool))(a1 + 8);
  v4 = *(CApplication ***)(a1 + 16);
  if ( v3 == CApplicationManager::OnBCMStartupGracePeriodExpired )
    CApplicationManager::OnBCMStartupGracePeriodExpired(g_ApplicationManager, v4, a3);
  else
    ((void (__fastcall *)(CRefCountedObject *, CApplication **))v3)(g_ApplicationManager, v4);
  operator delete(*(void **)(a1 + 16));
}

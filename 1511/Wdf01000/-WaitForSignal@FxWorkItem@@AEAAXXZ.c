/*
 * XREFs of ?WaitForSignal@FxWorkItem@@AEAAXXZ @ 0x1C000F518
 * Callers:
 *     imp_WdfWorkItemFlush @ 0x1C000F4B0 (imp_WdfWorkItemFlush.c)
 *     ?Dispose@FxWorkItem@@UEAAEXZ @ 0x1C0023F60 (-Dispose@FxWorkItem@@UEAAEXZ.c)
 * Callees:
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJPEA_J@Z @ 0x1C000F558 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJPEA_J@Z.c)
 *     ?GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ @ 0x1C0035AD0 (-GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ.c)
 */

void __fastcall FxWorkItem::WaitForSignal(FxWorkItem *this)
{
  WDFWORKITEM__ *Handle; // rax
  _LARGE_INTEGER timeOut; // [rsp+30h] [rbp+8h] BYREF

  timeOut.QuadPart = -600000000LL;
  while ( FxCREvent::EnterCRAndWaitAndLeave(&this->m_WorkItemCompleted, (__int64 *)&timeOut) == 258 )
  {
    Handle = FxWmiProvider::GetHandle(this);
    DbgPrint("Thread 0x%p is waiting on WDFWORKITEM 0x%p\n", KeGetCurrentThread(), Handle);
  }
}

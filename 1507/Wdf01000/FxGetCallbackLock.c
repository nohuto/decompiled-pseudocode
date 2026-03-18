/*
 * XREFs of FxGetCallbackLock @ 0x1C00793C0
 * Callers:
 *     imp_WdfObjectAcquireLock @ 0x1C0079420 (imp_WdfObjectAcquireLock.c)
 *     imp_WdfObjectReleaseLock @ 0x1C00795C0 (imp_WdfObjectReleaseLock.c)
 * Callees:
 *     <none>
 */

FxCallbackLock *__fastcall FxGetCallbackLock(FxObject *Object)
{
  FxObject_vtbl *v1; // rax
  FxQueryInterfaceParams params; // [rsp+20h] [rbp-18h] BYREF
  IFxHasCallbacks *ihcb; // [rsp+40h] [rbp+8h] BYREF

  params.Object = (void **)&ihcb;
  v1 = Object->__vftable;
  *(_DWORD *)&params.Type = 5379;
  ihcb = 0LL;
  if ( v1->QueryInterface(Object, &params) >= 0 )
    return ihcb->GetCallbackLockPtr(ihcb, 0LL);
  else
    return 0LL;
}

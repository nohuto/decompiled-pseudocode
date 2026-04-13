/*
 * XREFs of ??_E?$AsyncCallbackBase@V?$CMarshaledInterfaceResult@UITargetedContentSubscription@TargetedContent@ContentManagement@@@Internal@Windows@@@Internal@Windows@@UEAAPEAXI@Z @ 0x1800441C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentSubscription>>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentSubscription>>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}

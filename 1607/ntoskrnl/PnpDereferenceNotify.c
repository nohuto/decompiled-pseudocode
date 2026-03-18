/*
 * XREFs of PnpDereferenceNotify @ 0x1403F0FC8
 * Callers:
 *     PnpUnregisterPlugPlayNotification @ 0x140111A40 (PnpUnregisterPlugPlayNotification.c)
 *     PnpProcessDeferredRegistrations @ 0x1403EFCC0 (PnpProcessDeferredRegistrations.c)
 *     PnpNotifyTargetDeviceChange @ 0x1403F0314 (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x1403F0E40 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyHwProfileChange @ 0x14062BB04 (PnpNotifyHwProfileChange.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ExDeleteResourceLite @ 0x1400885B0 (ExDeleteResourceLite.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDereferenceNotify(_WORD *a1)
{
  __int64 v3; // rcx
  _QWORD *v4; // rax
  void *v5; // rcx
  void *v6; // rcx

  if ( a1[28]-- == 1 )
  {
    v3 = *(_QWORD *)a1;
    v4 = (_QWORD *)*((_QWORD *)a1 + 1);
    if ( *(_WORD **)(v3 + 8) != a1 || (_WORD *)*v4 != a1 )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    ObfDereferenceObject(*((PVOID *)a1 + 6));
    if ( *((_DWORD *)a1 + 4) == 3 )
    {
      v5 = (void *)*((_QWORD *)a1 + 11);
      if ( v5 )
      {
        ObfDereferenceObject(v5);
        *((_QWORD *)a1 + 11) = 0LL;
      }
    }
    v6 = (void *)*((_QWORD *)a1 + 3);
    if ( v6 )
    {
      ZwClose(v6);
      *((_QWORD *)a1 + 3) = 0LL;
    }
    ExDeleteResourceLite(*((PERESOURCE *)a1 + 9));
    ExFreePoolWithTag(*((PVOID *)a1 + 9), 0x56706E50u);
    ExFreePoolWithTag(a1, 0);
  }
}

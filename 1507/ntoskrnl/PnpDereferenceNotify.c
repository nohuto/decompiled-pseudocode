/*
 * XREFs of PnpDereferenceNotify @ 0x14046120C
 * Callers:
 *     PnpUnregisterPlugPlayNotification @ 0x140138BC0 (PnpUnregisterPlugPlayNotification.c)
 *     PnpNotifyTargetDeviceChange @ 0x14045EA84 (PnpNotifyTargetDeviceChange.c)
 *     PnpProcessDeferredRegistrations @ 0x14045FFE0 (PnpProcessDeferredRegistrations.c)
 *     PnpNotifyDeviceClassChange @ 0x140460F64 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyHwProfileChange @ 0x14067C6F4 (PnpNotifyHwProfileChange.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExDeleteResourceLite @ 0x1400F29E0 (ExDeleteResourceLite.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
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

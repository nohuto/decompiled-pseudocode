/*
 * XREFs of WmipRegistrationWorker @ 0x1405435C8
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     WmipUnreferenceRegEntry @ 0x1400C2770 (WmipUnreferenceRegEntry.c)
 *     IoControlPnpDeviceActionQueue @ 0x140110C4C (IoControlPnpDeviceActionQueue.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     WmipRegisterOrUpdateDS @ 0x140537360 (WmipRegisterOrUpdateDS.c)
 */

__int64 WmipRegistrationWorker()
{
  _QWORD *v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rdi
  int v3; // ecx
  char v4; // dl
  __int64 result; // rax

  do
  {
    IoControlPnpDeviceActionQueue(1);
    IoControlPnpDeviceActionQueue(0);
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v0 = WmipRegWorkList;
    v1 = *(_QWORD *)WmipRegWorkList;
    if ( *((PVOID **)WmipRegWorkList + 1) != &WmipRegWorkList || *(PVOID *)(v1 + 8) != WmipRegWorkList )
      __fastfail(3u);
    WmipRegWorkList = *(PVOID *)WmipRegWorkList;
    *(_QWORD *)(v1 + 8) = &WmipRegWorkList;
    KeReleaseMutex(&WmipSMMutex, 0);
    v2 = v0[3];
    if ( v2 )
    {
      v3 = *((_DWORD *)v0 + 4);
      if ( v3 )
      {
        if ( v3 != 1 )
          goto LABEL_7;
        v4 = 1;
      }
      else
      {
        v4 = 0;
      }
      WmipRegisterOrUpdateDS(v0[3], v4);
LABEL_7:
      WmipUnreferenceRegEntry(v2);
    }
    ExFreePoolWithTag(v0, 0);
    result = (unsigned int)_InterlockedExchangeAdd(&WmipRegWorkItemCount, 0xFFFFFFFF);
  }
  while ( (_DWORD)result != 1 );
  return result;
}

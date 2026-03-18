/*
 * XREFs of WmipRegistrationWorker @ 0x14057E3C4
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     WmipUnreferenceRegEntry @ 0x1400CF108 (WmipUnreferenceRegEntry.c)
 *     IoControlPnpDeviceActionQueue @ 0x140156FEC (IoControlPnpDeviceActionQueue.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     WmipRegisterOrUpdateDS @ 0x14057B564 (WmipRegisterOrUpdateDS.c)
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

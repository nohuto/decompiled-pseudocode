/*
 * XREFs of FreeDeviceInfo @ 0x1C01DA0F0
 * Callers:
 *     xxxAssessPointerContactState @ 0x1C01CF118 (xxxAssessPointerContactState.c)
 *     InputApc @ 0x1C01DA340 (InputApc.c)
 *     ?DeviceClassNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z @ 0x1C01DE200 (-DeviceClassNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z.c)
 *     ?RequestDeviceChangeHelper@@YAPEAUDEVICEINFO@@PEAU1@@Z @ 0x1C01DE788 (-RequestDeviceChangeHelper@@YAPEAUDEVICEINFO@@PEAU1@@Z.c)
 *     ?RequestSyncDeviceChange@@YAPEAUDEVICEINFO@@PEAU1@GH@Z @ 0x1C01DE7CC (-RequestSyncDeviceChange@@YAPEAUDEVICEINFO@@PEAU1@GH@Z.c)
 *     ProcessDeviceChanges @ 0x1C01E0120 (ProcessDeviceChanges.c)
 *     StartDeviceRead @ 0x1C01E0968 (StartDeviceRead.c)
 * Callees:
 *     ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x1C00071B4 (-FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z.c)
 *     EndAllActiveContacts @ 0x1C01CB36C (EndAllActiveContacts.c)
 *     ReleasePointerDeviceInfo @ 0x1C01CE000 (ReleasePointerDeviceInfo.c)
 *     FreeHidDesc @ 0x1C01D501C (FreeHidDesc.c)
 *     HidTLCActive @ 0x1C01D5530 (HidTLCActive.c)
 */

__int64 __fastcall FreeDeviceInfo(__int64 a1)
{
  __int64 i; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  bool v10; // zf
  struct tagHID_PAGEONLY_REQUEST *v11; // rcx
  __int16 v12; // ax

  if ( gbRITBlockedOnDIT )
  {
    *(_WORD *)(a1 + 64) |= 0x200u;
    return 0LL;
  }
  if ( (*(_BYTE *)(a1 + 64) & 2) == 0
    && (*(_WORD *)(a1 + 66) & 0x2100) == 0
    && ExIsResourceAcquiredExclusiveLite(gpresUser) )
  {
    for ( i = gpDeviceInfoList; *(_QWORD *)i; i = *(_QWORD *)i + 56LL )
    {
      if ( *(_QWORD *)i == a1 && (unsigned int)HMMarkObjectDestroy(a1) )
      {
        v4 = a1 + 96;
        if ( *(_QWORD *)v4 != v4 )
        {
          v5 = *(_QWORD *)v4;
          v6 = *(_QWORD **)(a1 + 104);
          if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || *v6 != v4 )
            __fastfail(3u);
          *v6 = v5;
          *(_QWORD *)(v5 + 8) = v6;
        }
        if ( *(_QWORD *)(a1 + 72) )
        {
          Win32FreePool(*(_QWORD *)(a1 + 72));
          *(_QWORD *)(a1 + 72) = 0LL;
        }
        v7 = *(_QWORD *)(a1 + 208);
        if ( v7 )
          Win32FreePool(v7);
        v8 = *(_QWORD *)(a1 + 320);
        if ( v8 )
          Win32FreePool(v8);
        if ( *(_BYTE *)(a1 + 48) == 2 )
        {
          v9 = *(_QWORD *)(a1 + 408);
          v10 = (*(_DWORD *)(v9 + 20))-- == 1;
          if ( v10 && !(unsigned int)HidTLCActive(*(_DWORD **)(a1 + 408)) )
            FreeHidPageOnlyRequest(v11);
          if ( *(_DWORD *)(a1 + 308) )
            ReleasePointerDeviceInfo(a1);
          FreeHidDesc(*(_QWORD **)(a1 + 400));
        }
        if ( *(_BYTE *)(a1 + 48) == 3 )
          FreeHidDesc(*(_QWORD **)(a1 + 400));
        *(_QWORD *)i = *(_QWORD *)(a1 + 56);
        HMFreeObject(a1);
        return *(_QWORD *)i;
      }
    }
    return 0LL;
  }
  *(_WORD *)(a1 + 64) |= 8u;
  v12 = *(_WORD *)(a1 + 66);
  if ( (v12 & 0x100) != 0 && *(_DWORD *)(a1 + 308) )
    EndAllActiveContacts(*(struct tagHID_POINTER_DEVICE_INFO **)(a1 + 416), (_WORD *)(a1 + 66));
  else
    *(_WORD *)(a1 + 66) = v12 | 0x80;
  if ( (*(_BYTE *)(a1 + 64) & 2) == 0 )
    KeSetEvent(*(PRKEVENT *)(a1 + 72), 1, 0);
  return *(_QWORD *)(a1 + 56);
}

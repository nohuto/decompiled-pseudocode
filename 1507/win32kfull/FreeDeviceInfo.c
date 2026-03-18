/*
 * XREFs of FreeDeviceInfo @ 0x1C01D9AE0
 * Callers:
 *     xxxAssessPointerContactState @ 0x1C01CD534 (xxxAssessPointerContactState.c)
 *     InputApc @ 0x1C01D9D30 (InputApc.c)
 *     ?DeviceClassNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z @ 0x1C01DDC00 (-DeviceClassNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z.c)
 *     ?RequestDeviceChangeHelper@@YAPEAUDEVICEINFO@@PEAU1@@Z @ 0x1C01DE184 (-RequestDeviceChangeHelper@@YAPEAUDEVICEINFO@@PEAU1@@Z.c)
 *     ?RequestSyncDeviceChange@@YAPEAUDEVICEINFO@@PEAU1@GH@Z @ 0x1C01DE1C8 (-RequestSyncDeviceChange@@YAPEAUDEVICEINFO@@PEAU1@GH@Z.c)
 *     ProcessDeviceChanges @ 0x1C01DFB10 (ProcessDeviceChanges.c)
 *     StartDeviceRead @ 0x1C01E0354 (StartDeviceRead.c)
 * Callees:
 *     ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x1C0132224 (-FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z.c)
 *     EndAllActiveContacts @ 0x1C01C978C (EndAllActiveContacts.c)
 *     ReleasePointerDeviceInfo @ 0x1C01CC420 (ReleasePointerDeviceInfo.c)
 *     FreeHidDesc @ 0x1C01D359C (FreeHidDesc.c)
 *     HidTLCActive @ 0x1C01D3AB0 (HidTLCActive.c)
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
        v4 = a1 + 104;
        if ( *(_QWORD *)v4 != v4 )
        {
          v5 = *(_QWORD *)v4;
          v6 = *(_QWORD **)(a1 + 112);
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
        v7 = *(_QWORD *)(a1 + 216);
        if ( v7 )
          Win32FreePool(v7);
        v8 = *(_QWORD *)(a1 + 328);
        if ( v8 )
          Win32FreePool(v8);
        if ( *(_BYTE *)(a1 + 48) == 2 )
        {
          v9 = *(_QWORD *)(a1 + 408);
          v10 = (*(_DWORD *)(v9 + 20))-- == 1;
          if ( v10 && !(unsigned int)HidTLCActive(*(_DWORD **)(a1 + 408)) )
            FreeHidPageOnlyRequest(v11);
          if ( *(_DWORD *)(a1 + 316) )
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
  if ( (v12 & 0x100) != 0 && *(_DWORD *)(a1 + 316) )
    EndAllActiveContacts(*(struct tagHID_POINTER_DEVICE_INFO **)(a1 + 416), (_WORD *)(a1 + 66));
  else
    *(_WORD *)(a1 + 66) = v12 | 0x80;
  if ( (*(_BYTE *)(a1 + 64) & 2) == 0 )
    KeSetEvent(*(PRKEVENT *)(a1 + 72), 1, 0);
  return *(_QWORD *)(a1 + 56);
}

/*
 * XREFs of UsbhRefPdoDeviceHandle @ 0x1C001FC80
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003574 (UsbhSyncResetDeviceInternal.c)
 *     UsbhPdoInternalDeviceControl @ 0x1C0012F60 (UsbhPdoInternalDeviceControl.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1C0015FA0 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhClearPdoIdleReady @ 0x1C001F1D8 (UsbhClearPdoIdleReady.c)
 *     UsbhPdoSetDeviceData @ 0x1C001F290 (UsbhPdoSetDeviceData.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C001F6F0 (UsbhSyncSendCommandToDevice.c)
 *     UsbhSetPdoIdleReady @ 0x1C001FA4C (UsbhSetPdoIdleReady.c)
 *     UsbhPdoAbortAllDevicePipes @ 0x1C0022014 (UsbhPdoAbortAllDevicePipes.c)
 *     UsbhFdoReturnDeviceHandle @ 0x1C003B6CC (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x1C003E628 (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhGetNodeConnectionInfoForPdo @ 0x1C0047598 (UsbhGetNodeConnectionInfoForPdo.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x1C0047B44 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhGetHubNodeInfo @ 0x1C004DD3C (UsbhGetHubNodeInfo.c)
 *     UsbhPdoQueryWmiDataBlock @ 0x1C004E120 (UsbhPdoQueryWmiDataBlock.c)
 *     UsbhPdoRemoveCleanup @ 0x1C0054970 (UsbhPdoRemoveCleanup.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhRefPdoDeviceHandle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v8; // rax
  KSPIN_LOCK *v9; // r14
  __int64 v10; // r8
  __int64 v11; // r9
  KIRQL v12; // r12
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // r10
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 (__fastcall *v22)(_QWORD, __int64, __int64, _QWORD); // rax
  int v23; // ecx
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r8

  v4 = (unsigned int)a4;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v8 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  v9 = (KSPIN_LOCK *)(v8 + 3720);
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 3720));
  if ( !a2 )
    UsbhTrapFatal_Dbg(0LL, 0LL, v10, v11);
  v13 = *(_QWORD *)(a2 + 64);
  if ( !v13 )
    UsbhTrapFatal_Dbg(a2, 0LL, v10, v11);
  if ( *(_DWORD *)v13 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64), v10, v11);
  v14 = *(int *)(v13 + 1144);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 64);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
      *(_DWORD *)v16 = 824923716;
      *(_QWORD *)(v16 + 8) = 0LL;
      *(_QWORD *)(v16 + 16) = a2;
      *(_QWORD *)(v16 + 24) = v14;
    }
  }
  v17 = *(_DWORD *)(v13 + 1144);
  if ( v17 == 2 )
  {
    v18 = *(_QWORD *)(v13 + 1152);
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      if ( v19 )
      {
        v20 = *(_QWORD *)(v19 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
        *(_DWORD *)v20 = 724260420;
        *(_QWORD *)(v20 + 8) = 0LL;
        *(_QWORD *)(v20 + 16) = v4;
        *(_QWORD *)(v20 + 24) = v18;
      }
    }
    v21 = *(_QWORD *)(a1 + 64);
    if ( !v21 )
      UsbhTrapFatal_Dbg(a1, 0LL, v14, v11);
    if ( *(_DWORD *)v21 != 541218120 )
      UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), v14, v11);
    v22 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(v21 + 4464);
    if ( v22 )
    {
      v23 = v22(*(_QWORD *)(v21 + 4232), v18, a3, (unsigned int)v4);
      if ( v23 >= 0 )
      {
        v24 = *(_QWORD *)(v13 + 1152);
LABEL_19:
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          v25 = *(_QWORD *)(a1 + 64);
          if ( v25 )
          {
            v26 = *(_QWORD *)(v25 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
            *(_DWORD *)v26 = 841700932;
            *(_QWORD *)(v26 + 16) = v23;
            *(_QWORD *)(v26 + 8) = 0LL;
            *(_QWORD *)(v26 + 24) = v24;
          }
        }
        goto LABEL_22;
      }
    }
    else
    {
      v23 = -1073741822;
    }
    v24 = 0LL;
    goto LABEL_19;
  }
  if ( v17 <= 1 )
    Log(a1, 256, 1146497825, a2, *(int *)(v13 + 1144));
  v24 = 0LL;
LABEL_22:
  KeReleaseSpinLock(v9, v12);
  return v24;
}
